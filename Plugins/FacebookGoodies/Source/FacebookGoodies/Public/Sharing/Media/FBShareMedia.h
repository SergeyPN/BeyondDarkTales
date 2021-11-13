// Copyright (c) 2020 Nineva Studios

#pragma once

#include "FBShareMedia.generated.h"

UCLASS(BlueprintType)
class FACEBOOKGOODIES_API UFBShareMedia : public UObject
{
	GENERATED_BODY()

public:
	virtual ~UFBShareMedia();

	bool IsMediaValid();

#if PLATFORM_ANDROID
	jobject BuildMedia();

	FString ClassName = "ShareMedia";

	jobject JavaMediaBuilder;
#elif PLATFORM_IOS
	NSObject* iosMedia;
#endif
};
