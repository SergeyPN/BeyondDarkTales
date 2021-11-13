// Copyright (c) 2020 Nineva Studios

#pragma once

#include "FBUserData.generated.h"

USTRUCT(BlueprintType)
struct FACEBOOKGOODIES_API FFBUserData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Facebook Goodies | Analytics")
	FString Email = ""; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Facebook Goodies | Analytics")
	FString FirstName = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Facebook Goodies | Analytics")
	FString LastName = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Facebook Goodies | Analytics")
	FString Phone = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Facebook Goodies | Analytics")
	FString DateOfBirth = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Facebook Goodies | Analytics")
	FString Gender = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Facebook Goodies | Analytics")
	FString City = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Facebook Goodies | Analytics")
	FString State = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Facebook Goodies | Analytics")
	FString Zip = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Facebook Goodies | Analytics")
	FString Country = "";
};