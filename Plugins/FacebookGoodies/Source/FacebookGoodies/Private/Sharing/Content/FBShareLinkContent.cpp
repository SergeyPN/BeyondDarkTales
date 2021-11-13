// Copyright (c) 2020 Nineva Studios

#include "Sharing/Content/FBShareLinkContent.h"

#include "FacebookGoodiesLog.h"

#if PLATFORM_ANDROID
#include "Android/Utils/FBJavaConvertor.h"
#include "Android/Utils/FBMethodCallUtils.h"
#endif

#if PLATFORM_IOS
#import <FBSDKShareKit/FBSDKShareKit.h>
#endif

UFBShareLinkContent* UFBShareLinkContent::NewShareLinkContent()
{
	UFBShareLinkContent* content = NewObject<UFBShareLinkContent>();

#if PLATFORM_ANDROID
	content->JavaContentBuilder = FBMethodCallUtils::CallStaticObjectMethod(UFBShareContent::FBShareClassName, "GetShareLinkContentBuilder",
		"()Lcom/facebook/share/model/ShareLinkContent$Builder;");
	content->ClassName = "ShareLinkContent";
#elif PLATFORM_IOS
	content->iosContent = [[FBSDKShareLinkContent alloc] init];
#endif

	return content;
}

void UFBShareLinkContent::SetQuote(const FString& Quote)
{
	if (!IsBuilderValid())
	{
		return;
	}

#if PLATFORM_ANDROID
	JavaContentBuilder = FBMethodCallUtils::CallObjectMethod(JavaContentBuilder, "setQuote", "(Ljava/lang/String;)Lcom/facebook/share/model/ShareLinkContent$Builder;",
		FBJavaConvertor::GetJavaString(Quote));
#elif PLATFORM_IOS
	((FBSDKShareLinkContent*) iosContent).quote = Quote.GetNSString();
#endif
}
