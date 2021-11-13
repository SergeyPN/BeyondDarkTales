// Copyright (c) 2020 Nineva Studios

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "FBFriendsData.generated.h"

USTRUCT(BlueprintType)
struct FACEBOOKGOODIES_API FFBFriendData
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadOnly, Category = "Facebook Goodies | Fetch Friends")
		FString Name = "";

	UPROPERTY(BlueprintReadOnly, Category = "Facebook Goodies | Fetch Friends")
		FString Id = "";
};

USTRUCT(BlueprintType)
struct FACEBOOKGOODIES_API FFBPagingCursors
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadOnly, Category = "Facebook Goodies | Fetch Friends")
		FString Before = "";

	UPROPERTY(BlueprintReadOnly, Category = "Facebook Goodies | Fetch Friends")
		FString After = "";
};

USTRUCT(BlueprintType)
struct FACEBOOKGOODIES_API FFBFriendsSummary
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadOnly, Category = "Facebook Goodies | Fetch Friends")
		int TotalCount = -1;
};

USTRUCT(BlueprintType)
struct FACEBOOKGOODIES_API FFBFriendsPaging
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadOnly, Category = "Facebook Goodies | Fetch Friends")
		FFBPagingCursors Cursors;
	
		UPROPERTY(BlueprintReadOnly, Category = "Facebook Goodies | Fetch Friends")
		FString Previous = "";
		
		UPROPERTY(BlueprintReadOnly, Category = "Facebook Goodies | Fetch Friends")
		FString Next = "";
};

USTRUCT(BlueprintType)
struct FACEBOOKGOODIES_API FFBFetchedFriendsData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "Facebook Goodies | Fetch Friends")
		TArray<FFBFriendData> Data;

	UPROPERTY(BlueprintReadOnly, Category = "Facebook Goodies | Fetch Friends")
		FFBFriendsPaging Paging;

	UPROPERTY(BlueprintReadOnly, Category = "Facebook Goodies | Fetch Friends")
		FFBFriendsSummary Summary;
};
