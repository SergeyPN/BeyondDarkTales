// Copyright (c) 2020 Nineva Studios

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "FBShareLibrary.generated.h"

DECLARE_DYNAMIC_DELEGATE(FOnShareCancelDelegate);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnShareSuccessDelegate, FString, PostId);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnShareErrorDelegate, FString, ErrorMessage);

/** Modes for the sharing dialog. */
UENUM()
enum class EFBShareMode : uint8
{
	// The mode is determined automatically.
	Automatic = 0,
	// The native dialog is used.
	Native = 1,
	// The web dialog is used.
	Web = 2,
	// The feed dialog in the built-in web browser.
	FeedWeb = 3,
	// The iOS integrated share sheet dialog. iOS only!
	ShareSheet = 4,
	// The dialog in Safari. iOS only!
	Browser = 5,
	// The feed dialog in Safari. iOS only!
	FeedBrowser = 6
};

class UFBShareContent;

UCLASS()
class FACEBOOKGOODIES_API UFBShareLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/**
	 * Share content. Requires the user to be signed in for iOS.
	 * Some of the share modes require the Facebook application to be installed on the device.
	 *
	 * Note: no callbacks will be fired when sharing to stories on iOS, because it works differently under the hood
	 *
	 * @param Content - content to share.
	 * @param ShareMode - mode for the share dialog.
	 * @param OnSuccess - callback to be invoked after successful sharing. Returns post ID, if the required permission is granted during login.
	 * @param OnCancel - callback to be invoked if the user cancels sharing.
	 * @param OnError - callback to be invoked if an error occurs during sharing.
	*/
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Sharing", meta = (AutoCreateRefTerm = "OnSuccess,OnCancel,OnError"))
	static void ShowShareDialogForContent(UFBShareContent* Content, EFBShareMode ShareMode,
										  const FOnShareSuccessDelegate& OnSuccess,
										  const FOnShareCancelDelegate& OnCancel,
										  const FOnShareErrorDelegate& OnError);

	static FOnShareSuccessDelegate OnShareSuccessDelegate;
	static FOnShareCancelDelegate OnShareCancelDelegate;
	static FOnShareErrorDelegate OnShareErrorDelegate;
};
