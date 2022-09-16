// Copyright (c) 2020 Nineva Studios

#include "Sharing/Media/FBShareMedia.h"

#include "FacebookGoodiesLog.h"
#include "Sharing/Content/FBShareContent.h"

#if PLATFORM_ANDROID
#include "Android/Utils/FBJavaConvertor.h"
#include "Android/Utils/FBMethodCallUtils.h"
#endif

#if PLATFORM_IOS
#import <FBSDKShareKit/FBSDKShareKit.h>
#endif

UFBShareMedia::~UFBShareMedia()
{
	UE_LOG(LogFacebookGoodies, Verbose, TEXT("UFBShareMedia::~UFBShareMedia()"));

#if PLATFORM_ANDROID
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	Env->DeleteLocalRef(JavaMediaBuilder);
	JavaMediaBuilder = nullptr;
#elif PLATFORM_IOS
	iosMedia = nil;
#endif
}

bool UFBShareMedia::IsMediaValid()
{
	bool Result = false;

#if PLATFORM_ANDROID
	Result = JavaMediaBuilder != nullptr;
#elif PLATFORM_IOS
	Result = iosMedia != nil;
#endif
#if !WITH_EDITOR
	if (!Result)
	{
		UE_LOG(LogFacebookGoodies, Warning, TEXT("UFBShareMedia: native object is not valid. Will not perform operation."));
	}
#endif

	return Result;
}

#if PLATFORM_ANDROID
jobject UFBShareMedia::BuildMedia()
{
	if (!IsMediaValid())
	{
		return nullptr;
	}

	return FBMethodCallUtils::CallObjectMethod(JavaMediaBuilder, "build", TCHAR_TO_ANSI(*FString::Printf(TEXT("()Lcom/facebook/share/model/%s;"), *ClassName)));
}
#endif
