// Copyright (c) 2020 Nineva Studios

#include "FBEventHandler.h"
#include "IOSAppDelegate.h"

#import <FBSDKCoreKit/FBSDKCoreKit.h>

@implementation FBEventHandler

static FBEventHandler* FBEventHandlerInstance = nil;

- (id)init
{
	self = [super init];
	return self;
}

+ (void)load
{
	[super load];

	if (FBEventHandlerInstance == nil)
	{
		FBEventHandlerInstance = [[FBEventHandler alloc] init];
		[FBEventHandlerInstance registerLifeCycleListener];
	}
}

+ (FBEventHandler*)sharedInstance
{
	if (FBEventHandlerInstance == nil)
	{
		[FBEventHandler load];
	}

	return FBEventHandlerInstance;
}

- (void)registerLifeCycleListener
{
	[[NSNotificationCenter defaultCenter] addObserver:self
											 selector:@selector(didFinishLaunching:)
												 name:UIApplicationDidFinishLaunchingNotification
											   object:nil];
}

- (void)didFinishLaunching:(NSNotification*)notification
{
	NSLog(@"[Facebook Goodies] FBEventHandler.cpp -> didFinishLaunching");
	[[FBSDKApplicationDelegate sharedInstance] application:[UIApplication sharedApplication]
							 didFinishLaunchingWithOptions:[IOSAppDelegate GetDelegate].launchOptions];
}

@end
