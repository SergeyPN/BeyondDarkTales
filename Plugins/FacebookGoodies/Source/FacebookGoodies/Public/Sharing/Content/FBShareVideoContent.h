// Copyright (c) 2020 Nineva Studios

#pragma once

#include "FBShareContent.h"

class UFBShareVideo;

#include "FBShareVideoContent.generated.h"

UCLASS(BlueprintType)
class FACEBOOKGOODIES_API UFBShareVideoContent : public UFBShareContent
{
	GENERATED_BODY()

public:

	/**
	 * Create a new Share Video Content object with a corresponding Share Video object.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	static UFBShareVideoContent* NewShareVideoContent(UFBShareVideo* Video);
};
