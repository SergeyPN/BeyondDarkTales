// Copyright (c) 2020 Nineva Studios

#pragma once

#include "FBShareContent.h"

class UFBSharePhoto;
class UFBShareMedia;

#include "FBShareStoryContent.generated.h"

UCLASS(BlueprintType)
class FACEBOOKGOODIES_API UFBShareStoryContent : public UFBShareContent
{
	GENERATED_BODY()

public:

	/**
	 * Create a new Share Story Content object.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	static UFBShareStoryContent* NewShareStoryContent();

	/**
	 * Add a sticker asset to the story content.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	void SetStickerAsset(UFBSharePhoto* Photo);

	/**
	 * Set the background of the content. Can be either a Share Photo or a Share Video object.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	void SetBackgroundAsset(UFBShareMedia* Media);

	/**
	 * Set the background color of the content. If the colors are different, a color gradient background will be generated.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	void SetBackgroundColorList(const FString& TopColor, const FString& BottomColor);

	/**
	 * A deep link URL to content in your app. If missing, the story will not include an attribution link.
	 * Use full URLs, including protocol (e.g. https://developers.facebok.com instead of developers.facebook.com)
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	void SetAttributionLink(const FString& Link);
	
#if PLATFORM_IOS
	NSURL* shareUrl;
	NSMutableArray* pasteboardItems;
#endif
};
