//Copyright (c) 2020 Nineva Studios

#pragma once

#include "Brushes/SlateDynamicImageBrush.h"
#include "CoreMinimal.h"
#include "Http.h"
#include "FBImageLoader.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnImageLoaded, FSlateBrush, ImageBrush, FString, ImageURL);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnImageLoadFailed, FString, ImageURL);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnRequestCompleted, bool);

UCLASS(BlueprintType)
class FACEBOOKGOODIES_API UFBImageLoader : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Demo Utils", meta = (AutoCreateRefTerm = "SuccessCallback, ErrorCallback"))
	void LoadImage(FString URL, const FOnImageLoaded& SuccessCallback, const FOnImageLoadFailed& ErrorCallback);

protected:
	void LoadImage_HttpRequestComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FOnImageLoaded SuccessCallback, FOnImageLoadFailed ErrorCallback);

private:
	FName GetCacheName(const FString& URL) const;

	TMap<FString, TSharedPtr<FSlateDynamicImageBrush>> ImageBrushes;

	TMap<FString, FOnRequestCompleted> PendingRequests;
};