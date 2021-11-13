// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FacebookGoodies/Public/FacebookGoodiesSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacebookGoodiesSettings() {}
// Cross Module References
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFacebookGoodiesSettings_NoRegister();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFacebookGoodiesSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FacebookGoodies();
// End Cross Module References
	void UFacebookGoodiesSettings::StaticRegisterNativesUFacebookGoodiesSettings()
	{
	}
	UClass* Z_Construct_UClass_UFacebookGoodiesSettings_NoRegister()
	{
		return UFacebookGoodiesSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFacebookGoodiesSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FacebookAppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FacebookAppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FacebookClientToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FacebookClientToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAudienceNetwork_MetaData[];
#endif
		static void NewProp_bEnableAudienceNetwork_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAudienceNetwork;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoLogEvents_MetaData[];
#endif
		static void NewProp_bAutoLogEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoLogEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAdvertiserIDCollection_MetaData[];
#endif
		static void NewProp_bEnableAdvertiserIDCollection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAdvertiserIDCollection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFacebookGoodiesSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFacebookGoodiesSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FacebookGoodiesSettings.h" },
		{ "ModuleRelativePath", "Public/FacebookGoodiesSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_FacebookAppID_MetaData[] = {
		{ "Category", "Facebook Goodies Settings|General" },
		{ "ModuleRelativePath", "Public/FacebookGoodiesSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_FacebookAppID = { "FacebookAppID", nullptr, (EPropertyFlags)0x0010000000004015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFacebookGoodiesSettings, FacebookAppID), METADATA_PARAMS(Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_FacebookAppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_FacebookAppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_FacebookClientToken_MetaData[] = {
		{ "Category", "Facebook Goodies Settings|General" },
		{ "DisplayName", "Facebook Client Token (Needed for graph API calls)" },
		{ "ModuleRelativePath", "Public/FacebookGoodiesSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_FacebookClientToken = { "FacebookClientToken", nullptr, (EPropertyFlags)0x0010000000004015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFacebookGoodiesSettings, FacebookClientToken), METADATA_PARAMS(Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_FacebookClientToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_FacebookClientToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_bEnableAudienceNetwork_MetaData[] = {
		{ "Category", "Facebook Goodies Settings|iOS" },
		{ "DisplayName", "Add FBAudienceNetwork SDK" },
		{ "ModuleRelativePath", "Public/FacebookGoodiesSettings.h" },
	};
#endif
	void Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_bEnableAudienceNetwork_SetBit(void* Obj)
	{
		((UFacebookGoodiesSettings*)Obj)->bEnableAudienceNetwork = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_bEnableAudienceNetwork = { "bEnableAudienceNetwork", nullptr, (EPropertyFlags)0x0010000000004015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFacebookGoodiesSettings), &Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_bEnableAudienceNetwork_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_bEnableAudienceNetwork_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_bEnableAudienceNetwork_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_bAutoLogEvents_MetaData[] = {
		{ "Category", "Facebook Goodies Settings|iOS" },
		{ "DisplayName", "Automatically log events" },
		{ "ModuleRelativePath", "Public/FacebookGoodiesSettings.h" },
	};
#endif
	void Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_bAutoLogEvents_SetBit(void* Obj)
	{
		((UFacebookGoodiesSettings*)Obj)->bAutoLogEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_bAutoLogEvents = { "bAutoLogEvents", nullptr, (EPropertyFlags)0x0010000000004015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFacebookGoodiesSettings), &Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_bAutoLogEvents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_bAutoLogEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_bAutoLogEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_bEnableAdvertiserIDCollection_MetaData[] = {
		{ "Category", "Facebook Goodies Settings|iOS" },
		{ "DisplayName", "Enable Advertiser ID Collection" },
		{ "ModuleRelativePath", "Public/FacebookGoodiesSettings.h" },
	};
#endif
	void Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_bEnableAdvertiserIDCollection_SetBit(void* Obj)
	{
		((UFacebookGoodiesSettings*)Obj)->bEnableAdvertiserIDCollection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_bEnableAdvertiserIDCollection = { "bEnableAdvertiserIDCollection", nullptr, (EPropertyFlags)0x0010000000004015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFacebookGoodiesSettings), &Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_bEnableAdvertiserIDCollection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_bEnableAdvertiserIDCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_bEnableAdvertiserIDCollection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFacebookGoodiesSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_FacebookAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_FacebookClientToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_bEnableAudienceNetwork,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_bAutoLogEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFacebookGoodiesSettings_Statics::NewProp_bEnableAdvertiserIDCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFacebookGoodiesSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFacebookGoodiesSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFacebookGoodiesSettings_Statics::ClassParams = {
		&UFacebookGoodiesSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFacebookGoodiesSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFacebookGoodiesSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UFacebookGoodiesSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFacebookGoodiesSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFacebookGoodiesSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFacebookGoodiesSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFacebookGoodiesSettings, 537494762);
	template<> FACEBOOKGOODIES_API UClass* StaticClass<UFacebookGoodiesSettings>()
	{
		return UFacebookGoodiesSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFacebookGoodiesSettings(Z_Construct_UClass_UFacebookGoodiesSettings, &UFacebookGoodiesSettings::StaticClass, TEXT("/Script/FacebookGoodies"), TEXT("UFacebookGoodiesSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFacebookGoodiesSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
