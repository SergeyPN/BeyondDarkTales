// Copyright (c) 2020 Nineva Studios

#include "Sharing/Content/FBShareContent.h"

#include "FacebookGoodiesLog.h"

#if PLATFORM_ANDROID
#include "Android/Utils/FBJavaConvertor.h"
#include "Android/Utils/FBMethodCallUtils.h"
#endif

#if PLATFORM_ANDROID
const ANSICHAR* UFBShareContent::FBShareClassName = "com/ninevastudios/fbgoodies/FBGoodiesShare";
#endif

UFBShareContent::~UFBShareContent()
{
	UE_LOG(LogFacebookGoodies, Verbose, TEXT("UFBShareContent::~UFBShareContent()"));
	
	if (!IsBuilderValid())
	{
		return;
	}

#if PLATFORM_ANDROID
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	Env->DeleteLocalRef(JavaContentBuilder);
	JavaContentBuilder = nullptr;
#elif PLATFORM_IOS
	(id<FBSDKSharingContent>*)CFBridgingRelease(iosContent);
	iosContent = nil;
#endif
}

void UFBShareContent::SetContentUrl(const FString& Url)
{
	if (!IsBuilderValid())
	{
		return;
	}

#if PLATFORM_ANDROID
	jobject Uri = FBMethodCallUtils::CallStaticObjectMethod("android/net/Uri", "parse", "(Ljava/lang/String;)Landroid/net/Uri;", FBJavaConvertor::GetJavaString(Url));
	JavaContentBuilder = FBMethodCallUtils::CallObjectMethod(JavaContentBuilder, "setContentUrl", "(Landroid/net/Uri;)Lcom/facebook/share/model/ShareContent$Builder;", Uri);
#elif PLATFORM_IOS
	if ([iosContent respondsToSelector:@selector(setContentURL:)])
		[iosContent performSelector:@selector(setContentURL:) withObject:[NSURL URLWithString:Url.GetNSString()]];
#endif
}

void UFBShareContent::SetPeopleIds(const TArray<FString>& Ids)
{
	if (!IsBuilderValid())
	{
		return;
	}

#if PLATFORM_ANDROID
	JavaContentBuilder = FBMethodCallUtils::CallObjectMethod(JavaContentBuilder, "setPeopleIds", "(Ljava/util/List;)Lcom/facebook/share/model/ShareContent$Builder;",
		FBJavaConvertor::ToJavaList(Ids));
#elif PLATFORM_IOS
	NSMutableArray* array = [NSMutableArray array];
	
	for (const auto& Id : Ids)
	{
		[array addObject:Id.GetNSString()];
	}
	
	if ([iosContent respondsToSelector:@selector(setPeopleIDs:)])
		[iosContent performSelector:@selector(setPeopleIDs:) withObject:array];
#endif
}

void UFBShareContent::SetPlaceId(const FString& PlaceId)
{
	if (!IsBuilderValid())
	{
		return;
	}

#if PLATFORM_ANDROID
	JavaContentBuilder = FBMethodCallUtils::CallObjectMethod(JavaContentBuilder, "setPlaceId", "(Ljava/lang/String;)Lcom/facebook/share/model/ShareContent$Builder;",
		FBJavaConvertor::GetJavaString(PlaceId));
#elif PLATFORM_IOS
	if ([iosContent respondsToSelector:@selector(setPlaceID:)])
		[iosContent performSelector:@selector(setPlaceID:) withObject:PlaceId.GetNSString()];
#endif
}

void UFBShareContent::SetPageId(const FString& PageId)
{
	if (!IsBuilderValid())
	{
		return;
	}

#if PLATFORM_ANDROID
	JavaContentBuilder = FBMethodCallUtils::CallObjectMethod(JavaContentBuilder, "setPageId", "(Ljava/lang/String;)Lcom/facebook/share/model/ShareContent$Builder;",
		FBJavaConvertor::GetJavaString(PageId));
#elif PLATFORM_IOS
	UE_LOG(LogFacebookGoodies, Warning, TEXT("UFBShareContent::SetPageId() is not available for iOS. Skipping..."));
#endif
}

void UFBShareContent::SetRef(const FString& Ref)
{
	if (!IsBuilderValid())
	{
		return;
	}

#if PLATFORM_ANDROID
	JavaContentBuilder = FBMethodCallUtils::CallObjectMethod(JavaContentBuilder, "setRef", "(Ljava/lang/String;)Lcom/facebook/share/model/ShareContent$Builder;",
		FBJavaConvertor::GetJavaString(Ref));
#elif PLATFORM_IOS
	if ([iosContent respondsToSelector:@selector(setRef:)])
		[iosContent performSelector:@selector(setRef:) withObject:Ref.GetNSString()];
#endif
}

void UFBShareContent::SetShareHashtag(const FString& ShareHashtag)
{
	if (!IsBuilderValid())
	{
		return;
	}

#if PLATFORM_ANDROID
	JavaContentBuilder = FBMethodCallUtils::CallStaticObjectMethod(FBShareClassName, "SetHashTag", 
		"(Lcom/facebook/share/model/ShareContent$Builder;Ljava/lang/String;)Lcom/facebook/share/model/ShareContent$Builder;",
		JavaContentBuilder, FBJavaConvertor::GetJavaString(ShareHashtag));
#elif PLATFORM_IOS
	if ([iosContent respondsToSelector:@selector(setHashtag:)])
		[iosContent performSelector:@selector(setHashtag:)
						 withObject:[FBSDKHashtag hashtagWithString:ShareHashtag.GetNSString()]];
#endif
}

bool UFBShareContent::IsBuilderValid()
{
	bool Result = false;

#if PLATFORM_ANDROID
	Result = JavaContentBuilder != nullptr;
#elif PLATFORM_IOS
	Result = iosContent != nil;
#endif
#if !WITH_EDITOR
	if (!Result)
	{
		UE_LOG(LogFacebookGoodies, Warning, TEXT("UFBShareContent: native object is not valid. Will not perform operation."));
	}
#endif

	return Result;
}

#if PLATFORM_ANDROID
jobject UFBShareContent::BuildContent()
{
	if (!IsBuilderValid())
	{
		return nullptr;
	}

	return FBMethodCallUtils::CallObjectMethod(JavaContentBuilder, "build", TCHAR_TO_ANSI(*FString::Printf(TEXT("()Lcom/facebook/share/model/%s;"), *ClassName)));
}
#endif
