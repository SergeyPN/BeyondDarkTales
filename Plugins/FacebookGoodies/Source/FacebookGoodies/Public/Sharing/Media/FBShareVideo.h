// Copyright (c) 2020 Nineva Studios

#pragma once

#include "FBShareMedia.h"

#include "FBShareVideo.generated.h"

UCLASS(BlueprintType)
class FACEBOOKGOODIES_API UFBShareVideo : public UFBShareMedia
{
	GENERATED_BODY()

public:

	/**
	 * Create a new Share Video object.
	 *
	 * @param VideoPath - full path to the file on the device.
	 * On iOS it has to be in specific format:  "assets-library://asset/asset.[FILE_EXTENSION]?id=[FILE_ID]&ext=[FILE_EXTENSION]"
	 * Where FILE_EXTENSION is mov, or mp4, etc., and FILE_ID is the asset ID from PhotoLibrary.
	 * Example: assets-library://asset/asset.mp4?id=225640F8-597C-4E71-A1E9-490C7737B0E4&ext=mp4
	 *
	 * Can be obtained as a result of the native image picker - under the deprecated UIImagePickerControllerReferenceURL key.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	static UFBShareVideo* NewShareVideo(const FString& VideoPath);
};
