// Copyright (c) 2020 Nineva Studios

#pragma once

#include "FBFriendsData.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "FBGraphLibrary.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnQueryCompleteDelegate, FString, JsonResponse);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetFriendsCompleteDelegate, FFBFetchedFriendsData, FetchedFriendsData);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetUserPictureURLSuccess, FString, UserPictureUrl);
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnGetProfileDelegate, FString, Name, FString, Email, FString, PictureURL);

UENUM(BlueprintType)
enum class EFBHttpMethod : uint8
{
	Get = 0,
	Post,
	Delete
};

UENUM(BluePrintType)
enum class EPagingDirection : uint8
{
	PREVIOUS = 0,
	NEXT = 1
};

UCLASS()
class FACEBOOKGOODIES_API UFBGraphLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/**
	* Run a Facebook Graph API query.
	*
	* @param Query - Query to run
	* @param Parameters - Parameter passed to the query
	* @param HttpMethod - Http method to use
	* @param OnQueryComplete - Called when a query completes
	*/
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Graph API")
	static void RunQuery(const FString& Query, TMap<FString, FString> Parameters, EFBHttpMethod HttpMethod, 
		const FOnQueryCompleteDelegate& OnQueryComplete);

	/**
	* Get basic profile data: name, email (requires permission) and profile picture URL.
	*
	* @param OnGetProfile - Called when profile data is retrieved
	*/
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Graph API")
	static void GetProfileData(const FOnGetProfileDelegate& OnGetProfile);

	/**
	* Get user's friends data.
	*
	* @param UserId - ID of a user to fetch friends data from
	* @param OnGetFriends - Called when friends data is retrieved
	*/
	UFUNCTION(BlueprintCallable, Category = "FacebookGoodies | Graph API")
	static void GetUserFriendsData(FString UserId, const FOnGetFriendsCompleteDelegate& OnGetFriends);

	/**
	* Get user's friends paging data.
	*
	* @param UserId - ID of a user to fetch friends data from. Required only for iOS!
	* @param FetchedCursors - Cursors from fetched friends data response
	* @param PagingDirection - Direction for scrolled page
	* @param OnGetFriends - Called when friends data is retrieved
	*/
	UFUNCTION(BlueprintCallable, Category = "FacebookGoodies | Graph API")
	static void GetFriendsPagingData(FString UserId, FFBPagingCursors FetchedCursors, EPagingDirection PagingDirection, const FOnGetFriendsCompleteDelegate& OnGetFriends);
	
	/**
	* Get user's profile picture.
	*
	* @param UserId - ID of a user to get profile picture url from
	* @param OnPictureUrlReceived - Called when image url is retrieved
	*/
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Graph API")
	static void GetProfilePicture(FString UserId, const FOnGetUserPictureURLSuccess& OnPictureUrlReceived);

	static FOnQueryCompleteDelegate OnQueryCompleteDelegate;
	static FOnGetFriendsCompleteDelegate OnGetFriendsCompleteDelegate;
	static FOnGetProfileDelegate OnGetProfileDelegate;
};
