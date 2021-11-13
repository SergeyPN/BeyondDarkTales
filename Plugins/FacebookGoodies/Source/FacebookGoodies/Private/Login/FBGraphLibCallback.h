//Copyryght (c) 2020 Nineva Studios

#pragma once

#include "Login/FBGraphLibrary.h"

#include "FBGraphLibCallback.generated.h"

UCLASS()
class FACEBOOKGOODIES_API UFBGraphLibCallback : public UObject
{
	GENERATED_BODY()

public:
	void BindGetUserPictureURLSuccessDelegate(const FOnGetUserPictureURLSuccess& OnSuccess);

	void ExecuteGetUserPictureURLSuccess(FString UserPictureURL);

private:
	UPROPERTY()
	FOnGetUserPictureURLSuccess OnGetUserPictureURLSuccessDelegate;
};