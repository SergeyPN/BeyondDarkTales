// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FacebookGoodies/Public/Analytics/FBAnalyticsLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBAnalyticsLibrary() {}
// Cross Module References
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBAnalyticsLibrary_NoRegister();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBAnalyticsLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FacebookGoodies();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBAnalyticsEventParameter_NoRegister();
	FACEBOOKGOODIES_API UScriptStruct* Z_Construct_UScriptStruct_FFBUserData();
// End Cross Module References
	DEFINE_FUNCTION(UFBAnalyticsLibrary::execSetAdvertiserTrackingEnabled)
	{
		P_GET_UBOOL(Z_Param_IsTrackingEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFBAnalyticsLibrary::SetAdvertiserTrackingEnabled(Z_Param_IsTrackingEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBAnalyticsLibrary::execGetUserData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFBAnalyticsLibrary::GetUserData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBAnalyticsLibrary::execIsFlushAuto)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFBAnalyticsLibrary::IsFlushAuto();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBAnalyticsLibrary::execGetApplicationId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFBAnalyticsLibrary::GetApplicationId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBAnalyticsLibrary::execGetAnonymousAppDeviceGuid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFBAnalyticsLibrary::GetAnonymousAppDeviceGuid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBAnalyticsLibrary::execFlush)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UFBAnalyticsLibrary::Flush();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBAnalyticsLibrary::execClearUserId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UFBAnalyticsLibrary::ClearUserId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBAnalyticsLibrary::execClearUserData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UFBAnalyticsLibrary::ClearUserData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBAnalyticsLibrary::execSetFlushBehaviour)
	{
		P_GET_UBOOL(Z_Param_Auto);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFBAnalyticsLibrary::SetFlushBehaviour(Z_Param_Auto);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBAnalyticsLibrary::execSetUserData)
	{
		P_GET_STRUCT_REF(FFBUserData,Z_Param_Out_UserData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFBAnalyticsLibrary::SetUserData(Z_Param_Out_UserData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBAnalyticsLibrary::execLogEventWithParametersAndSumValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_TMAP_REF(FString,UFBAnalyticsEventParameter*,Z_Param_Out_Parameters);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ValueToSum);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFBAnalyticsLibrary::LogEventWithParametersAndSumValue(Z_Param_EventName,Z_Param_Out_Parameters,Z_Param_ValueToSum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBAnalyticsLibrary::execLogEventWithParameters)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_TMAP_REF(FString,UFBAnalyticsEventParameter*,Z_Param_Out_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFBAnalyticsLibrary::LogEventWithParameters(Z_Param_EventName,Z_Param_Out_Parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBAnalyticsLibrary::execLogEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFBAnalyticsLibrary::LogEvent(Z_Param_EventName);
		P_NATIVE_END;
	}
	void UFBAnalyticsLibrary::StaticRegisterNativesUFBAnalyticsLibrary()
	{
		UClass* Class = UFBAnalyticsLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearUserData", &UFBAnalyticsLibrary::execClearUserData },
			{ "ClearUserId", &UFBAnalyticsLibrary::execClearUserId },
			{ "Flush", &UFBAnalyticsLibrary::execFlush },
			{ "GetAnonymousAppDeviceGuid", &UFBAnalyticsLibrary::execGetAnonymousAppDeviceGuid },
			{ "GetApplicationId", &UFBAnalyticsLibrary::execGetApplicationId },
			{ "GetUserData", &UFBAnalyticsLibrary::execGetUserData },
			{ "IsFlushAuto", &UFBAnalyticsLibrary::execIsFlushAuto },
			{ "LogEvent", &UFBAnalyticsLibrary::execLogEvent },
			{ "LogEventWithParameters", &UFBAnalyticsLibrary::execLogEventWithParameters },
			{ "LogEventWithParametersAndSumValue", &UFBAnalyticsLibrary::execLogEventWithParametersAndSumValue },
			{ "SetAdvertiserTrackingEnabled", &UFBAnalyticsLibrary::execSetAdvertiserTrackingEnabled },
			{ "SetFlushBehaviour", &UFBAnalyticsLibrary::execSetFlushBehaviour },
			{ "SetUserData", &UFBAnalyticsLibrary::execSetUserData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFBAnalyticsLibrary_ClearUserData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsLibrary_ClearUserData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Analytics" },
		{ "Comment", "/**\n\x09 * Clear the data, associated with the current user.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Analytics/FBAnalyticsLibrary.h" },
		{ "ToolTip", "Clear the data, associated with the current user." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBAnalyticsLibrary_ClearUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBAnalyticsLibrary, nullptr, "ClearUserData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsLibrary_ClearUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_ClearUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBAnalyticsLibrary_ClearUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBAnalyticsLibrary_ClearUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBAnalyticsLibrary_ClearUserId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsLibrary_ClearUserId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Analytics" },
		{ "Comment", "/**\n\x09 * Clear current user ID.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Analytics/FBAnalyticsLibrary.h" },
		{ "ToolTip", "Clear current user ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBAnalyticsLibrary_ClearUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBAnalyticsLibrary, nullptr, "ClearUserId", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsLibrary_ClearUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_ClearUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBAnalyticsLibrary_ClearUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBAnalyticsLibrary_ClearUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBAnalyticsLibrary_Flush_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsLibrary_Flush_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Analytics" },
		{ "Comment", "/**\n\x09 * Flush all the previously logged events. Useful only if the flush behaviour is set to manual.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Analytics/FBAnalyticsLibrary.h" },
		{ "ToolTip", "Flush all the previously logged events. Useful only if the flush behaviour is set to manual." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBAnalyticsLibrary_Flush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBAnalyticsLibrary, nullptr, "Flush", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsLibrary_Flush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_Flush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBAnalyticsLibrary_Flush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBAnalyticsLibrary_Flush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBAnalyticsLibrary_GetAnonymousAppDeviceGuid_Statics
	{
		struct FBAnalyticsLibrary_eventGetAnonymousAppDeviceGuid_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBAnalyticsLibrary_GetAnonymousAppDeviceGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAnalyticsLibrary_eventGetAnonymousAppDeviceGuid_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBAnalyticsLibrary_GetAnonymousAppDeviceGuid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsLibrary_GetAnonymousAppDeviceGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsLibrary_GetAnonymousAppDeviceGuid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Analytics" },
		{ "Comment", "/**\n\x09 * Get the unique identifier for the current application on the device.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Analytics/FBAnalyticsLibrary.h" },
		{ "ToolTip", "Get the unique identifier for the current application on the device." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBAnalyticsLibrary_GetAnonymousAppDeviceGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBAnalyticsLibrary, nullptr, "GetAnonymousAppDeviceGuid", nullptr, nullptr, sizeof(FBAnalyticsLibrary_eventGetAnonymousAppDeviceGuid_Parms), Z_Construct_UFunction_UFBAnalyticsLibrary_GetAnonymousAppDeviceGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_GetAnonymousAppDeviceGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsLibrary_GetAnonymousAppDeviceGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_GetAnonymousAppDeviceGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBAnalyticsLibrary_GetAnonymousAppDeviceGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBAnalyticsLibrary_GetAnonymousAppDeviceGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBAnalyticsLibrary_GetApplicationId_Statics
	{
		struct FBAnalyticsLibrary_eventGetApplicationId_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBAnalyticsLibrary_GetApplicationId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAnalyticsLibrary_eventGetApplicationId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBAnalyticsLibrary_GetApplicationId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsLibrary_GetApplicationId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsLibrary_GetApplicationId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Analytics" },
		{ "Comment", "/**\n\x09 * Get the Facebook App ID used by the SDK.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Analytics/FBAnalyticsLibrary.h" },
		{ "ToolTip", "Get the Facebook App ID used by the SDK." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBAnalyticsLibrary_GetApplicationId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBAnalyticsLibrary, nullptr, "GetApplicationId", nullptr, nullptr, sizeof(FBAnalyticsLibrary_eventGetApplicationId_Parms), Z_Construct_UFunction_UFBAnalyticsLibrary_GetApplicationId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_GetApplicationId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsLibrary_GetApplicationId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_GetApplicationId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBAnalyticsLibrary_GetApplicationId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBAnalyticsLibrary_GetApplicationId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBAnalyticsLibrary_GetUserData_Statics
	{
		struct FBAnalyticsLibrary_eventGetUserData_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBAnalyticsLibrary_GetUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAnalyticsLibrary_eventGetUserData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBAnalyticsLibrary_GetUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsLibrary_GetUserData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsLibrary_GetUserData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Analytics" },
		{ "Comment", "/**\n\x09 * Get the data, associated with the current user, in a string representation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Analytics/FBAnalyticsLibrary.h" },
		{ "ToolTip", "Get the data, associated with the current user, in a string representation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBAnalyticsLibrary_GetUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBAnalyticsLibrary, nullptr, "GetUserData", nullptr, nullptr, sizeof(FBAnalyticsLibrary_eventGetUserData_Parms), Z_Construct_UFunction_UFBAnalyticsLibrary_GetUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_GetUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsLibrary_GetUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_GetUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBAnalyticsLibrary_GetUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBAnalyticsLibrary_GetUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBAnalyticsLibrary_IsFlushAuto_Statics
	{
		struct FBAnalyticsLibrary_eventIsFlushAuto_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFBAnalyticsLibrary_IsFlushAuto_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FBAnalyticsLibrary_eventIsFlushAuto_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFBAnalyticsLibrary_IsFlushAuto_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBAnalyticsLibrary_eventIsFlushAuto_Parms), &Z_Construct_UFunction_UFBAnalyticsLibrary_IsFlushAuto_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBAnalyticsLibrary_IsFlushAuto_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsLibrary_IsFlushAuto_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsLibrary_IsFlushAuto_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Analytics" },
		{ "Comment", "/**\n\x09 * Get whether the event flush behaviour is automatic.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Analytics/FBAnalyticsLibrary.h" },
		{ "ToolTip", "Get whether the event flush behaviour is automatic." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBAnalyticsLibrary_IsFlushAuto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBAnalyticsLibrary, nullptr, "IsFlushAuto", nullptr, nullptr, sizeof(FBAnalyticsLibrary_eventIsFlushAuto_Parms), Z_Construct_UFunction_UFBAnalyticsLibrary_IsFlushAuto_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_IsFlushAuto_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsLibrary_IsFlushAuto_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_IsFlushAuto_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBAnalyticsLibrary_IsFlushAuto()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBAnalyticsLibrary_IsFlushAuto_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBAnalyticsLibrary_LogEvent_Statics
	{
		struct FBAnalyticsLibrary_eventLogEvent_Parms
		{
			FString EventName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsLibrary_LogEvent_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBAnalyticsLibrary_LogEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAnalyticsLibrary_eventLogEvent_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsLibrary_LogEvent_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_LogEvent_Statics::NewProp_EventName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBAnalyticsLibrary_LogEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsLibrary_LogEvent_Statics::NewProp_EventName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsLibrary_LogEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Analytics" },
		{ "Comment", "/**\n\x09 * Log an event.\n\x09 *\n\x09 * @param EventName - name of the event.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Analytics/FBAnalyticsLibrary.h" },
		{ "ToolTip", "Log an event.\n\n@param EventName - name of the event." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBAnalyticsLibrary_LogEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBAnalyticsLibrary, nullptr, "LogEvent", nullptr, nullptr, sizeof(FBAnalyticsLibrary_eventLogEvent_Parms), Z_Construct_UFunction_UFBAnalyticsLibrary_LogEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_LogEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsLibrary_LogEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_LogEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBAnalyticsLibrary_LogEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBAnalyticsLibrary_LogEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters_Statics
	{
		struct FBAnalyticsLibrary_eventLogEventWithParameters_Parms
		{
			FString EventName;
			TMap<FString,UFBAnalyticsEventParameter*> Parameters;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parameters_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Parameters_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Parameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAnalyticsLibrary_eventLogEventWithParameters_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters_Statics::NewProp_EventName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters_Statics::NewProp_Parameters_ValueProp = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UFBAnalyticsEventParameter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters_Statics::NewProp_Parameters_Key_KeyProp = { "Parameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAnalyticsLibrary_eventLogEventWithParameters_Parms, Parameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters_Statics::NewProp_Parameters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters_Statics::NewProp_Parameters_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters_Statics::NewProp_Parameters_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Analytics" },
		{ "Comment", "/**\n\x09 * Log an event.\n\x09 *\n\x09 * @param EventName - name of the event.\n\x09 * @param Parameters - a set of key/value pairs in the parameters dictionary.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Analytics/FBAnalyticsLibrary.h" },
		{ "ToolTip", "Log an event.\n\n@param EventName - name of the event.\n@param Parameters - a set of key/value pairs in the parameters dictionary." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBAnalyticsLibrary, nullptr, "LogEventWithParameters", nullptr, nullptr, sizeof(FBAnalyticsLibrary_eventLogEventWithParameters_Parms), Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics
	{
		struct FBAnalyticsLibrary_eventLogEventWithParametersAndSumValue_Parms
		{
			FString EventName;
			TMap<FString,UFBAnalyticsEventParameter*> Parameters;
			float ValueToSum;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parameters_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Parameters_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Parameters;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ValueToSum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAnalyticsLibrary_eventLogEventWithParametersAndSumValue_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::NewProp_EventName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::NewProp_Parameters_ValueProp = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UFBAnalyticsEventParameter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::NewProp_Parameters_Key_KeyProp = { "Parameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAnalyticsLibrary_eventLogEventWithParametersAndSumValue_Parms, Parameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::NewProp_Parameters_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::NewProp_ValueToSum = { "ValueToSum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAnalyticsLibrary_eventLogEventWithParametersAndSumValue_Parms, ValueToSum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::NewProp_Parameters_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::NewProp_Parameters_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::NewProp_ValueToSum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Analytics" },
		{ "Comment", "/**\n\x09 * Log an event.\n\x09 *\n\x09 * @param EventName - name of the event.\n\x09 * @param Parameters - a set of key/value pairs in the parameters dictionary.\n\x09 * @param ValueToSum - a numeric value to be aggregated with other events of this name.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Analytics/FBAnalyticsLibrary.h" },
		{ "ToolTip", "Log an event.\n\n@param EventName - name of the event.\n@param Parameters - a set of key/value pairs in the parameters dictionary.\n@param ValueToSum - a numeric value to be aggregated with other events of this name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBAnalyticsLibrary, nullptr, "LogEventWithParametersAndSumValue", nullptr, nullptr, sizeof(FBAnalyticsLibrary_eventLogEventWithParametersAndSumValue_Parms), Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBAnalyticsLibrary_SetAdvertiserTrackingEnabled_Statics
	{
		struct FBAnalyticsLibrary_eventSetAdvertiserTrackingEnabled_Parms
		{
			bool IsTrackingEnabled;
		};
		static void NewProp_IsTrackingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTrackingEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFBAnalyticsLibrary_SetAdvertiserTrackingEnabled_Statics::NewProp_IsTrackingEnabled_SetBit(void* Obj)
	{
		((FBAnalyticsLibrary_eventSetAdvertiserTrackingEnabled_Parms*)Obj)->IsTrackingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFBAnalyticsLibrary_SetAdvertiserTrackingEnabled_Statics::NewProp_IsTrackingEnabled = { "IsTrackingEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBAnalyticsLibrary_eventSetAdvertiserTrackingEnabled_Parms), &Z_Construct_UFunction_UFBAnalyticsLibrary_SetAdvertiserTrackingEnabled_Statics::NewProp_IsTrackingEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBAnalyticsLibrary_SetAdvertiserTrackingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsLibrary_SetAdvertiserTrackingEnabled_Statics::NewProp_IsTrackingEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsLibrary_SetAdvertiserTrackingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Analytics" },
		{ "Comment", "/**\n\x09 * iOS only! Sets wether application advertiser tracking is enabled or not.\n\x09 *\n\x09 * @param IsTrackingEnabled - toggle tracking based upon user's consent.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Analytics/FBAnalyticsLibrary.h" },
		{ "ToolTip", "iOS only! Sets wether application advertiser tracking is enabled or not.\n\n@param IsTrackingEnabled - toggle tracking based upon user's consent." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBAnalyticsLibrary_SetAdvertiserTrackingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBAnalyticsLibrary, nullptr, "SetAdvertiserTrackingEnabled", nullptr, nullptr, sizeof(FBAnalyticsLibrary_eventSetAdvertiserTrackingEnabled_Parms), Z_Construct_UFunction_UFBAnalyticsLibrary_SetAdvertiserTrackingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_SetAdvertiserTrackingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsLibrary_SetAdvertiserTrackingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_SetAdvertiserTrackingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBAnalyticsLibrary_SetAdvertiserTrackingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBAnalyticsLibrary_SetAdvertiserTrackingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBAnalyticsLibrary_SetFlushBehaviour_Statics
	{
		struct FBAnalyticsLibrary_eventSetFlushBehaviour_Parms
		{
			bool Auto;
		};
		static void NewProp_Auto_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Auto;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFBAnalyticsLibrary_SetFlushBehaviour_Statics::NewProp_Auto_SetBit(void* Obj)
	{
		((FBAnalyticsLibrary_eventSetFlushBehaviour_Parms*)Obj)->Auto = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFBAnalyticsLibrary_SetFlushBehaviour_Statics::NewProp_Auto = { "Auto", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBAnalyticsLibrary_eventSetFlushBehaviour_Parms), &Z_Construct_UFunction_UFBAnalyticsLibrary_SetFlushBehaviour_Statics::NewProp_Auto_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBAnalyticsLibrary_SetFlushBehaviour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsLibrary_SetFlushBehaviour_Statics::NewProp_Auto,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsLibrary_SetFlushBehaviour_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Analytics" },
		{ "Comment", "/**\n\x09 * Set the event flush behaviour.\n\x09 *\n\x09 * @param Auto - true for automatic, false for manual..\n\x09 */" },
		{ "ModuleRelativePath", "Public/Analytics/FBAnalyticsLibrary.h" },
		{ "ToolTip", "Set the event flush behaviour.\n\n@param Auto - true for automatic, false for manual.." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBAnalyticsLibrary_SetFlushBehaviour_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBAnalyticsLibrary, nullptr, "SetFlushBehaviour", nullptr, nullptr, sizeof(FBAnalyticsLibrary_eventSetFlushBehaviour_Parms), Z_Construct_UFunction_UFBAnalyticsLibrary_SetFlushBehaviour_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_SetFlushBehaviour_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsLibrary_SetFlushBehaviour_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_SetFlushBehaviour_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBAnalyticsLibrary_SetFlushBehaviour()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBAnalyticsLibrary_SetFlushBehaviour_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBAnalyticsLibrary_SetUserData_Statics
	{
		struct FBAnalyticsLibrary_eventSetUserData_Parms
		{
			FFBUserData UserData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsLibrary_SetUserData_Statics::NewProp_UserData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFBAnalyticsLibrary_SetUserData_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAnalyticsLibrary_eventSetUserData_Parms, UserData), Z_Construct_UScriptStruct_FFBUserData, METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsLibrary_SetUserData_Statics::NewProp_UserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_SetUserData_Statics::NewProp_UserData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBAnalyticsLibrary_SetUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAnalyticsLibrary_SetUserData_Statics::NewProp_UserData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAnalyticsLibrary_SetUserData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Analytics" },
		{ "Comment", "/**\n\x09 * Set the data, associated with the current user.\n\x09 *\n\x09 * @param UserData - user data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Analytics/FBAnalyticsLibrary.h" },
		{ "ToolTip", "Set the data, associated with the current user.\n\n@param UserData - user data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBAnalyticsLibrary_SetUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBAnalyticsLibrary, nullptr, "SetUserData", nullptr, nullptr, sizeof(FBAnalyticsLibrary_eventSetUserData_Parms), Z_Construct_UFunction_UFBAnalyticsLibrary_SetUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_SetUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBAnalyticsLibrary_SetUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAnalyticsLibrary_SetUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBAnalyticsLibrary_SetUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBAnalyticsLibrary_SetUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFBAnalyticsLibrary_NoRegister()
	{
		return UFBAnalyticsLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFBAnalyticsLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFBAnalyticsLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFBAnalyticsLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFBAnalyticsLibrary_ClearUserData, "ClearUserData" }, // 214609008
		{ &Z_Construct_UFunction_UFBAnalyticsLibrary_ClearUserId, "ClearUserId" }, // 2846391525
		{ &Z_Construct_UFunction_UFBAnalyticsLibrary_Flush, "Flush" }, // 142118978
		{ &Z_Construct_UFunction_UFBAnalyticsLibrary_GetAnonymousAppDeviceGuid, "GetAnonymousAppDeviceGuid" }, // 4294106219
		{ &Z_Construct_UFunction_UFBAnalyticsLibrary_GetApplicationId, "GetApplicationId" }, // 1051803470
		{ &Z_Construct_UFunction_UFBAnalyticsLibrary_GetUserData, "GetUserData" }, // 2419368882
		{ &Z_Construct_UFunction_UFBAnalyticsLibrary_IsFlushAuto, "IsFlushAuto" }, // 1816886267
		{ &Z_Construct_UFunction_UFBAnalyticsLibrary_LogEvent, "LogEvent" }, // 2438505299
		{ &Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParameters, "LogEventWithParameters" }, // 1703593881
		{ &Z_Construct_UFunction_UFBAnalyticsLibrary_LogEventWithParametersAndSumValue, "LogEventWithParametersAndSumValue" }, // 2856446962
		{ &Z_Construct_UFunction_UFBAnalyticsLibrary_SetAdvertiserTrackingEnabled, "SetAdvertiserTrackingEnabled" }, // 1110063992
		{ &Z_Construct_UFunction_UFBAnalyticsLibrary_SetFlushBehaviour, "SetFlushBehaviour" }, // 1027324143
		{ &Z_Construct_UFunction_UFBAnalyticsLibrary_SetUserData, "SetUserData" }, // 4157330280
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBAnalyticsLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Class responsible for client-side event logging for specialized application analytics available\n * through Facebook App Insights and for use with Facebook Ads conversion tracking and optimization.\n */" },
		{ "IncludePath", "Analytics/FBAnalyticsLibrary.h" },
		{ "ModuleRelativePath", "Public/Analytics/FBAnalyticsLibrary.h" },
		{ "ToolTip", "Class responsible for client-side event logging for specialized application analytics available\nthrough Facebook App Insights and for use with Facebook Ads conversion tracking and optimization." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFBAnalyticsLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFBAnalyticsLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFBAnalyticsLibrary_Statics::ClassParams = {
		&UFBAnalyticsLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFBAnalyticsLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFBAnalyticsLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFBAnalyticsLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFBAnalyticsLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFBAnalyticsLibrary, 3181977216);
	template<> FACEBOOKGOODIES_API UClass* StaticClass<UFBAnalyticsLibrary>()
	{
		return UFBAnalyticsLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFBAnalyticsLibrary(Z_Construct_UClass_UFBAnalyticsLibrary, &UFBAnalyticsLibrary::StaticClass, TEXT("/Script/FacebookGoodies"), TEXT("UFBAnalyticsLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFBAnalyticsLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
