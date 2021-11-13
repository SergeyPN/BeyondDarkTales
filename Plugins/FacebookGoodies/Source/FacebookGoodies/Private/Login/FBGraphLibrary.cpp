// Copyright (c) 2020 Nineva Studios

#include "Login/FBGraphLibrary.h"
#include "Login/FBFriendsData.h"
#include "Async/Async.h"
#include "FacebookGoodiesLog.h"
#include "FBGraphLibCallback.h"

#if PLATFORM_ANDROID
#include "Android/Utils/FBJavaConvertor.h"
#include "Android/Utils/FBMethodCallUtils.h"
#endif

#if PLATFORM_IOS
#import <FBSDKCoreKit/FBSDKCoreKit.h>
#endif

FOnQueryCompleteDelegate UFBGraphLibrary::OnQueryCompleteDelegate;
FOnGetFriendsCompleteDelegate UFBGraphLibrary::OnGetFriendsCompleteDelegate;
FOnGetProfileDelegate UFBGraphLibrary::OnGetProfileDelegate;

void UFBGraphLibrary::RunQuery(const FString& Query, TMap<FString, FString> Parameters, EFBHttpMethod HttpMethod, const FOnQueryCompleteDelegate& OnQueryComplete)
{
	OnQueryCompleteDelegate = OnQueryComplete;

#if PLATFORM_ANDROID
	auto JQuery = FJavaClassObject::GetJString(Query);
	FBMethodCallUtils::CallStaticVoidMethod("com/ninevastudios/fbgoodies/FBGoodiesGraph", "RunGraphQuery", "(Ljava/lang/String;Landroid/os/Bundle;I)V",
		*JQuery, FBJavaConvertor::MapToJavaBundle(Parameters), static_cast<int>(HttpMethod));
#endif

#if PLATFORM_IOS
	FBSDKAccessToken* AccessToken = [FBSDKAccessToken currentAccessToken];
	if (!AccessToken) return;

	NSString* HttpMethodString = @"";
	switch (HttpMethod)
	{
		case EFBHttpMethod::Get:
			HttpMethodString = @"GET";
			break;
		case EFBHttpMethod::Post:
			HttpMethodString = @"POST";
			break;
		case EFBHttpMethod::Delete:
			HttpMethodString = @"DELETE";
			break;
	}
	NSDictionary* ParametersDict = [NSMutableDictionary dictionaryWithCapacity:Parameters.Num()];
	for (const auto& Parameter : Parameters)
	{
		[ParametersDict setValue:Parameter.Value.GetNSString()
						  forKey:Parameter.Key.GetNSString()];
	}

	FBSDKGraphRequest* Request = [[FBSDKGraphRequest alloc]
		initWithGraphPath:Query.GetNSString()
			   parameters:ParametersDict
			   HTTPMethod:HttpMethodString];
	[Request startWithCompletionHandler:^(FBSDKGraphRequestConnection* Connection, id Result, NSError* Error) {
		NSError* JsonError;
		NSData* JsonData = [NSJSONSerialization dataWithJSONObject:Result
														   options:0
															 error:&JsonError];

		if (JsonData)
		{
			const FString JsonString([[NSString alloc] initWithData:JsonData encoding:NSUTF8StringEncoding]);

			AsyncTask(ENamedThreads::GameThread, [=]() {
				UFBGraphLibrary::OnQueryCompleteDelegate.ExecuteIfBound(JsonString);
			});
		}
		else
		{
			UE_LOG(LogFacebookGoodies, Error, TEXT("JSON Response parse error"));
		}
	}];
#endif
}

