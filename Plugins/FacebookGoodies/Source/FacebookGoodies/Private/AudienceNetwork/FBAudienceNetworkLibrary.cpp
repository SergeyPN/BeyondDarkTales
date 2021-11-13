// Copyright (c) 2021 Nineva Studios

#include "AudienceNetwork/FBAudienceNetworkLibrary.h"

#include "FacebookGoodiesLog.h"

#if PLATFORM_IOS && WITH_AUDIENCE_NETWORK
#import <FBAudienceNetwork/FBAdSettings.h>
#endif

void UFBAudienceNetworkLibrary::SetAudienceNetworkAdvertiserTrackingEnabled(bool IsTrackingEnabled)
{
#if PLATFORM_ANDROID
    UE_LOG(LogFacebookGoodies, Error, TEXT("UFBAudienceNetworkLibrary::SetAudienceNetworkAdvertiserTrackingEnabled: Platform is not supported."));
#endif
#if PLATFORM_IOS && WITH_AUDIENCE_NETWORK
    [FBAdSettings setAdvertiserTrackingEnabled:IsTrackingEnabled];
#endif
}
