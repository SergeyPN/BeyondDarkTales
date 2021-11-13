// Copyright (c) 2020 Nineva Studios

#pragma once

#if PLATFORM_ANDROID
#include "Android/AndroidJNI.h"
#endif

#if PLATFORM_IOS
#import <FBSDKShareKit/FBSDKShareKit.h>
#endif

#include "FBShareContent.generated.h"

UCLASS(BlueprintType)
class FACEBOOKGOODIES_API UFBShareContent : public UObject
{
	GENERATED_BODY()

public:
	virtual ~UFBShareContent();

	/**
	 * Set the URL for the content being shared.
	 *
	 * Note: this URL will be checked for all link meta tags for linking in platform specific ways.
	 * See documentation for App Links  (https://developers.facebook.com/docs/applinks/)
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	void SetContentUrl(const FString& Url);

	/**
	 * Set the list of IDs for taggable people to tag with this content.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	void SetPeopleIds(const TArray<FString>& Ids);

	/**
	 * Set the ID for a place to tag with this content.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	void SetPlaceId(const FString& PlaceId);

	/**
	 * Set the ID for a page to tag with this content.
	 *
	 * Note: will not take any effect on iOS.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	void SetPageId(const FString& PageId);

	/**
	 * Set the value to be added to the referrer URL when a person follows a link from this shared content on feed.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	void SetRef(const FString& Ref);

	/**
	 * Set the hashtag for the content being shared.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing")
	void SetShareHashtag(const FString& ShareHashtag);

	bool IsBuilderValid();	

#if PLATFORM_ANDROID
	jobject BuildContent();

	FString ClassName = "ShareContent";

	jobject JavaContentBuilder;

	static const ANSICHAR* FBShareClassName;
#endif
	
#if PLATFORM_IOS
	id<FBSDKSharingContent> iosContent;
#endif
};
