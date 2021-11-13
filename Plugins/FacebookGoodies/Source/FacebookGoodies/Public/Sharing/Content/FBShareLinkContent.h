// Copyright (c) 2020 Nineva Studios

#pragma once

#include "FBShareContent.h"

#include "FBShareLinkContent.generated.h"

UCLASS(BlueprintType)
class FACEBOOKGOODIES_API UFBShareLinkContent : public UFBShareContent
{
	GENERATED_BODY()

public:

	/**
	 * Create a new Share Link Content object.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	static UFBShareLinkContent* NewShareLinkContent();

	/**
	 * Set the quote for the link being shared.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	void SetQuote(const FString& Quote);
};
