// Copyright (c) 2020 Nineva Studios

#pragma once

@interface FBEventHandler : NSObject

+ (FBEventHandler *)sharedInstance;
- (void)didFinishLaunching:(NSNotification *)notification;

@end
