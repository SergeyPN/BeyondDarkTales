// Copyright (c) 2020 Nineva Studios

#include "Sharing/Media/FBSharePhoto.h"

#include "Engine/Texture2D.h"
#include "FacebookGoodiesLog.h"
#include "Sharing/Content/FBShareContent.h"

#if PLATFORM_IOS
#import <FBSDKShareKit/FBSDKShareKit.h>
#include "FBIosUtils.h"
#endif

UFBSharePhoto* UFBSharePhoto::NewSharePhoto()
{
	UFBSharePhoto* media = NewObject<UFBSharePhoto>();

#if PLATFORM_ANDROID
	media->JavaMediaBuilder = FBMethodCallUtils::CallStaticObjectMethod(UFBShareContent::FBShareClassName, "GetSharePhotoBuilder",
		"()Lcom/facebook/share/model/SharePhoto$Builder;"); 
	media->ClassName = "SharePhoto";
#elif PLATFORM_IOS
	media->iosMedia = [[FBSDKSharePhoto alloc] init];
#endif

	return media;
}

void UFBSharePhoto::SetImage(UTexture2D* Image)
{
	if (!IsMediaValid())
	{
		return;
	}

#if PLATFORM_ANDROID
	jbyteArray ImageBytes = FBJavaConvertor::ConvertToJByteArray(FBJavaConvertor::ByteArrayFromTexture(Image));

	JavaMediaBuilder = FBMethodCallUtils::CallStaticObjectMethod(UFBShareContent::FBShareClassName, "AddBitmapToPhotoBuilder", 
		"(Lcom/facebook/share/model/SharePhoto$Builder;[BII)Lcom/facebook/share/model/SharePhoto$Builder;", JavaMediaBuilder, ImageBytes, Image->GetSizeX(), Image->GetSizeY());
#elif PLATFORM_IOS
	((FBSDKSharePhoto*) iosMedia).image = FBIosUtils::ConvertTextureToImage(Image);
#endif
}

void UFBSharePhoto::SetImagePath(const FString& ImagePath)
{
	if (!IsMediaValid())
	{
		return;
	}

#if PLATFORM_ANDROID
	JavaMediaBuilder = FBMethodCallUtils::CallStaticObjectMethod(UFBShareContent::FBShareClassName, "AddImageToPhotoBuilder",
		"(Lcom/facebook/share/model/SharePhoto$Builder;Landroid/app/Activity;Ljava/lang/String;)Lcom/facebook/share/model/SharePhoto$Builder;", 
		JavaMediaBuilder, FJavaWrapper::GameActivityThis, FBJavaConvertor::GetJavaString(ImagePath));
#elif PLATFORM_IOS
	((FBSDKSharePhoto*) iosMedia).image = [UIImage imageWithContentsOfFile:ImagePath.GetNSString()];
#endif
}

void UFBSharePhoto::SetUserGenerated(bool UserGenerated)
{
	if (!IsMediaValid())
	{
		return;
	}

#if PLATFORM_ANDROID
	JavaMediaBuilder = FBMethodCallUtils::CallObjectMethod(JavaMediaBuilder, "setUserGenerated","(Z)Lcom/facebook/share/model/SharePhoto$Builder;", UserGenerated);
#elif PLATFORM_IOS
	((FBSDKSharePhoto*) iosMedia).userGenerated = UserGenerated;
#endif
}

void UFBSharePhoto::SetCaption(const FString& Caption)
{
	if (!IsMediaValid())
	{
		return;
	}

#if PLATFORM_ANDROID
	JavaMediaBuilder = FBMethodCallUtils::CallObjectMethod(JavaMediaBuilder, "setCaption", "(Ljava/lang/String;)Lcom/facebook/share/model/SharePhoto$Builder;", 
		FBJavaConvertor::GetJavaString(Caption));
#elif PLATFORM_IOS
	((FBSDKSharePhoto*) iosMedia).caption = Caption.GetNSString();
#endif
}
