// Copyright (c) 2020 Nineva Studios

#pragma once

#include "FBShareContent.h"

class UFBSharePhoto;

#include "FBSharePhotoContent.generated.h"

UCLASS(BlueprintType)
class FACEBOOKGOODIES_API UFBSharePhotoContent : public UFBShareContent
{
	GENERATED_BODY()

public:

	/**
	 * Create a new Share Photo Content object.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	static UFBSharePhotoContent* NewSharePhotoContent();

	/**
	 * Add a Share Photo object to the content.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	void AddPhoto(UFBSharePhoto* Photo);

	/**
	 * Add multiple Share Photo objects to the content.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	void AddPhotos(const TArray<UFBSharePhoto*>& Photos);

	/**
	 * Set the content with multiple Share Photo objects.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	void SetPhotos(const TArray<UFBSharePhoto*>& Photos);
};