void UFBGraphLibrary::GetProfileData(const FOnGetProfileDelegate& OnGetProfile)
{
	OnGetProfileDelegate = OnGetProfile;

#if PLATFORM_ANDROID
	FBMethodCallUtils::CallStaticVoidMethod("com/ninevastudios/fbgoodies/FBGoodiesGraph", "GetProfileData", "()V");
#endif

#if PLATFORM_IOS
	FBSDKAccessToken* AccessToken = [FBSDKAccessToken currentAccessToken];
	if (!AccessToken) return;

	FBSDKGraphRequest* Request = [[FBSDKGraphRequest alloc]
		initWithGraphPath:@"/me"
			   parameters:@ {@"fields": @"name,email,picture.type(large)"}
			   HTTPMethod:@"GET"];
	[Request startWithCompletionHandler:^(FBSDKGraphRequestConnection* Connection, id Result, NSError* Error) {
		NSDictionary* ResultDict = Result;
		const FString Name(ResultDict[@"name"]);
		const FString Email(ResultDict[@"email"]);
		const FString PictureURL(ResultDict[@"picture"][@"data"][@"url"]);
		AsyncTask(ENamedThreads::GameThread, [=]() {
			UFBGraphLibrary::OnGetProfileDelegate.ExecuteIfBound(Name, Email, PictureURL);
		});
	}	
		];
#endif
}

	void UFBGraphLibrary::GetUserFriendsData(FString UserId, const FOnGetFriendsCompleteDelegate& OnGetFriends)
	{
		OnGetFriendsCompleteDelegate = OnGetFriends;
		
#if PLATFORM_ANDROID
		FBMethodCallUtils::CallStaticVoidMethod("com/ninevastudios/fbgoodies/FBGoodiesFetchFriends", "GetFriendsList", "(Ljava/lang/String;)V", FBJavaConvertor::GetJavaString(UserId));
#endif
		
#if PLATFORM_IOS
		FBSDKAccessToken* AccessToken = [FBSDKAccessToken currentAccessToken];
		if (!AccessToken) return;
		
		NSString* graphPath = [NSString stringWithFormat:@"/%@/friends", UserId.GetNSString()];
		FBSDKGraphRequest *Request = [[FBSDKGraphRequest alloc] initWithGraphPath:graphPath
																	   parameters:@{ @"fields":@""}
																	   HTTPMethod:@"GET"];
		[Request startWithCompletionHandler:^(FBSDKGraphRequestConnection *Connection, id Result, NSError *Error) {
			
			NSDictionary* ResultDict = Result;
			
			FFBFetchedFriendsData FetchedFriends;
			TArray<FFBFriendData> FetchedFriendsData;
			NSArray* ResultDataArray = ResultDict[@"data"];
			
			int FriendsCount = (int)(unsigned long)[ResultDataArray count];
			
			for (int i = 0; i < FriendsCount; i++) {
				NSDictionary* FriendDataObj = [ResultDataArray objectAtIndex:i];
				
				FFBFriendData FriendData;
				FriendData.Name = FString(FriendDataObj [@"name"]);
				FriendData.Id = FString(FriendDataObj [@"id"]);
				
				FetchedFriendsData.Add(FriendData);
			}
			
			
			FetchedFriends.Data = FetchedFriendsData;
			FetchedFriends.Paging.Cursors.Before = FString(ResultDict[@"paging"][@"cursors"][@"before"]);
			FetchedFriends.Paging.Cursors.After = FString(ResultDict[@"paging"][@"cursors"][@"after"]);
			if ([ResultDict[@"paging"] objectForKey:@"previous"] != nil) {
				
				FetchedFriends.Paging.Previous = FString(ResultDict[@"paging"][@"previous"]);
			}
			if ([ResultDict[@"paging"] objectForKey:@"next"] != nil) {
				
				FetchedFriends.Paging.Next = FString(ResultDict[@"paging"][@"next"]);
			}
			
			NSNumber* TotalFriendsCount = (NSNumber*) ResultDict[@"summary"][@"total_count"];
			int FriendsTotalSummary = [TotalFriendsCount intValue];
			FetchedFriends.Summary.TotalCount = FriendsTotalSummary;

			AsyncTask(ENamedThreads::GameThread, [=]() {
				UFBGraphLibrary::OnGetFriendsCompleteDelegate.ExecuteIfBound(FetchedFriends);
			});
		}];
#endif
	}

	void UFBGraphLibrary::GetFriendsPagingData(FString UserId, FFBPagingCursors FetchedCursors, EPagingDirection PagingDirection, const FOnGetFriendsCompleteDelegate& OnGetFriends)
	{
		OnGetFriendsCompleteDelegate = OnGetFriends;

		if (FetchedCursors.After.IsEmpty() || FetchedCursors.Before.IsEmpty())
		{
			UE_LOG(LogFacebookGoodies, Error, TEXT("FetchedCursors object is empty!"));
			return;
		}

#if PLATFORM_ANDROID
		FBMethodCallUtils::CallStaticVoidMethod("com/ninevastudios/fbgoodies/FBGoodiesFetchFriends", "GetPaginatedData", "(I)V", static_cast<int>(PagingDirection));
#endif

#if PLATFORM_IOS
		
		FBSDKAccessToken* AccessToken = [FBSDKAccessToken currentAccessToken];
		if (!AccessToken) return;
		
		NSString* pagingCursor;
		NSString* fetchingDirection;

		if ((int)PagingDirection == 0) {
			pagingCursor = @"before";
			fetchingDirection = FetchedCursors.Before.GetNSString();
		}
		else {
			pagingCursor = @"after";
			fetchingDirection = FetchedCursors.After.GetNSString();
		}
		
		if (pagingCursor.length > 0)
		{
			
			NSString* graphPath = [NSString stringWithFormat:@"/%@/friends", UserId.GetNSString()];
			
			FBSDKGraphRequest *Request = [[FBSDKGraphRequest alloc] initWithGraphPath:graphPath
																		   parameters:@{ pagingCursor:fetchingDirection, @"fields":@"" }
																		   HTTPMethod:@"GET"];
			[Request startWithCompletionHandler : ^ (FBSDKGraphRequestConnection *Connection, id Result, NSError *Error) {

				NSDictionary* ResultDict = Result;

				FFBFetchedFriendsData FetchedFriends;
				TArray<FFBFriendData> FetchedFriendsData;
				NSArray* ResultDataArray = ResultDict[@"data"];

				int FriendsCount = (int)(unsigned long)[ResultDataArray count];

				for (int i = 0; i < FriendsCount; i++) {
					NSDictionary* FriendDataObj = [ResultDataArray objectAtIndex : i];

					FFBFriendData FriendData;
					FriendData.Name = FString(FriendDataObj[@"name"]);
					FriendData.Id = FString(FriendDataObj[@"id"]);

					FetchedFriendsData.Add(FriendData);
				}


				FetchedFriends.Data = FetchedFriendsData;
				FetchedFriends.Paging.Cursors.Before = FString(ResultDict[@"paging"][@"cursors"][@"before"]);
				FetchedFriends.Paging.Cursors.After = FString(ResultDict[@"paging"][@"cursors"][@"after"]);
				if ([ResultDict[@"paging"] objectForKey:@"previous"] != nil) {
					
					FetchedFriends.Paging.Previous = FString(ResultDict[@"paging"][@"previous"]);
				}
				if ([ResultDict[@"paging"] objectForKey:@"next"] != nil) {
					
					FetchedFriends.Paging.Next = FString(ResultDict[@"paging"][@"next"]);
				}
				
				NSNumber* TotalFriendsCount = (NSNumber*)ResultDict[@"summary"][@"total_count"];
				int FriendsTotalSummary = [TotalFriendsCount intValue];
				FetchedFriends.Summary.TotalCount = FriendsTotalSummary;
				
				AsyncTask(ENamedThreads::GameThread, [=]() {
					UFBGraphLibrary::OnGetFriendsCompleteDelegate.ExecuteIfBound(FetchedFriends);
				});
			}];
		}
		else
		{
			FString Direction = (static_cast<int>(PagingDirection) == 0) ? "Previous" : "Next";
			UE_LOG(LogFacebookGoodies, Error, TEXT("%s paging field is empty, there's nothing to load."), *Direction);
		}
#endif
}

