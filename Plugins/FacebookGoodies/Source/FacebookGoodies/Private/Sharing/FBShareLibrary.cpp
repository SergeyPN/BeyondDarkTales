// Copyright (c) 2020 Nineva Studios

#include "Sharing/FBShareLibrary.h"

#include "Async/Async.h"
#include "FacebookGoodiesLog.h"
#include "Sharing/Content/FBShareContent.h"

#if PLATFORM_ANDROID
#include "Android/Utils/FBJavaConvertor.h"
#include "Android/Utils/FBMethodCallUtils.h"
#endif

#if PLATFORM_IOS
#include "FBSharingDelegate.h"
#import "IOS/IOSAppDelegate.h"

#import <FBSDKCoreKit/FBSDKSettings.h>
#endif

FOnShareSuccessDelegate UFBShareLibrary::OnShareSuccessDelegate;
FOnShareCancelDelegate UFBShareLibrary::OnShareCancelDelegate;
FOnShareErrorDelegate UFBShareLibrary::OnShareErrorDelegate;

#if PLATFORM_IOS
FBSharingDelegate* delegate;
#endif

void UFBShareLibrary::ShowShareDialogForContent(UFBShareContent* Content, EFBShareMode ShareMode, const FOnShareSuccessDelegate& OnSuccess,
	const FOnShareCancelDelegate& OnCancel, const FOnShareErrorDelegate& OnError)
{
	OnShareSuccessDelegate = OnSuccess;
	OnShareCancelDelegate = OnCancel;
	OnShareErrorDelegate = OnError;

#if PLATFORM_ANDROID
	FBMethodCallUtils::CallStaticVoidMethod(UFBShareContent::FBShareClassName, "ShareContent",
		"(Landroid/app/Activity;Lcom/facebook/share/model/ShareContent;I)V", FJavaWrapper::GameActivityThis, Content->BuildContent(), (int) ShareMode);
#elif PLATFORM_IOS
	UFBShareStoryContent* Story = dynamic_cast<UFBShareStoryContent*>(Content);
	if (Story != nullptr) {
		NSMutableArray* pasteboardItems = Story->pasteboardItems;
		[pasteboardItems addObject:@{@"com.facebook.sharedSticker.appID" : [FBSDKSettings appID]}];
		NSDictionary *pasteboardOptions = @{UIPasteboardOptionExpirationDate : [[NSDate date] dateByAddingTimeInterval:60 * 5]};
		[[UIPasteboard generalPasteboard] setItems:pasteboardItems options:pasteboardOptions];
		
		[[UIApplication sharedApplication] openURL:Story->shareUrl options:@{} completionHandler:nil];
	} else {
		delegate = [FBSharingDelegate new];
		delegate.onShareSuccess = ^(NSString* postId) {
			FString PostID = postId == nil ? "" : FString(postId);
			AsyncTask(ENamedThreads::GameThread, [=]() {
				OnShareSuccessDelegate.ExecuteIfBound(PostID);
			});
		};
		delegate.onShareError = ^(NSString* error) {
			FString ErrorMessage = FString(error);
			AsyncTask(ENamedThreads::GameThread, [=]() {
				OnShareErrorDelegate.ExecuteIfBound(ErrorMessage);
			});
		};
		delegate.onShareCancel = ^() {
			AsyncTask(ENamedThreads::GameThread, [=]() {
				OnShareCancelDelegate.ExecuteIfBound();
			});
		};
		
		FBSDKShareDialog* dialog = [[FBSDKShareDialog alloc] init];
		dialog.delegate = delegate;
		dialog.shareContent = Content->iosContent;
		switch (ShareMode) {
			case EFBShareMode::Automatic:
				dialog.mode = FBSDKShareDialogModeAutomatic;
				break;
			case EFBShareMode::Native:
				dialog.mode = FBSDKShareDialogModeNative;
				break;
			case EFBShareMode::Web:
				dialog.mode = FBSDKShareDialogModeWeb;
				break;
			case EFBShareMode::FeedWeb:
				dialog.mode = FBSDKShareDialogModeFeedWeb;
				break;
			case EFBShareMode::ShareSheet:
				dialog.mode = FBSDKShareDialogModeShareSheet;
				break;
			case EFBShareMode::Browser:
				dialog.mode = FBSDKShareDialogModeBrowser;
				break;
			case EFBShareMode::FeedBrowser:
				dialog.mode = FBSDKShareDialogModeFeedBrowser;
				break;
				
			default:
				dialog.mode = FBSDKShareDialogModeAutomatic;
				break;
		}
		
		dispatch_async(dispatch_get_main_queue(), ^{
			dialog.fromViewController = [IOSAppDelegate GetDelegate].IOSController;
			[dialog show];
		});
	}
#endif
}

#if PLATFORM_ANDROID
JNI_METHOD void Java_com_ninevastudios_fbgoodies_FBGoodiesShare_OnShareSuccess(JNIEnv* env, jclass clazz, jstring postId)
{
	FString PostId = FBJavaConvertor::FromJavaString(postId);

	AsyncTask(ENamedThreads::GameThread, [=]() {
		UFBShareLibrary::OnShareSuccessDelegate.ExecuteIfBound(PostId);
	});
}

JNI_METHOD void Java_com_ninevastudios_fbgoodies_FBGoodiesShare_OnShareCancel(JNIEnv* env, jclass clazz)
{
	AsyncTask(ENamedThreads::GameThread, [=]() {
		UFBShareLibrary::OnShareCancelDelegate.ExecuteIfBound();
	});
}

JNI_METHOD void Java_com_ninevastudios_fbgoodies_FBGoodiesShare_OnShareError(JNIEnv* env, jclass clazz, jstring error)
{
	FString Error = FBJavaConvertor::FromJavaString(error);

	AsyncTask(ENamedThreads::GameThread, [=]() {
		UFBShareLibrary::OnShareErrorDelegate.ExecuteIfBound(Error);
	});
}
#endif
