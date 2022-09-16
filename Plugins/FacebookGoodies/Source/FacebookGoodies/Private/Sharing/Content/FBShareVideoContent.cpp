// Copyright (c) 2020 Nineva Studios

#include "Sharing/Content/FBShareVideoContent.h"

#include "FacebookGoodiesLog.h"
#include "Sharing/Media/FBShareVideo.h"

#if PLATFORM_IOS
#import <FBSDKShareKit/FBSDKShareKit.h>
#endif

UFBShareVideoContent* UFBShareVideoContent::NewShareVideoContent(UFBShareVideo* Video)
{
	UFBShareVideoContent* content = NewObject<UFBShareVideoContent>();

#if PLATFORM_ANDROID
	jobject JavaContentBuilder = FBMethodCallUtils::CallStaticObjectMethod(UFBShareContent::FBShareClassName, "GetShareVideoContentBuilder",
		"()Lcom/facebook/share/model/ShareVideoContent$Builder;");
	
	content->JavaContentBuilder = FBMethodCallUtils::CallObjectMethod(JavaContentBuilder, "setVideo", "(Lcom/facebook/share/model/ShareVideo;)Lcom/facebook/share/model/ShareVideoContent$Builder;", Video->BuildMedia());
	content->ClassName = "ShareVideoContent";
#elif PLATFORM_IOS
	content->iosContent = [[FBSDKShareVideoContent alloc] init];
	((FBSDKShareVideoContent*) (content->iosContent)).video = (FBSDKShareVideo*) (Video->iosMedia);
#endif

	return content;
}