void UFBGraphLibrary::GetProfilePicture(FString UserId, const FOnGetUserPictureURLSuccess& OnPictureUrlReceived)
{
	UFBGraphLibCallback* nativeCallback = NewObject<UFBGraphLibCallback>();
	nativeCallback->BindGetUserPictureURLSuccessDelegate(OnPictureUrlReceived);

#if PLATFORM_ANDROID
	FBMethodCallUtils::CallStaticVoidMethod("com/ninevastudios/fbgoodies/FBGoodiesGraph", "GetProfilePictureUrl", "(Ljava/lang/String;J)V", FBJavaConvertor::GetJavaString(UserId), (jlong)nativeCallback);
#endif
#if PLATFORM_IOS
	FBSDKAccessToken* AccessToken = [FBSDKAccessToken currentAccessToken];
	if (!AccessToken) return;
	NSString* graphPath = [NSString stringWithFormat:@"/%@/picture", UserId.GetNSString()];
	FBSDKGraphRequest *Request = [[FBSDKGraphRequest alloc] initWithGraphPath:graphPath
																   parameters:@{ @"type":@"large", @"redirect":@false }
																   HTTPMethod:@"GET"];
	[Request startWithCompletionHandler:^(FBSDKGraphRequestConnection *Connection, id Result, NSError *Error) {
		NSDictionary* ResultDict = Result;
		const FString PictureURL(ResultDict[@"data"][@"url"]);
		nativeCallback->ExecuteGetUserPictureURLSuccess(PictureURL);
	}];
#endif
}

