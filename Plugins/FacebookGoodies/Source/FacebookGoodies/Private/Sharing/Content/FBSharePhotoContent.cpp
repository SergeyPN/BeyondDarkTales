// Copyright (c) 2020 Nineva Studios

#include "Sharing/Content/FBSharePhotoContent.h"

#include "FacebookGoodiesLog.h"
#include "Sharing/Media/FBSharePhoto.h"

#if PLATFORM_IOS
#import <FBSDKShareKit/FBSDKShareKit.h>
#endif

UFBSharePhotoContent* UFBSharePhotoContent::NewSharePhotoContent()
{
	UFBSharePhotoContent* content = NewObject<UFBSharePhotoContent>();

#if PLATFORM_ANDROID
	content->JavaContentBuilder = FBMethodCallUtils::CallStaticObjectMethod(UFBShareContent::FBShareClassName, "GetSharePhotoContentBuilder",
		"()Lcom/facebook/share/model/SharePhotoContent$Builder;");
	content->ClassName = "SharePhotoContent";
#elif PLATFORM_IOS
	content->iosContent = [[FBSDKSharePhotoContent alloc] init];
#endif

	return content;
}

void UFBSharePhotoContent::AddPhoto(UFBSharePhoto* Photo)
{
	if (!IsBuilderValid())
	{
		return;
	}

#if PLATFORM_ANDROID
	JavaContentBuilder = FBMethodCallUtils::CallObjectMethod(JavaContentBuilder, "addPhoto", "(Lcom/facebook/share/model/SharePhoto;)Lcom/facebook/share/model/SharePhotoContent$Builder;",
		Photo->BuildMedia());
#elif PLATFORM_IOS
	FBSDKSharePhotoContent* content = (FBSDKSharePhotoContent*) iosContent;
	
	NSMutableArray* array = nil;
	if (content.photos == nil) {
		array = [NSMutableArray array];
	} else {
		array = [content.photos mutableCopy];
	}
	
	[array addObject:(FBSDKSharePhoto*) Photo->iosMedia];
	content.photos = array;
	
	iosContent = content;
#endif
}

void UFBSharePhotoContent::AddPhotos(const TArray<UFBSharePhoto*>& Photos)
{
	if (!IsBuilderValid())
	{
		return;
	}

	TArray<UFBShareMedia*> Media;

	for (const auto& Photo : Photos)
	{
		Media.Add(Photo);
	}

#if PLATFORM_ANDROID
	JavaContentBuilder = FBMethodCallUtils::CallObjectMethod(JavaContentBuilder, "addPhotos", "(Ljava/util/List;)Lcom/facebook/share/model/SharePhotoContent$Builder;",
		FBJavaConvertor::ToJavaMediaList(Media));
#elif PLATFORM_IOS
	FBSDKSharePhotoContent* content = (FBSDKSharePhotoContent*) iosContent;
	
	NSMutableArray* array = nil;
	if (content.photos == nil) {
		array = [NSMutableArray array];
	} else {
		array = [content.photos mutableCopy];
	}
	
	for (const auto& Photo : Photos)
	{
		[array addObject:Photo->iosMedia];
	}
	
	content.photos = array;
	
	iosContent = content;
#endif
}

void UFBSharePhotoContent::SetPhotos(const TArray<UFBSharePhoto*>& Photos)
{
	if (!IsBuilderValid())
	{
		return;
	}

	TArray<UFBShareMedia*> Media;

	for (const auto& Photo : Photos)
	{
		Media.Add(Photo);
	}

#if PLATFORM_ANDROID
	JavaContentBuilder = FBMethodCallUtils::CallObjectMethod(JavaContentBuilder, "setPhotos", "(Ljava/util/List;)Lcom/facebook/share/model/SharePhotoContent$Builder;",
		FBJavaConvertor::ToJavaMediaList(Media));
#elif PLATFORM_IOS
	NSMutableArray* array = [NSMutableArray array];
	
	for (const auto& Photo : Photos)
	{
		[array addObject:Photo->iosMedia];
	}
	
	((FBSDKSharePhotoContent*) iosContent).photos = array;
#endif
}
