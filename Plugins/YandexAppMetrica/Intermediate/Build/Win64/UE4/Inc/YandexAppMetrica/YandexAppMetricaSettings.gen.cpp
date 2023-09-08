// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YandexAppMetrica/Public/YandexAppMetricaSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYandexAppMetricaSettings() {}
// Cross Module References
	YANDEXAPPMETRICA_API UClass* Z_Construct_UClass_UYandexAppMetricaSettings_NoRegister();
	YANDEXAPPMETRICA_API UClass* Z_Construct_UClass_UYandexAppMetricaSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_YandexAppMetrica();
// End Cross Module References
	void UYandexAppMetricaSettings::StaticRegisterNativesUYandexAppMetricaSettings()
	{
	}
	UClass* Z_Construct_UClass_UYandexAppMetricaSettings_NoRegister()
	{
		return UYandexAppMetricaSettings::StaticClass();
	}
	struct Z_Construct_UClass_UYandexAppMetricaSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YandexAppKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_YandexAppKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YandexAppSessionTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_YandexAppSessionTimeout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYandexAppMetricaSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_YandexAppMetrica,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYandexAppMetricaSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "YandexAppMetricaSettings.h" },
		{ "ModuleRelativePath", "Public/YandexAppMetricaSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYandexAppMetricaSettings_Statics::NewProp_YandexAppKey_MetaData[] = {
		{ "Category", "AppData" },
		{ "Comment", "/** Yandex AppMetrica app Key */" },
		{ "DisplayName", "API Key from Yandex Metrica" },
		{ "ModuleRelativePath", "Public/YandexAppMetricaSettings.h" },
		{ "ToolTip", "Yandex AppMetrica app Key" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UYandexAppMetricaSettings_Statics::NewProp_YandexAppKey = { "YandexAppKey", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYandexAppMetricaSettings, YandexAppKey), METADATA_PARAMS(Z_Construct_UClass_UYandexAppMetricaSettings_Statics::NewProp_YandexAppKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYandexAppMetricaSettings_Statics::NewProp_YandexAppKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYandexAppMetricaSettings_Statics::NewProp_YandexAppSessionTimeout_MetaData[] = {
		{ "Category", "AppData" },
		{ "Comment", "/** Yandex AppMetrica session timeout */" },
		{ "DisplayName", "Yandex AppMetrica Session Timeout. Default is 10 sec" },
		{ "ModuleRelativePath", "Public/YandexAppMetricaSettings.h" },
		{ "ToolTip", "Yandex AppMetrica session timeout" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UYandexAppMetricaSettings_Statics::NewProp_YandexAppSessionTimeout = { "YandexAppSessionTimeout", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYandexAppMetricaSettings, YandexAppSessionTimeout), METADATA_PARAMS(Z_Construct_UClass_UYandexAppMetricaSettings_Statics::NewProp_YandexAppSessionTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYandexAppMetricaSettings_Statics::NewProp_YandexAppSessionTimeout_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYandexAppMetricaSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYandexAppMetricaSettings_Statics::NewProp_YandexAppKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYandexAppMetricaSettings_Statics::NewProp_YandexAppSessionTimeout,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYandexAppMetricaSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYandexAppMetricaSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYandexAppMetricaSettings_Statics::ClassParams = {
		&UYandexAppMetricaSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UYandexAppMetricaSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UYandexAppMetricaSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UYandexAppMetricaSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYandexAppMetricaSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYandexAppMetricaSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYandexAppMetricaSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYandexAppMetricaSettings, 3676232920);
	template<> YANDEXAPPMETRICA_API UClass* StaticClass<UYandexAppMetricaSettings>()
	{
		return UYandexAppMetricaSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYandexAppMetricaSettings(Z_Construct_UClass_UYandexAppMetricaSettings, &UYandexAppMetricaSettings::StaticClass, TEXT("/Script/YandexAppMetrica"), TEXT("UYandexAppMetricaSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYandexAppMetricaSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
