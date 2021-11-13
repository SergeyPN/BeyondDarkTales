// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FacebookGoodies/Public/AudienceNetwork/FBAudienceNetworkLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBAudienceNetworkLibrary() {}
// Cross Module References
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBAudienceNetworkLibrary_NoRegister();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBAudienceNetworkLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FacebookGoodies();
// End Cross Module References
	DEFINE_FUNCTION(UFBAudienceNetworkLibrary::execSetAudienceNetworkAdvertiserTrackingEnabled)
	{
		P_GET_UBOOL(Z_Param_IsTrackingEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFBAudienceNetworkLibrary::SetAudienceNetworkAdvertiserTrackingEnabled(Z_Param_IsTrackingEnabled);
		P_NATIVE_END;
	}
	void UFBAudienceNetworkLibrary::StaticRegisterNativesUFBAudienceNetworkLibrary()
	{
		UClass* Class = UFBAudienceNetworkLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAudienceNetworkAdvertiserTrackingEnabled", &UFBAudienceNetworkLibrary::execSetAudienceNetworkAdvertiserTrackingEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFBAudienceNetworkLibrary_SetAudienceNetworkAdvertiserTrackingEnabled_Statics
	{
		struct FBAudienceNetworkLibrary_eventSetAudienceNetworkAdvertiserTrackingEnabled_Parms
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
	void Z_Construct_UFunction_UFBAudienceNetworkLibrary_SetAudienceNetworkAdvertiserTrackingEnabled_Statics::NewProp_IsTrackingEnabled_SetBit(void* Obj)
	{
		((FBAudienceNetworkLibrary_eventSetAudienceNetworkAdvertiserTrackingEnabled_Parms*)Obj)->IsTrackingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFBAudienceNetworkLibrary_SetAudienceNetworkAdvertiserTrackingEnabled_Statics::NewProp_IsTrackingEnabled = { "IsTrackingEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBAudienceNetworkLibrary_eventSetAudienceNetworkAdvertiserTrackingEnabled_Parms), &Z_Construct_UFunction_UFBAudienceNetworkLibrary_SetAudienceNetworkAdvertiserTrackingEnabled_Statics::NewProp_IsTrackingEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBAudienceNetworkLibrary_SetAudienceNetworkAdvertiserTrackingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBAudienceNetworkLibrary_SetAudienceNetworkAdvertiserTrackingEnabled_Statics::NewProp_IsTrackingEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBAudienceNetworkLibrary_SetAudienceNetworkAdvertiserTrackingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Audience Network" },
		{ "Comment", "/**\n     * iOS only! Sets wether application advertiser tracking is enabled or not.\n     * https://developers.facebook.com/docs/audience-network/guides/advertising-tracking-enabled/\n     *\n     * @param IsTrackingEnabled - toggle tracking based upon user's consent.\n     */" },
		{ "ModuleRelativePath", "Public/AudienceNetwork/FBAudienceNetworkLibrary.h" },
		{ "ToolTip", "iOS only! Sets wether application advertiser tracking is enabled or not.\nhttps://developers.facebook.com/docs/audience-network/guides/advertising-tracking-enabled/\n\n@param IsTrackingEnabled - toggle tracking based upon user's consent." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBAudienceNetworkLibrary_SetAudienceNetworkAdvertiserTrackingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBAudienceNetworkLibrary, nullptr, "SetAudienceNetworkAdvertiserTrackingEnabled", nullptr, nullptr, sizeof(FBAudienceNetworkLibrary_eventSetAudienceNetworkAdvertiserTrackingEnabled_Parms), Z_Construct_UFunction_UFBAudienceNetworkLibrary_SetAudienceNetworkAdvertiserTrackingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAudienceNetworkLibrary_SetAudienceNetworkAdvertiserTrackingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBAudienceNetworkLibrary_SetAudienceNetworkAdvertiserTrackingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBAudienceNetworkLibrary_SetAudienceNetworkAdvertiserTrackingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBAudienceNetworkLibrary_SetAudienceNetworkAdvertiserTrackingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBAudienceNetworkLibrary_SetAudienceNetworkAdvertiserTrackingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFBAudienceNetworkLibrary_NoRegister()
	{
		return UFBAudienceNetworkLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFBAudienceNetworkLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFBAudienceNetworkLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFBAudienceNetworkLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFBAudienceNetworkLibrary_SetAudienceNetworkAdvertiserTrackingEnabled, "SetAudienceNetworkAdvertiserTrackingEnabled" }, // 3790595274
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBAudienceNetworkLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AudienceNetwork/FBAudienceNetworkLibrary.h" },
		{ "ModuleRelativePath", "Public/AudienceNetwork/FBAudienceNetworkLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFBAudienceNetworkLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFBAudienceNetworkLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFBAudienceNetworkLibrary_Statics::ClassParams = {
		&UFBAudienceNetworkLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFBAudienceNetworkLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFBAudienceNetworkLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFBAudienceNetworkLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFBAudienceNetworkLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFBAudienceNetworkLibrary, 4018541925);
	template<> FACEBOOKGOODIES_API UClass* StaticClass<UFBAudienceNetworkLibrary>()
	{
		return UFBAudienceNetworkLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFBAudienceNetworkLibrary(Z_Construct_UClass_UFBAudienceNetworkLibrary, &UFBAudienceNetworkLibrary::StaticClass, TEXT("/Script/FacebookGoodies"), TEXT("UFBAudienceNetworkLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFBAudienceNetworkLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
