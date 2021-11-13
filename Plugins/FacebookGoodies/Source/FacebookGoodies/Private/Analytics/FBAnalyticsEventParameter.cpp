// Copyright (c) 2020 Nineva Studios

#include "Analytics/FBAnalyticsEventParameter.h"

template<typename T>
T UFBAnalyticsEventParameter::GetValue() const
{
	return Value.GetValue<T>();
}

template int UFBAnalyticsEventParameter::GetValue<int>() const;
template float UFBAnalyticsEventParameter::GetValue<float>() const;
template bool UFBAnalyticsEventParameter::GetValue<bool>() const;
template FString UFBAnalyticsEventParameter::GetValue<FString>() const;

UFBAnalyticsEventParameter* UFBAnalyticsEventParameter::Conv_intToFBAnalyticsEventParameter(int Value)
{
	UFBAnalyticsEventParameter* ValueVariant = NewObject<UFBAnalyticsEventParameter>();
	ValueVariant->Type = EAnalyticsEventParameterType::Int;
	ValueVariant->Value = Value;

	return ValueVariant;
}

UFBAnalyticsEventParameter* UFBAnalyticsEventParameter::Conv_floatToFBAnalyticsEventParameter(float Value)
{
	UFBAnalyticsEventParameter* ValueVariant = NewObject<UFBAnalyticsEventParameter>();
	ValueVariant->Type = EAnalyticsEventParameterType::Float;
	ValueVariant->Value = Value;

	return ValueVariant;
}

UFBAnalyticsEventParameter* UFBAnalyticsEventParameter::Conv_boolToFBAnalyticsEventParameter(bool Value)
{
	UFBAnalyticsEventParameter* ValueVariant = NewObject<UFBAnalyticsEventParameter>();
	ValueVariant->Type = EAnalyticsEventParameterType::Bool;
	ValueVariant->Value = Value;

	return ValueVariant;
}

UFBAnalyticsEventParameter* UFBAnalyticsEventParameter::Conv_StringToFBAnalyticsEventParameter(const FString& Value)
{
	UFBAnalyticsEventParameter* ValueVariant = NewObject<UFBAnalyticsEventParameter>();
	ValueVariant->Type = EAnalyticsEventParameterType::String;
	ValueVariant->Value = Value;

	return ValueVariant;
}