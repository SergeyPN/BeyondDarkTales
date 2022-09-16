// Copyright (c) 2020 Nineva Studios

#include "Sharing/Media/FBShareVideo.h"

#include "FacebookGoodiesLog.h"
#include "Sharing/Content/FBShareContent.h"

#if PLATFORM_IOS
#import <FBSDKShareKit/FBSDKShareKit.h>
#endif

UFBShareVideo* UFBShareVideo::NewShareVideo(const FString& VideoPath)
{
	UFBShareVideo* media = NewObject<UFBShareVideo>();

#if PLATFORM_ANDROID
	media->JavaMediaBuilder = FBMethodCallUtils::CallStaticObjectMethod(UFBShareContent::FBShareClassName, "GetShareVideoBuilder",
		"(Landroid/app/Activity;Ljava/lang/String;)Lcom/facebook/share/model/ShareVideo$Builder;", FJavaWrapper::GameActivityThis, FBJavaConvertor::GetJavaString(VideoPath));
	media->ClassName = "ShareVideo";
#elif PLATFORM_IOS
	media->iosMedia = [FBSDKShareVideo videoWithVideoURL:[NSURL URLWithString:VideoPath.GetNSString()]];
#endif

	return media;
}
