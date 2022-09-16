// Copyright (c) 2020 Nineva Studios

#include "Sharing/Content/FBShareMediaContent.h"

#include "FacebookGoodiesLog.h"
#include "Sharing/Media/FBShareMedia.h"

#if PLATFORM_ANDROID
#include "Android/Utils/FBJavaConvertor.h"
#include "Android/Utils/FBMethodCallUtils.h"
#endif

#if PLATFORM_IOS
#import <FBSDKShareKit/FBSDKShareKit.h>
#endif

UFBShareMediaContent* UFBShareMediaContent::NewShareMediaContent(const TArray<UFBShareMedia*>& Media)
{
	UFBShareMediaContent* content = NewObject<UFBShareMediaContent>();

#if PLATFORM_ANDROID
	content->ClassName = "ShareMediaContent";
	
	jobjectArray javaMediaArray = FBJavaConvertor::ToJavaMediaArray(Media);
	
	content->JavaContentBuilder = FBMethodCallUtils::CallStaticObjectMethod(UFBShareContent::FBShareClassName, "GetShareMediaContentBuilder", "([Lcom/facebook/share/model/ShareMedia;)Lcom/facebook/share/model/ShareMediaContent$Builder;", javaMediaArray);
#elif PLATFORM_IOS
	FBSDKShareMediaContent* iosContent = [[FBSDKShareMediaContent alloc] init];
	
	NSMutableArray* array = [NSMutableArray array];
	
	for (const auto& Medium : Media)
	{
		[array addObject:Medium->iosMedia];
	}
	
	iosContent.media = array;
	
	content->iosContent = iosContent;
#endif

	return content;
}
