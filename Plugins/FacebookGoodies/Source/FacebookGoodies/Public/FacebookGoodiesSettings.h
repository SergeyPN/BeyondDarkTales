// Copyright (c) 2020 Nineva Studios

#pragma once

#include "Engine/EngineTypes.h"
#include "FacebookGoodiesSettings.generated.h"

UCLASS(config = Engine, defaultconfig)
class FACEBOOKGOODIES_API UFacebookGoodiesSettings : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Facebook Goodies Settings|General")
	FString FacebookAppID;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Facebook Goodies Settings|General", Meta = (DisplayName = "Facebook Client Token (Needed for graph API calls)"))
	FString FacebookClientToken;
	
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Facebook Goodies Settings|iOS", Meta = (DisplayName = "Add FBAudienceNetwork SDK"))
	bool bEnableAudienceNetwork = false;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Facebook Goodies Settings|iOS", Meta = (DisplayName = "Automatically log events"))
	bool bAutoLogEvents = true;
	
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Facebook Goodies Settings|iOS", Meta = (DisplayName = "Enable Advertiser ID Collection"))
	bool bEnableAdvertiserIDCollection = true;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& propertyChangedEvent) override;
	
	void HandleAudienceNetwork();
#endif
};
