// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FacebookGoodies/Public/Analytics/FBAnalyticsEventParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBAnalyticsEventParameter() {}
// Cross Module References
	FACEBOOKGOODIES_API UEnum* Z_Construct_UEnum_FacebookGoodies_EAnalyticsEventParameterType();
	UPackage* Z_Construct_UPackage__Script_FacebookGoodies();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBAnalyticsEventParameter_NoRegister();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBAnalyticsEventParameter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EAnalyticsEventParameterType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FacebookGoodies_EAnalyticsEventParameterType, Z_Construct_UPackage__Script_FacebookGoodies(), TEXT("EAnalyticsEventParameterType"));
		}
		return Singleton;
	}
	template<> FACEBOOKGOODIES_API UEnum* StaticEnum<EAnalyticsEventParameterType>()
	{
		return EAnalyticsEventParameterType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAnalyticsEventParameterType(EAnalyticsEventParameterType_StaticEnum, TEXT("/Script/FacebookGoodies"), TEXT("EAnalyticsEventParameterType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FacebookGoodies_EAnalyticsEventParameterType_Hash() { return 3626270104U; }
	UEnum* Z_Construct_UEnum_FacebookGoodies_EAnalyticsEventParameterType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FacebookGoodies();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAnalyticsEventParameterType"), 0, Get_Z_Construct_UEnum_FacebookGoodies_EAnalyticsEventParameterType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAnalyticsEventParameterType::Null", (int64)EAnalyticsEventParameterType::Null },
				{ "EAnalyticsEventParameterType::Int", (int64)EAnalyticsEventParameterType::Int },
				{ "EAnalyticsEventParameterType::Float", (int64)EAnalyticsEventParameterType::Float },
				{ "EAnalyticsEventParameterType::Bool", (int64)EAnalyticsEventParameterType::Bool },
				{ "EAnalyticsEventParameterType::String", (int64)EAnalyticsEventParameterType::String },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bool.Name", "EAnalyticsEventParameterType::Bool" },
				{ "Float.Name", "EAnalyticsEventParameterType::Float" },
				{ "Int.Name", "EAnalyticsEventParameterType::Int" },
				{ "ModuleRelativePath", "Public/Analytics/FBAnalyticsEventParameter.h" },
				{ "Null.Name", "EAnalyticsEventParameterType::Null" },
				{ "String.Name", "EAnalyticsEventParameterType::String" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FacebookGoodies,
				nullptr,
				"EAnalyticsEventParameterType",
				"EAnalyticsEventParameterType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UFBAnalyticsEventParameter::execConv_StringToFBAnalyticsEventParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFBAnalyticsEventParameter**)Z_Param__Result=UFBAnalyticsEventParameter::Conv_StringToFBAnalyticsEventParameter(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBAnalyticsEventParameter::execConv_boolToFBAnalyticsEventParameter)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFBAnalyticsEventParameter**)Z_Param__Result=UFBAnalyticsEventParameter::Conv_boolToFBAnalyticsEventParameter(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBAnalyticsEventParameter::execConv_floatToFBAnalyticsEventParameter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFBAnalyticsEventParameter**)Z_Param__Result=UFBAnalyticsEventParameter::Conv_floatToFBAnalyticsEventParameter(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBAnalyticsEventParameter::execConv_intToFBAnalyticsEventParameter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFBAnalyticsEventParameter**)Z_Param__Result=UFBAnalyticsEventParameter::Conv_intToFBAnalyticsEventParameter(Z_Param_Value);
		P_NATIVE_END;
	}
	void UFBAnalyticsEventParameter::StaticRegisterNativesUFBAnalyticsEventParameter()
	{
		UClass* Class = UFBAnalyticsEventParameter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_boolToFBAnalyticsEventParameter", &UFBAnalyticsEventParameter::execConv_boolToFBAnalyticsEventParameter },
			{ "Conv_floatToFBAnalyticsEventParameter", &UFBAnalyticsEventParameter::execConv_floatToFBAnalyticsEventParameter },
			{ "Conv_intToFBAnalyticsEventParameter", &UFBAnalyticsEventParameter::execConv_intToFBAnalyticsEventParameter },
			{ "Conv_StringToFBAnalyticsEventParameter", &UFBAnalyticsEventParameter::execConv_StringToFBAnalyticsEventParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_boolToFBAnalyticsEventParameter_Statics
	{
		struct FBAnalyticsEventParameter_eventConv_boolToFBAnalyticsEventParameter_Parms
		{
			bool Value;
			UFBAnalyticsEventParameter* ReturnValue;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_boolToFBAnalyticsEventParameter_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FBAnalyticsEventParameter_eventConv_boolToFBAnalyticsEventParameter_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_boolToFBAnalyticsEventParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBAnalyticsEventParameter_eventConv_boolToFBAnalyticsEventParameter_Parms), &Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_boolToFBAnalyticsEventParameter_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_boolToFBAnalyticsEventParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAnalyticsEventParameter_eventConv_boolToFBAnalyticsEventParameter_Parms, ReturnValue), Z_Construct_UClass_UFBAnalyticsEventParameter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_boolToFBAnalyticsEventParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_boolToFBAnalyticsEventParameter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_boolToFBAnalyticsEventParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_boolToFBAnalyticsEventParameter_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Facebook Goodies | Analytics" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Bool to FB Analytics Event Parameter" },
		{ "ModuleRelativePath", "Public/Analytics/FBAnalyticsEventParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_boolToFBAnalyticsEventParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBAnalyticsEventParameter, nullptr, "Conv_boolToFBAnalyticsEventParameter", nullptr, nullptr, sizeof(FBAnalyticsEventParameter_eventConv_boolToFBAnalyticsEventParameter_Parms), Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_boolToFBAnalyticsEventParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_boolToFBAnalyticsEventParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_boolToFBAnalyticsEventParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_boolToFBAnalyticsEventParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_boolToFBAnalyticsEventParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_boolToFBAnalyticsEventParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_floatToFBAnalyticsEventParameter_Statics
	{
		struct FBAnalyticsEventParameter_eventConv_floatToFBAnalyticsEventParameter_Parms
		{
			float Value;
			UFBAnalyticsEventParameter* ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_floatToFBAnalyticsEventParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAnalyticsEventParameter_eventConv_floatToFBAnalyticsEventParameter_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_floatToFBAnalyticsEventParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAnalyticsEventParameter_eventConv_floatToFBAnalyticsEventParameter_Parms, ReturnValue), Z_Construct_UClass_UFBAnalyticsEventParameter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_floatToFBAnalyticsEventParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_floatToFBAnalyticsEventParameter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_floatToFBAnalyticsEventParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_floatToFBAnalyticsEventParameter_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Facebook Goodies | Analytics" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Float to FB Analytics Event Parameter" },
		{ "ModuleRelativePath", "Public/Analytics/FBAnalyticsEventParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_floatToFBAnalyticsEventParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBAnalyticsEventParameter, nullptr, "Conv_floatToFBAnalyticsEventParameter", nullptr, nullptr, sizeof(FBAnalyticsEventParameter_eventConv_floatToFBAnalyticsEventParameter_Parms), Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_floatToFBAnalyticsEventParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_floatToFBAnalyticsEventParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_floatToFBAnalyticsEventParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_floatToFBAnalyticsEventParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_floatToFBAnalyticsEventParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_floatToFBAnalyticsEventParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_intToFBAnalyticsEventParameter_Statics
	{
		struct FBAnalyticsEventParameter_eventConv_intToFBAnalyticsEventParameter_Parms
		{
			int32 Value;
			UFBAnalyticsEventParameter* ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_intToFBAnalyticsEventParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAnalyticsEventParameter_eventConv_intToFBAnalyticsEventParameter_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_intToFBAnalyticsEventParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAnalyticsEventParameter_eventConv_intToFBAnalyticsEventParameter_Parms, ReturnValue), Z_Construct_UClass_UFBAnalyticsEventParameter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_intToFBAnalyticsEventParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_intToFBAnalyticsEventParameter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_intToFBAnalyticsEventParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_intToFBAnalyticsEventParameter_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Facebook Goodies | Analytics" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Int to FB Analytics Event Parameter" },
		{ "ModuleRelativePath", "Public/Analytics/FBAnalyticsEventParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_intToFBAnalyticsEventParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBAnalyticsEventParameter, nullptr, "Conv_intToFBAnalyticsEventParameter", nullptr, nullptr, sizeof(FBAnalyticsEventParameter_eventConv_intToFBAnalyticsEventParameter_Parms), Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_intToFBAnalyticsEventParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_intToFBAnalyticsEventParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_intToFBAnalyticsEventParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_intToFBAnalyticsEventParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_intToFBAnalyticsEventParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_intToFBAnalyticsEventParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_StringToFBAnalyticsEventParameter_Statics
	{
		struct FBAnalyticsEventParameter_eventConv_StringToFBAnalyticsEventParameter_Parms
		{
			FString Value;
			UFBAnalyticsEventParameter* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_StringToFBAnalyticsEventParameter_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_StringToFBAnalyticsEventParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAnalyticsEventParameter_eventConv_StringToFBAnalyticsEventParameter_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_StringToFBAnalyticsEventParameter_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_StringToFBAnalyticsEventParameter_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_StringToFBAnalyticsEventParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAnalyticsEventParameter_eventConv_StringToFBAnalyticsEventParameter_Parms, ReturnValue), Z_Construct_UClass_UFBAnalyticsEventParameter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_StringToFBAnalyticsEventParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_StringToFBAnalyticsEventParameter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_StringToFBAnalyticsEventParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_StringToFBAnalyticsEventParameter_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Facebook Goodies | Analytics" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "String to FB Analytics Event Parameter" },
		{ "ModuleRelativePath", "Public/Analytics/FBAnalyticsEventParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_StringToFBAnalyticsEventParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBAnalyticsEventParameter, nullptr, "Conv_StringToFBAnalyticsEventParameter", nullptr, nullptr, sizeof(FBAnalyticsEventParameter_eventConv_StringToFBAnalyticsEventParameter_Parms), Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_StringToFBAnalyticsEventParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_StringToFBAnalyticsEventParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_StringToFBAnalyticsEventParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_StringToFBAnalyticsEventParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_StringToFBAnalyticsEventParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_StringToFBAnalyticsEventParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFBAnalyticsEventParameter_NoRegister()
	{
		return UFBAnalyticsEventParameter::StaticClass();
	}
	struct Z_Construct_UClass_UFBAnalyticsEventParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFBAnalyticsEventParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFBAnalyticsEventParameter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_boolToFBAnalyticsEventParameter, "Conv_boolToFBAnalyticsEventParameter" }, // 2934559491
		{ &Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_floatToFBAnalyticsEventParameter, "Conv_floatToFBAnalyticsEventParameter" }, // 1953510254
		{ &Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_intToFBAnalyticsEventParameter, "Conv_intToFBAnalyticsEventParameter" }, // 3014504140
		{ &Z_Construct_UFunction_UFBAnalyticsEventParameter_Conv_StringToFBAnalyticsEventParameter, "Conv_StringToFBAnalyticsEventParameter" }, // 3646334122
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBAnalyticsEventParameter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Analytics/FBAnalyticsEventParameter.h" },
		{ "ModuleRelativePath", "Public/Analytics/FBAnalyticsEventParameter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFBAnalyticsEventParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFBAnalyticsEventParameter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFBAnalyticsEventParameter_Statics::ClassParams = {
		&UFBAnalyticsEventParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFBAnalyticsEventParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFBAnalyticsEventParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFBAnalyticsEventParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFBAnalyticsEventParameter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFBAnalyticsEventParameter, 3038314104);
	template<> FACEBOOKGOODIES_API UClass* StaticClass<UFBAnalyticsEventParameter>()
	{
		return UFBAnalyticsEventParameter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFBAnalyticsEventParameter(Z_Construct_UClass_UFBAnalyticsEventParameter, &UFBAnalyticsEventParameter::StaticClass, TEXT("/Script/FacebookGoodies"), TEXT("UFBAnalyticsEventParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFBAnalyticsEventParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
