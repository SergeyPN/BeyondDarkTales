// Copyright (c) 2020 Nineva Studios

#include "Login/FBLoginLibrary.h"

#include "Async/Async.h"
#include "FacebookGoodiesLog.h"

#if PLATFORM_ANDROID
#include "Android/Utils/FBMethodCallUtils.h"
#endif

#if PLATFORM_IOS
#import "IOS/IOSAppDelegate.h"

#import <FBSDKCoreKit/FBSDKCoreKit.h>
#import <FBSDKLoginKit/FBSDKLoginKit.h>
#endif

FOnLoginSuccessDelegate UFBLoginLibrary::OnLoginSuccessDelegate;
FOnLoginCancelDelegate UFBLoginLibrary::OnLoginCancelDelegate;
FOnLoginErrorDelegate UFBLoginLibrary::OnLoginErrorDelegate;

void UFBLoginLibrary::Login(const FOnLoginSuccessDelegate& OnLoginSuccess, const FOnLoginCancelDelegate& OnLoginCancel, const FOnLoginErrorDelegate& OnLoginError)
{
	TArray<FString> Permissions = {TEXT("public_profile")};
	LoginWithReadPermissions(Permissions, OnLoginSuccess, OnLoginCancel, OnLoginError);
}

void UFBLoginLibrary::LoginWithReadPermissions(const TArray<FString> ReadPermissions,
	const FOnLoginSuccessDelegate& OnLoginSuccess, const FOnLoginCancelDelegate& OnLoginCancel, const FOnLoginErrorDelegate& OnLoginError)
{
	OnLoginSuccessDelegate = OnLoginSuccess;
	OnLoginCancelDelegate = OnLoginCancel;
	OnLoginErrorDelegate = OnLoginError;

#if PLATFORM_ANDROID
	FBMethodCallUtils::CallStaticVoidMethod("com/ninevastudios/fbgoodies/FBGoodiesLogin", "LoginWithReadPermissions", "(Landroid/app/Activity;[Ljava/lang/String;)V",
		FJavaWrapper::GameActivityThis, FBJavaConvertor::ConvertToJStringArray(ReadPermissions));
#endif

#if PLATFORM_IOS
	dispatch_async(dispatch_get_main_queue(), ^{
		FBSDKLoginManager* LoginManager = [[FBSDKLoginManager alloc] init];
		NSMutableArray* Permissions = [NSMutableArray arrayWithCapacity:ReadPermissions.Num()];
		for (const auto& Permission : ReadPermissions)
		{
			[Permissions addObject:Permission.GetNSString()];
		}

		[LoginManager logInWithPermissions:Permissions
						fromViewController:[IOSAppDelegate GetDelegate].IOSController
								   handler:^(FBSDKLoginManagerLoginResult* result, NSError* error) {
									   if (error)
									   {
										   const FString ErrorMessage([error localizedDescription]);
										   UE_LOG(LogFacebookGoodies, Error, TEXT("%s"), *ErrorMessage);
										   AsyncTask(ENamedThreads::GameThread, [=]() {
											   OnLoginErrorDelegate.ExecuteIfBound(ErrorMessage);
										   });
									   }
									   else if (result.isCancelled)
									   {
										   AsyncTask(ENamedThreads::GameThread, [=]() {
											   OnLoginCancelDelegate.ExecuteIfBound();
										   });
									   }
									   else
									   {
										   AsyncTask(ENamedThreads::GameThread, [=]() {
											   OnLoginSuccessDelegate.ExecuteIfBound();
										   });
									   }
								   }];
	});
#endif
}

void UFBLoginLibrary::LoginWithPublishPermissions(const TArray<FString> PublishPermissions,
	const FOnLoginSuccessDelegate& OnLoginSuccess, const FOnLoginCancelDelegate& OnLoginCancel, const FOnLoginErrorDelegate& OnLoginError)
{
#if PLATFORM_ANDROID
	OnLoginSuccessDelegate = OnLoginSuccess;
	OnLoginCancelDelegate = OnLoginCancel;
	OnLoginErrorDelegate = OnLoginError;

	FBMethodCallUtils::CallStaticVoidMethod("com/ninevastudios/fbgoodies/FBGoodiesLogin", "LoginWithPublishPermissions", "(Landroid/app/Activity;[Ljava/lang/String;)V",
		FJavaWrapper::GameActivityThis, FBJavaConvertor::ConvertToJStringArray(PublishPermissions));
#endif

#if PLATFORM_IOS
	// IOS does not differentiate between read and publish permissions
	LoginWithReadPermissions(PublishPermissions, OnLoginSuccess, OnLoginCancel, OnLoginError);
#endif
}

void UFBLoginLibrary::Logout()
{
#if PLATFORM_ANDROID
	FBMethodCallUtils::CallStaticVoidMethod("com/ninevastudios/fbgoodies/FBGoodiesLogin", "Logout", "()V");
#endif

#if PLATFORM_IOS
	FBSDKLoginManager* LoginManager = [[FBSDKLoginManager alloc] init];
	[LoginManager logOut];
#endif
}

bool UFBLoginLibrary::IsLoggedIn()
{
	bool bRet = false;
#if PLATFORM_ANDROID
	bRet = FBMethodCallUtils::CallStaticBoolMethod("com/ninevastudios/fbgoodies/FBGoodiesLogin", "IsLoggedIn", "()Z");
#endif

#if PLATFORM_IOS
	bRet = FBSDKAccessToken.currentAccessTokenIsActive;
#endif

	return bRet;
}

