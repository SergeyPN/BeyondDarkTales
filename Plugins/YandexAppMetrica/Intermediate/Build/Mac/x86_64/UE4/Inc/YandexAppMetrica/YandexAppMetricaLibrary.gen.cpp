// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YandexAppMetrica/Public/YandexAppMetricaLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYandexAppMetricaLibrary() {}
// Cross Module References
	YANDEXAPPMETRICA_API UClass* Z_Construct_UClass_UYandexAppMetricaLibrary_NoRegister();
	YANDEXAPPMETRICA_API UClass* Z_Construct_UClass_UYandexAppMetricaLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_YandexAppMetrica();
// End Cross Module References
	DEFINE_FUNCTION(UYandexAppMetricaLibrary::execYandexAppMetrica_InitSDK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UYandexAppMetricaLibrary::YandexAppMetrica_InitSDK();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYandexAppMetricaLibrary::execYandexAppMetrica_SendProfileAttributes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_pUserProfileID);
		P_GET_PROPERTY(FStrProperty,Z_Param_pName);
		P_GET_PROPERTY(FIntProperty,Z_Param_pGender);
		P_GET_PROPERTY(FIntProperty,Z_Param_pAge);
		P_GET_UBOOL(Z_Param_pNotifications);
		P_FINISH;
		P_NATIVE_BEGIN;
		UYandexAppMetricaLibrary::YandexAppMetrica_SendProfileAttributes(Z_Param_pUserProfileID,Z_Param_pName,Z_Param_pGender,Z_Param_pAge,Z_Param_pNotifications);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYandexAppMetricaLibrary::execYandexAppMetrica_SendEventsBuffer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UYandexAppMetricaLibrary::YandexAppMetrica_SendEventsBuffer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYandexAppMetricaLibrary::execYandexAppMetrica_ReportEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RepEventName);
		P_GET_PROPERTY(FStrProperty,Z_Param_RepParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		UYandexAppMetricaLibrary::YandexAppMetrica_ReportEvent(Z_Param_RepEventName,Z_Param_RepParams);
		P_NATIVE_END;
	}
	void UYandexAppMetricaLibrary::StaticRegisterNativesUYandexAppMetricaLibrary()
	{
		UClass* Class = UYandexAppMetricaLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "YandexAppMetrica_InitSDK", &UYandexAppMetricaLibrary::execYandexAppMetrica_InitSDK },
			{ "YandexAppMetrica_ReportEvent", &UYandexAppMetricaLibrary::execYandexAppMetrica_ReportEvent },
			{ "YandexAppMetrica_SendEventsBuffer", &UYandexAppMetricaLibrary::execYandexAppMetrica_SendEventsBuffer },
			{ "YandexAppMetrica_SendProfileAttributes", &UYandexAppMetricaLibrary::execYandexAppMetrica_SendProfileAttributes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_InitSDK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_InitSDK_Statics::Function_MetaDataParams[] = {
		{ "Category", "YandexAppMetrica" },
		{ "Comment", "/** Init Yandex Metrica (works only for iOS builds, android will init automatically) */" },
		{ "ModuleRelativePath", "Public/YandexAppMetricaLibrary.h" },
		{ "ToolTip", "Init Yandex Metrica (works only for iOS builds, android will init automatically)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_InitSDK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYandexAppMetricaLibrary, nullptr, "YandexAppMetrica_InitSDK", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_InitSDK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_InitSDK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_InitSDK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_InitSDK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_ReportEvent_Statics
	{
		struct YandexAppMetricaLibrary_eventYandexAppMetrica_ReportEvent_Parms
		{
			FString RepEventName;
			FString RepParams;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepEventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RepEventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RepParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_ReportEvent_Statics::NewProp_RepEventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_ReportEvent_Statics::NewProp_RepEventName = { "RepEventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YandexAppMetricaLibrary_eventYandexAppMetrica_ReportEvent_Parms, RepEventName), METADATA_PARAMS(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_ReportEvent_Statics::NewProp_RepEventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_ReportEvent_Statics::NewProp_RepEventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_ReportEvent_Statics::NewProp_RepParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_ReportEvent_Statics::NewProp_RepParams = { "RepParams", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YandexAppMetricaLibrary_eventYandexAppMetrica_ReportEvent_Parms, RepParams), METADATA_PARAMS(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_ReportEvent_Statics::NewProp_RepParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_ReportEvent_Statics::NewProp_RepParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_ReportEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_ReportEvent_Statics::NewProp_RepEventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_ReportEvent_Statics::NewProp_RepParams,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_ReportEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "YandexAppMetrica" },
		{ "Comment", "/** Report user event with params (optional JSON string) */" },
		{ "ModuleRelativePath", "Public/YandexAppMetricaLibrary.h" },
		{ "ToolTip", "Report user event with params (optional JSON string)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_ReportEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYandexAppMetricaLibrary, nullptr, "YandexAppMetrica_ReportEvent", nullptr, nullptr, sizeof(YandexAppMetricaLibrary_eventYandexAppMetrica_ReportEvent_Parms), Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_ReportEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_ReportEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_ReportEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_ReportEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_ReportEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_ReportEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendEventsBuffer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendEventsBuffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "YandexAppMetrica" },
		{ "Comment", "/** Send events immediately (for example when user forced to exit app) */" },
		{ "ModuleRelativePath", "Public/YandexAppMetricaLibrary.h" },
		{ "ToolTip", "Send events immediately (for example when user forced to exit app)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendEventsBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYandexAppMetricaLibrary, nullptr, "YandexAppMetrica_SendEventsBuffer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendEventsBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendEventsBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendEventsBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendEventsBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics
	{
		struct YandexAppMetricaLibrary_eventYandexAppMetrica_SendProfileAttributes_Parms
		{
			FString pUserProfileID;
			FString pName;
			int32 pGender;
			int32 pAge;
			bool pNotifications;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pUserProfileID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pUserProfileID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pGender_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_pGender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_pAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pNotifications_MetaData[];
#endif
		static void NewProp_pNotifications_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_pNotifications;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pUserProfileID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pUserProfileID = { "pUserProfileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YandexAppMetricaLibrary_eventYandexAppMetrica_SendProfileAttributes_Parms, pUserProfileID), METADATA_PARAMS(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pUserProfileID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pUserProfileID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pName = { "pName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YandexAppMetricaLibrary_eventYandexAppMetrica_SendProfileAttributes_Parms, pName), METADATA_PARAMS(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pGender_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pGender = { "pGender", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YandexAppMetricaLibrary_eventYandexAppMetrica_SendProfileAttributes_Parms, pGender), METADATA_PARAMS(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pGender_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pGender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pAge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pAge = { "pAge", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YandexAppMetricaLibrary_eventYandexAppMetrica_SendProfileAttributes_Parms, pAge), METADATA_PARAMS(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pNotifications_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pNotifications_SetBit(void* Obj)
	{
		((YandexAppMetricaLibrary_eventYandexAppMetrica_SendProfileAttributes_Parms*)Obj)->pNotifications = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pNotifications = { "pNotifications", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YandexAppMetricaLibrary_eventYandexAppMetrica_SendProfileAttributes_Parms), &Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pNotifications_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pNotifications_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pNotifications_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pUserProfileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pGender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::NewProp_pNotifications,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "YandexAppMetrica" },
		{ "Comment", "/** Send Profile Attributes (user id, user name, gender (0-male,1-female,2-other), age, is notificaions enabled) */" },
		{ "ModuleRelativePath", "Public/YandexAppMetricaLibrary.h" },
		{ "ToolTip", "Send Profile Attributes (user id, user name, gender (0-male,1-female,2-other), age, is notificaions enabled)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYandexAppMetricaLibrary, nullptr, "YandexAppMetrica_SendProfileAttributes", nullptr, nullptr, sizeof(YandexAppMetricaLibrary_eventYandexAppMetrica_SendProfileAttributes_Parms), Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYandexAppMetricaLibrary_NoRegister()
	{
		return UYandexAppMetricaLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UYandexAppMetricaLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYandexAppMetricaLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_YandexAppMetrica,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYandexAppMetricaLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_InitSDK, "YandexAppMetrica_InitSDK" }, // 2149245439
		{ &Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_ReportEvent, "YandexAppMetrica_ReportEvent" }, // 3939030993
		{ &Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendEventsBuffer, "YandexAppMetrica_SendEventsBuffer" }, // 141247982
		{ &Z_Construct_UFunction_UYandexAppMetricaLibrary_YandexAppMetrica_SendProfileAttributes, "YandexAppMetrica_SendProfileAttributes" }, // 4028722373
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYandexAppMetricaLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "YandexAppMetricaLibrary.h" },
		{ "ModuleRelativePath", "Public/YandexAppMetricaLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYandexAppMetricaLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYandexAppMetricaLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYandexAppMetricaLibrary_Statics::ClassParams = {
		&UYandexAppMetricaLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYandexAppMetricaLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYandexAppMetricaLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYandexAppMetricaLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYandexAppMetricaLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYandexAppMetricaLibrary, 2069283290);
	template<> YANDEXAPPMETRICA_API UClass* StaticClass<UYandexAppMetricaLibrary>()
	{
		return UYandexAppMetricaLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYandexAppMetricaLibrary(Z_Construct_UClass_UYandexAppMetricaLibrary, &UYandexAppMetricaLibrary::StaticClass, TEXT("/Script/YandexAppMetrica"), TEXT("UYandexAppMetricaLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYandexAppMetricaLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
