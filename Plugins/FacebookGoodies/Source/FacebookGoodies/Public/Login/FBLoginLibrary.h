// Copyright (c) 2020 Nineva Studios

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "FBLoginLibrary.generated.h"

DECLARE_DYNAMIC_DELEGATE(FOnLoginSuccessDelegate);
DECLARE_DYNAMIC_DELEGATE(FOnLoginCancelDelegate);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLoginErrorDelegate, FString, ErrorMessage);

UCLASS()
class FACEBOOKGOODIES_API UFBLoginLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/**
	* Log in via Facebook (uses public profile permission).
	*
	* @param OnLoginSuccess - Called in case of successful login
	* @param OnLoginCancel - Called in case the user cancels
	* @param OnLoginError - Called in case an error occurs
	*/
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Login", meta = (AutoCreateRefTerm = "OnLoginSuccess, OnLoginCancel, OnLoginError"))
	static void Login(const FOnLoginSuccessDelegate& OnLoginSuccess, const FOnLoginCancelDelegate& OnLoginCancel, const FOnLoginErrorDelegate& OnLoginError);

	/**
	* Log in via Facebook with specific read permissions.
	*
	* @param ReadPermissions - List of read permissions
	* @param OnLoginSuccess - Called in case of successful login
	* @param OnLoginCancel - Called in case the user cancels
	* @param OnLoginError - Called in case an error occurs
	*/
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Login", meta = (AutoCreateRefTerm = "OnLoginSuccess, OnLoginCancel, OnLoginError"))
	static void LoginWithReadPermissions(const TArray<FString> ReadPermissions, 
		const FOnLoginSuccessDelegate& OnLoginSuccess, const FOnLoginCancelDelegate& OnLoginCancel, const FOnLoginErrorDelegate& OnLoginError);

	/**
	* Log in via Facebook with specific read permissions.
	*
	* @param PublishPermissions - List of publish permissions
	* @param OnLoginSuccess - Called in case of successful login
	* @param OnLoginCancel - Called in case the user cancels
	* @param OnLoginError - Called in case an error occurs
	*/
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Login", meta = (AutoCreateRefTerm = "OnLoginSuccess, OnLoginCancel, OnLoginError"))
	static void LoginWithPublishPermissions(const TArray<FString> PublishPermissions, 
		const FOnLoginSuccessDelegate& OnLoginSuccess, const FOnLoginCancelDelegate& OnLoginCancel, const FOnLoginErrorDelegate& OnLoginError);

	/**
	* Log out the current user.
	*/
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Login")
	static void Logout();

	/**
	* Check if a user is logged in.
	*
	* @returns True if a user is logged in, false otherwise
	*/
	UFUNCTION(BlueprintPure, Category = "Facebook Goodies | Login")
	static bool IsLoggedIn();

	/**
	* Get the access token for the currently logged in user.
	*
	* @returns Access token string or an empty string if no user is logged in
	*/
	UFUNCTION(BlueprintPure, Category = "Facebook Goodies | Login")
	static FString GetAccessToken();
	
	/**
	* Get the user ID for the currently logged in user.
	*
	* @returns User ID string or an empty string if no user is logged in
	*/
	UFUNCTION(BlueprintPure, Category = "Facebook Goodies | Login")
	static FString GetUserId();

	/**
	* Gets the list of permissions associated with currently logged in user.
	*
	* @returns Array of strings representing the granted permissions.
	*/
	UFUNCTION(BlueprintPure, Category = "Facebook Goodies | Login")
	static TArray<FString> GetPermissions();

	/**
	* Gets the list of declined permissions associated with currently logged in user.
	*
	* @returns Array of strings representing the declined permissions.
	*/
	UFUNCTION(BlueprintPure, Category = "Facebook Goodies | Login")
	static TArray<FString> GetDeclinedPermissions();

	/**
	* Gets the list of expired permissions associated with currently logged in user.
	*
	* @returns Array of strings representing the expired permissions.
	*/
	UFUNCTION(BlueprintPure, Category = "Facebook Goodies | Login")
	static TArray<FString> GetExpiredPermissions();

	static FOnLoginSuccessDelegate OnLoginSuccessDelegate;
	static FOnLoginCancelDelegate OnLoginCancelDelegate;
	static FOnLoginErrorDelegate OnLoginErrorDelegate;

};