FString UFBLoginLibrary::GetAccessToken()
{
	FString AccessTokenString;

#if PLATFORM_ANDROID
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	jstring JAccessToken = static_cast<jstring>(FBMethodCallUtils::CallStaticObjectMethod(
		"com/ninevastudios/fbgoodies/FBGoodiesLogin", "GetAccessToken", "()Ljava/lang/String;"));
	AccessTokenString = FJavaHelper::FStringFromParam(Env, JAccessToken);
#endif

#if PLATFORM_IOS
	FBSDKAccessToken* AccessToken = [FBSDKAccessToken currentAccessToken];
	if (AccessToken)
	{
		AccessTokenString = FString([AccessToken tokenString]);
	}
#endif

	return AccessTokenString;
}

FString UFBLoginLibrary::GetUserId()
{
	FString UserIdString;

#if PLATFORM_ANDROID
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	jstring JUserId = static_cast<jstring>(FBMethodCallUtils::CallStaticObjectMethod(
		"com/ninevastudios/fbgoodies/FBGoodiesLogin", "GetUserId", "()Ljava/lang/String;"));
	UserIdString = FJavaHelper::FStringFromParam(Env, JUserId);
#endif

#if PLATFORM_IOS
	FBSDKAccessToken* AccessToken = [FBSDKAccessToken currentAccessToken];
	if (AccessToken)
	{
		UserIdString = FString([AccessToken userID]);
	}
#endif

	return UserIdString;
}

TArray<FString> UFBLoginLibrary::GetPermissions()
{
	TArray<FString> Permissions;

#if PLATFORM_ANDROID
	jobjectArray JPermissions = static_cast<jobjectArray>(FBMethodCallUtils::CallStaticObjectMethod(
		"com/ninevastudios/fbgoodies/FBGoodiesLogin", "GetPermissions", "()[Ljava/lang/String;"));
	Permissions = FBJavaConvertor::ConvertToStringArray(JPermissions);
#endif

#if PLATFORM_IOS
	FBSDKAccessToken* AccessToken = [FBSDKAccessToken currentAccessToken];
	if (AccessToken)
	{
		NSSet* PermissionsSet = [AccessToken permissions];
		for (NSString* Permission in PermissionsSet)
		{
			Permissions.Add(FString(Permission));
		}
	}
#endif

	return Permissions;
}

TArray<FString> UFBLoginLibrary::GetDeclinedPermissions()
{
	TArray<FString> Permissions;

#if PLATFORM_ANDROID
	jobjectArray JPermissions = static_cast<jobjectArray>(FBMethodCallUtils::CallStaticObjectMethod(
		"com/ninevastudios/fbgoodies/FBGoodiesLogin", "GetDeclinedPermissions", "()[Ljava/lang/String;"));
	Permissions = FBJavaConvertor::ConvertToStringArray(JPermissions);
#endif

#if PLATFORM_IOS
	FBSDKAccessToken* AccessToken = [FBSDKAccessToken currentAccessToken];
	if (AccessToken)
	{
		NSSet* PermissionsSet = [AccessToken declinedPermissions];
		for (NSString* Permission in PermissionsSet)
		{
			Permissions.Add(FString(Permission));
		}
	}
#endif

	return Permissions;
}

TArray<FString> UFBLoginLibrary::GetExpiredPermissions()
{
	TArray<FString> Permissions;

#if PLATFORM_ANDROID
	jobjectArray JPermissions = static_cast<jobjectArray>(FBMethodCallUtils::CallStaticObjectMethod(
		"com/ninevastudios/fbgoodies/FBGoodiesLogin", "GetPermissions", "()[Ljava/lang/String;"));
	Permissions = FBJavaConvertor::ConvertToStringArray(JPermissions);
#endif

#if PLATFORM_IOS
	FBSDKAccessToken* AccessToken = [FBSDKAccessToken currentAccessToken];
	if (AccessToken)
	{
		NSSet* PermissionsSet = [AccessToken expiredPermissions];
		for (NSString* Permission in PermissionsSet)
		{
			Permissions.Add(FString(Permission));
		}
	}
#endif

	return Permissions;
}

#if PLATFORM_ANDROID
JNI_METHOD void Java_com_ninevastudios_fbgoodies_FBGoodiesIntermediateActivity_onLoginSuccessCallback(
	JNIEnv* env, jclass clazz)
{
	AsyncTask(ENamedThreads::GameThread, [=]() {
		UFBLoginLibrary::OnLoginSuccessDelegate.ExecuteIfBound();
	});
}

JNI_METHOD void Java_com_ninevastudios_fbgoodies_FBGoodiesIntermediateActivity_onLoginCancelCallback(
	JNIEnv* env, jclass clazz)
{
	AsyncTask(ENamedThreads::GameThread, [=]() {
		UFBLoginLibrary::OnLoginCancelDelegate.ExecuteIfBound();
	});
}

JNI_METHOD void Java_com_ninevastudios_fbgoodies_FBGoodiesIntermediateActivity_onLoginErrorCallback(
	JNIEnv* env, jclass clazz, jstring errorMessage)
{
	FString ErrorMessage = FJavaHelper::FStringFromParam(env, errorMessage);
	UE_LOG(LogFacebookGoodies, Error, TEXT("%s"), *ErrorMessage);

	AsyncTask(ENamedThreads::GameThread, [=]() {
		UFBLoginLibrary::OnLoginErrorDelegate.ExecuteIfBound(ErrorMessage);
	});
}
#endif
