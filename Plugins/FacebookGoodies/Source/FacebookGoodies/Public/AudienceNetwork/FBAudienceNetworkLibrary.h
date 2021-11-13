// Copyright (c) 2021 Nineva Studios

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "FBAudienceNetworkLibrary.generated.h"

UCLASS()
class FACEBOOKGOODIES_API UFBAudienceNetworkLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:

    /**
     * iOS only! Sets wether application advertiser tracking is enabled or not.
     * https://developers.facebook.com/docs/audience-network/guides/advertising-tracking-enabled/
     *
     * @param IsTrackingEnabled - toggle tracking based upon user's consent.
     */
    UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Audience Network")
    static void SetAudienceNetworkAdvertiserTrackingEnabled(bool IsTrackingEnabled);
};