#if PLATFORM_ANDROID
JNI_METHOD void Java_com_ninevastudios_fbgoodies_FBGoodiesGraph_onQueryCompleteCallback(
	JNIEnv* env, jclass clazz, jstring jsonResponse)
{
	UE_LOG(LogFacebookGoodies, Verbose, TEXT("onQueryCompleteCallback received!"));

	FString JsonString = FJavaHelper::FStringFromParam(env, jsonResponse);
	AsyncTask(ENamedThreads::GameThread, [=]() {
		UFBGraphLibrary::OnQueryCompleteDelegate.ExecuteIfBound(JsonString);
	});
}

JNI_METHOD void Java_com_ninevastudios_fbgoodies_FBGoodiesGraph_onGetProfileCompleteCallback(
	JNIEnv* env, jclass clazz, jstring name, jstring email, jstring pictureURL)
{
	UE_LOG(LogFacebookGoodies, Verbose, TEXT("onGetProfileCompleteCallback received!"));
	
	FString Name = FJavaHelper::FStringFromParam(env, name);
	FString Email = FJavaHelper::FStringFromParam(env, email);
	FString PictureURL = FJavaHelper::FStringFromParam(env, pictureURL);
	AsyncTask(ENamedThreads::GameThread, [=]() {
		UFBGraphLibrary::OnGetProfileDelegate.ExecuteIfBound(Name, Email, PictureURL);
	});
}

JNI_METHOD void Java_com_ninevastudios_fbgoodies_FBGoodiesFetchFriends_onGetFriendsListCompleteCallback(
	JNIEnv* env, jclass clazz, jobject jsonResponse)
{
	UE_LOG(LogFacebookGoodies, Verbose, TEXT("onGetFriendsListCompleteCallback received!"));

	FFBFetchedFriendsData result = FBFetchFriendsUtils::FetchedFriendsDataFromJavaObject(jsonResponse);

	AsyncTask(ENamedThreads::GameThread, [=]() {
		UFBGraphLibrary::OnGetFriendsCompleteDelegate.ExecuteIfBound(result);
	});
}

JNI_METHOD void Java_com_ninevastudios_fbgoodies_FBGoodiesGraph_onGetProfilePictureUrlCompleteCallback(
	JNIEnv* env, jclass clazz, jstring userPictureURL, jlong objAddr)
{
	UFBGraphLibCallback* callback = reinterpret_cast<UFBGraphLibCallback*>(objAddr);

	if (IsValid(callback))
	{
		UE_LOG(LogFacebookGoodies, Verbose, TEXT("onGetProfilePictureUrlCompleteCallback received!"));
		
		callback->ExecuteGetUserPictureURLSuccess(FBJavaConvertor::FromJavaString(userPictureURL));
	}
	else
	{
		UE_LOG(LogFacebookGoodies, Error, TEXT("Invalid picture success callback"));
	}
}
#endif
