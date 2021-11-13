// Copyright (c) 2020 Nineva Studios

#pragma once

#import <FBSDKShareKit/FBSDKShareKit.h>

@interface FBSharingDelegate : NSObject <FBSDKSharingDelegate> {
}

@property (nonatomic, copy) void (^onShareSuccess)(NSString* postId);

@property (nonatomic, copy) void (^onShareError)(NSString* error);

@property (nonatomic, copy) void (^onShareCancel)();

@end
