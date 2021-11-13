// Copyright (c) 2020 Nineva Studios

#pragma once

#include "FBShareContent.h"

#include "FBShareMediaContent.generated.h"

class UFBShareMedia;

UCLASS(BlueprintType)
class FACEBOOKGOODIES_API UFBShareMediaContent : public UFBShareContent
{
	GENERATED_BODY()

public:

	/**
	 * Create a new Share Media Content object.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	static UFBShareMediaContent* NewShareMediaContent(const TArray<UFBShareMedia*>& Media);
};
