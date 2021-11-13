// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FacebookGoodies/Public/Demo/FBImageLoader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBImageLoader() {}
// Cross Module References
	FACEBOOKGOODIES_API UFunction* Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoadFailed__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FacebookGoodies();
	FACEBOOKGOODIES_API UFunction* Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoaded__DelegateSignature();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBImageLoader_NoRegister();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBImageLoader();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoadFailed__DelegateSignature_Statics
	{
		struct _Script_FacebookGoodies_eventOnImageLoadFailed_Parms
		{
			FString ImageURL;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImageURL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoadFailed__DelegateSignature_Statics::NewProp_ImageURL = { "ImageURL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FacebookGoodies_eventOnImageLoadFailed_Parms, ImageURL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoadFailed__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoadFailed__DelegateSignature_Statics::NewProp_ImageURL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoadFailed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Demo/FBImageLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoadFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FacebookGoodies, nullptr, "OnImageLoadFailed__DelegateSignature", nullptr, nullptr, sizeof(_Script_FacebookGoodies_eventOnImageLoadFailed_Parms), Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoadFailed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoadFailed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoadFailed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoadFailed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoadFailed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoadFailed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoaded__DelegateSignature_Statics
	{
		struct _Script_FacebookGoodies_eventOnImageLoaded_Parms
		{
			FSlateBrush ImageBrush;
			FString ImageURL;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImageBrush;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImageURL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoaded__DelegateSignature_Statics::NewProp_ImageBrush = { "ImageBrush", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FacebookGoodies_eventOnImageLoaded_Parms, ImageBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoaded__DelegateSignature_Statics::NewProp_ImageURL = { "ImageURL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FacebookGoodies_eventOnImageLoaded_Parms, ImageURL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoaded__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoaded__DelegateSignature_Statics::NewProp_ImageBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoaded__DelegateSignature_Statics::NewProp_ImageURL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Demo/FBImageLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FacebookGoodies, nullptr, "OnImageLoaded__DelegateSignature", nullptr, nullptr, sizeof(_Script_FacebookGoodies_eventOnImageLoaded_Parms), Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoaded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoaded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UFBImageLoader::execLoadImage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_SuccessCallback);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ErrorCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadImage(Z_Param_URL,FOnImageLoaded(Z_Param_Out_SuccessCallback),FOnImageLoadFailed(Z_Param_Out_ErrorCallback));
		P_NATIVE_END;
	}
	void UFBImageLoader::StaticRegisterNativesUFBImageLoader()
	{
		UClass* Class = UFBImageLoader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadImage", &UFBImageLoader::execLoadImage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFBImageLoader_LoadImage_Statics
	{
		struct FBImageLoader_eventLoadImage_Parms
		{
			FString URL;
			FScriptDelegate SuccessCallback;
			FScriptDelegate ErrorCallback;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_SuccessCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ErrorCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBImageLoader_LoadImage_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBImageLoader_eventLoadImage_Parms, URL), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBImageLoader_LoadImage_Statics::NewProp_SuccessCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFBImageLoader_LoadImage_Statics::NewProp_SuccessCallback = { "SuccessCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBImageLoader_eventLoadImage_Parms, SuccessCallback), Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFBImageLoader_LoadImage_Statics::NewProp_SuccessCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBImageLoader_LoadImage_Statics::NewProp_SuccessCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBImageLoader_LoadImage_Statics::NewProp_ErrorCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFBImageLoader_LoadImage_Statics::NewProp_ErrorCallback = { "ErrorCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBImageLoader_eventLoadImage_Parms, ErrorCallback), Z_Construct_UDelegateFunction_FacebookGoodies_OnImageLoadFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFBImageLoader_LoadImage_Statics::NewProp_ErrorCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBImageLoader_LoadImage_Statics::NewProp_ErrorCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBImageLoader_LoadImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBImageLoader_LoadImage_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBImageLoader_LoadImage_Statics::NewProp_SuccessCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBImageLoader_LoadImage_Statics::NewProp_ErrorCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBImageLoader_LoadImage_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SuccessCallback, ErrorCallback" },
		{ "Category", "Facebook Goodies | Demo Utils" },
		{ "ModuleRelativePath", "Public/Demo/FBImageLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBImageLoader_LoadImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBImageLoader, nullptr, "LoadImage", nullptr, nullptr, sizeof(FBImageLoader_eventLoadImage_Parms), Z_Construct_UFunction_UFBImageLoader_LoadImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBImageLoader_LoadImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBImageLoader_LoadImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBImageLoader_LoadImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBImageLoader_LoadImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBImageLoader_LoadImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFBImageLoader_NoRegister()
	{
		return UFBImageLoader::StaticClass();
	}
	struct Z_Construct_UClass_UFBImageLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFBImageLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFBImageLoader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFBImageLoader_LoadImage, "LoadImage" }, // 858526666
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBImageLoader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Demo/FBImageLoader.h" },
		{ "ModuleRelativePath", "Public/Demo/FBImageLoader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFBImageLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFBImageLoader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFBImageLoader_Statics::ClassParams = {
		&UFBImageLoader::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFBImageLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFBImageLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFBImageLoader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFBImageLoader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFBImageLoader, 1294647677);
	template<> FACEBOOKGOODIES_API UClass* StaticClass<UFBImageLoader>()
	{
		return UFBImageLoader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFBImageLoader(Z_Construct_UClass_UFBImageLoader, &UFBImageLoader::StaticClass, TEXT("/Script/FacebookGoodies"), TEXT("UFBImageLoader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFBImageLoader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
