// Copyright (c) 2020 Nineva Studios

#pragma once

#include "FBShareMedia.h"

#include "FBSharePhoto.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class FACEBOOKGOODIES_API UFBSharePhoto : public UFBShareMedia
{
	GENERATED_BODY()

public:

	/**
	 * Create a new Share Photo object.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	static UFBSharePhoto* NewSharePhoto();

	/**
	 * Set the source image from texture.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	void SetImage(UTexture2D* Image);

	/**
	 * Set the source image from full file path on the device.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	void SetImagePath(const FString& ImagePath);

	/**
	 * Set whether the source image is user-generated.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	void SetUserGenerated(bool UserGenerated);

	/**
	 * Set the caption to the image.
	 *
	 * Note: the 'caption' must come from * the user, as pre-filled content is forbidden by the Platform Policies (2.3).
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	void SetCaption(const FString& Caption);
};
