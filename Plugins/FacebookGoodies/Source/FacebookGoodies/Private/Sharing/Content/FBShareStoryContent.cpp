// Copyright (c) 2020 Nineva Studios

#include "Sharing/Content/FBShareStoryContent.h"

#include "FacebookGoodiesLog.h"
#include "Sharing/Media/FBSharePhoto.h"
#include "Sharing/Media/FBShareVideo.h"

#if PLATFORM_IOS
#import <FBSDKShareKit/FBSDKShareKit.h>
#endif

UFBShareStoryContent* UFBShareStoryContent::NewShareStoryContent()
{
	UFBShareStoryContent* content = NewObject<UFBShareStoryContent>();

#if PLATFORM_ANDROID
	content->JavaContentBuilder = FBMethodCallUtils::CallStaticObjectMethod(UFBShareContent::FBShareClassName, "GetShareStoryContentBuilder",
		"()Lcom/facebook/share/model/ShareStoryContent$Builder;");
	content->ClassName = "ShareStoryContent";
#elif PLATFORM_IOS
	content->iosContent = [[FBSDKShareLinkContent alloc] init];
	content->shareUrl = [NSURL URLWithString:@"facebook-stories://share"];
	content->pasteboardItems = [NSMutableArray array];
#endif

	return content;
}

void UFBShareStoryContent::SetStickerAsset(UFBSharePhoto* Photo)
{
	if (!IsBuilderValid())
	{
		return;
	}

#if PLATFORM_ANDROID
	JavaContentBuilder = FBMethodCallUtils::CallObjectMethod(JavaContentBuilder, "setStickerAsset", "(Lcom/facebook/share/model/SharePhoto;)Lcom/facebook/share/model/ShareStoryContent$Builder;",
		Photo->BuildMedia());
#elif PLATFORM_IOS
	NSData* imageData = nil;
	FBSDKSharePhoto* photo = (FBSDKSharePhoto*) (Photo->iosMedia);
	if (photo.imageURL != nil) {
		imageData = [NSData dataWithContentsOfFile:photo.imageURL.absoluteString];
	} else if (photo.image != nil) {
		imageData = UIImagePNGRepresentation(photo.image);
	} else {
		UE_LOG(LogFacebookGoodies, Warning,
			   TEXT("UFBShareStoryContent::SetStickerAsset() - SharePhoto does not contain content. Skipping."));
		return;
	}
	
	[pasteboardItems addObject: @{@"com.facebook.sharedSticker.stickerImage" : imageData}];
#endif
}

void UFBShareStoryContent::SetBackgroundAsset(UFBShareMedia* Media)
{
	if (!IsBuilderValid())
	{
		return;
	}

#if PLATFORM_ANDROID
	JavaContentBuilder = FBMethodCallUtils::CallObjectMethod(JavaContentBuilder, "setBackgroundAsset", "(Lcom/facebook/share/model/ShareMedia;)Lcom/facebook/share/model/ShareStoryContent$Builder;",
		Media->BuildMedia());
#elif PLATFORM_IOS
	NSData* contentData = nil;
	
	NSObject* mediaObject = Media->iosMedia;
	if ([mediaObject isKindOfClass:[FBSDKSharePhoto class]]) {
		FBSDKSharePhoto* photo = (FBSDKSharePhoto*) mediaObject;
		if (photo.imageURL != nil) {
			contentData = [NSData dataWithContentsOfFile:photo.imageURL.absoluteString];
		} else if (photo.image != nil) {
			contentData = UIImagePNGRepresentation(photo.image);
		} else {
			UE_LOG(LogFacebookGoodies, Warning,
				   TEXT("UFBShareStoryContent::SetBackgroundAsset() - SharePhoto does not contain content. Skipping."));
			return;
		}
		
		[pasteboardItems addObject: @{@"com.facebook.sharedSticker.backgroundImage" : contentData}];
	} else if ([mediaObject isKindOfClass:[FBSDKShareVideo class]]) {
		FBSDKShareVideo* video = (FBSDKShareVideo*) mediaObject;
		if (video.videoURL != nil) {
			contentData = [NSData dataWithContentsOfFile:video.videoURL.absoluteString];
			[pasteboardItems addObject: @{@"com.facebook.sharedSticker.backgroundVideo" : contentData}];
		} else {
			UE_LOG(LogFacebookGoodies, Warning,
				   TEXT("UFBShareStoryContent::SetBackgroundAsset() - ShareVideo does not contain content. Skipping."));
		}
	} else {
		UE_LOG(LogFacebookGoodies, Warning,
			   TEXT("UFBShareStoryContent::SetBackgroundAsset() - Media is invalid. Skipping."));
	}
#endif
}

void UFBShareStoryContent::SetBackgroundColorList(const FString& TopColor, const FString& BottomColor)
{
	if (!IsBuilderValid())
	{
		return;
	}

#if PLATFORM_ANDROID
	TArray<FString> Colors;
	Colors.Add(TopColor);
	Colors.Add(BottomColor);
	
	JavaContentBuilder = FBMethodCallUtils::CallObjectMethod(JavaContentBuilder, "setBackgroundColorList", "(Ljava/util/List;)Lcom/facebook/share/model/ShareStoryContent$Builder;",
		FBJavaConvertor::ToJavaList(Colors));
#elif PLATFORM_IOS
	[pasteboardItems addObject: @{@"com.facebook.sharedSticker.backgroundTopColor" : TopColor.GetNSString()}];
	[pasteboardItems addObject: @{@"com.facebook.sharedSticker.backgroundBottomColor" : BottomColor.GetNSString()}];
#endif
}

void UFBShareStoryContent::SetAttributionLink(const FString& Link)
{
	if (!IsBuilderValid())
	{
		return;
	}

#if PLATFORM_ANDROID
	JavaContentBuilder = FBMethodCallUtils::CallObjectMethod(JavaContentBuilder, "setAttributionLink", "(Ljava/lang/String;)Lcom/facebook/share/model/ShareStoryContent$Builder;",
		FBJavaConvertor::GetJavaString(Link));
#elif PLATFORM_IOS
	[pasteboardItems addObject: @{@"com.facebook.sharedSticker.contentURL" : Link.GetNSString()}];
#endif
}
