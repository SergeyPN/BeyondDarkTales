// Copyright (c) 2020 Nineva Studios

#pragma once

#include "Misc/Variant.h"

#include "FBAnalyticsEventParameter.generated.h"

UENUM()
enum class EAnalyticsEventParameterType : uint8
{
	Null,
	Int,
	Float,
	Bool,
	String,
};

UCLASS(BlueprintType)
class FACEBOOKGOODIES_API UFBAnalyticsEventParameter : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Int to FB Analytics Event Parameter", CompactNodeTitle = "->", BlueprintAutocast), Category = "Facebook Goodies | Analytics")
	static UFBAnalyticsEventParameter* Conv_intToFBAnalyticsEventParameter(int Value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Float to FB Analytics Event Parameter", CompactNodeTitle = "->", BlueprintAutocast), Category = "Facebook Goodies | Analytics")
	static UFBAnalyticsEventParameter* Conv_floatToFBAnalyticsEventParameter(float Value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Bool to FB Analytics Event Parameter", CompactNodeTitle = "->", BlueprintAutocast), Category = "Facebook Goodies | Analytics")
	static UFBAnalyticsEventParameter* Conv_boolToFBAnalyticsEventParameter(bool Value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "String to FB Analytics Event Parameter", CompactNodeTitle = "->", BlueprintAutocast), Category = "Facebook Goodies | Analytics")
	static UFBAnalyticsEventParameter* Conv_StringToFBAnalyticsEventParameter(const FString& Value);

	template<typename T>
	T GetValue() const;

	EAnalyticsEventParameterType Type = EAnalyticsEventParameterType::Null;
	FVariant Value;
};
