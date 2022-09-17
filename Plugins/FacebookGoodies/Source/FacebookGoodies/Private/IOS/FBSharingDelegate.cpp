// Copyright (c) 2020 Nineva Studios

#include "FBSharingDelegate.h"

@implementation FBSharingDelegate {
}

-(void) sharer:(id<FBSDKSharing>)sharer didCompleteWithResults:(NSDictionary *)results {
	NSString* postId = results[@"postId"];
	_onShareSuccess(postId);
}

-(void) sharer:(id<FBSDKSharing>)sharer didFailWithError:(NSError *)error {
	NSLog(@"%@", error.userInfo);
	_onShareError(error.localizedDescription);
}

- (void) sharerDidCancel:(id<FBSDKSharing>)sharer {
	_onShareCancel();
}

@end
