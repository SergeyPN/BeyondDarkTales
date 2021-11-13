// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FacebookGoodies/Public/Utils/FacebookGoodiesPluginUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacebookGoodiesPluginUtils() {}
// Cross Module References
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFacebookGoodiesPluginUtils_NoRegister();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFacebookGoodiesPluginUtils();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FacebookGoodies();
// End Cross Module References
	DEFINE_FUNCTION(UFacebookGoodiesPluginUtils::execGetPluginVersionName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PluginName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFacebookGoodiesPluginUtils::GetPluginVersionName(Z_Param_PluginName);
		P_NATIVE_END;
	}
	void UFacebookGoodiesPluginUtils::StaticRegisterNativesUFacebookGoodiesPluginUtils()
	{
		UClass* Class = UFacebookGoodiesPluginUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPluginVersionName", &UFacebookGoodiesPluginUtils::execGetPluginVersionName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFacebookGoodiesPluginUtils_GetPluginVersionName_Statics
	{
		struct FacebookGoodiesPluginUtils_eventGetPluginVersionName_Parms
		{
			FString PluginName;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PluginName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFacebookGoodiesPluginUtils_GetPluginVersionName_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FacebookGoodiesPluginUtils_eventGetPluginVersionName_Parms, PluginName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFacebookGoodiesPluginUtils_GetPluginVersionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FacebookGoodiesPluginUtils_eventGetPluginVersionName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFacebookGoodiesPluginUtils_GetPluginVersionName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFacebookGoodiesPluginUtils_GetPluginVersionName_Statics::NewProp_PluginName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFacebookGoodiesPluginUtils_GetPluginVersionName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFacebookGoodiesPluginUtils_GetPluginVersionName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Plugin Utils" },
		{ "Comment", "/**\n\x09* Get plugin version name\n\x09*\n\x09* @param PluginName - name of the plugin to get info from\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/FacebookGoodiesPluginUtils.h" },
		{ "ToolTip", "Get plugin version name\n\n@param PluginName - name of the plugin to get info from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFacebookGoodiesPluginUtils_GetPluginVersionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFacebookGoodiesPluginUtils, nullptr, "GetPluginVersionName", nullptr, nullptr, sizeof(FacebookGoodiesPluginUtils_eventGetPluginVersionName_Parms), Z_Construct_UFunction_UFacebookGoodiesPluginUtils_GetPluginVersionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFacebookGoodiesPluginUtils_GetPluginVersionName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFacebookGoodiesPluginUtils_GetPluginVersionName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFacebookGoodiesPluginUtils_GetPluginVersionName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFacebookGoodiesPluginUtils_GetPluginVersionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFacebookGoodiesPluginUtils_GetPluginVersionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFacebookGoodiesPluginUtils_NoRegister()
	{
		return UFacebookGoodiesPluginUtils::StaticClass();
	}
	struct Z_Construct_UClass_UFacebookGoodiesPluginUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFacebookGoodiesPluginUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFacebookGoodiesPluginUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFacebookGoodiesPluginUtils_GetPluginVersionName, "GetPluginVersionName" }, // 1540605620
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFacebookGoodiesPluginUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/FacebookGoodiesPluginUtils.h" },
		{ "ModuleRelativePath", "Public/Utils/FacebookGoodiesPluginUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFacebookGoodiesPluginUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFacebookGoodiesPluginUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFacebookGoodiesPluginUtils_Statics::ClassParams = {
		&UFacebookGoodiesPluginUtils::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFacebookGoodiesPluginUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFacebookGoodiesPluginUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFacebookGoodiesPluginUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFacebookGoodiesPluginUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFacebookGoodiesPluginUtils, 263458532);
	template<> FACEBOOKGOODIES_API UClass* StaticClass<UFacebookGoodiesPluginUtils>()
	{
		return UFacebookGoodiesPluginUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFacebookGoodiesPluginUtils(Z_Construct_UClass_UFacebookGoodiesPluginUtils, &UFacebookGoodiesPluginUtils::StaticClass, TEXT("/Script/FacebookGoodies"), TEXT("UFacebookGoodiesPluginUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFacebookGoodiesPluginUtils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
