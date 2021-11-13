// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FacebookGoodies/Private/Login/FBGraphLibCallback.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBGraphLibCallback() {}
// Cross Module References
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBGraphLibCallback_NoRegister();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBGraphLibCallback();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FacebookGoodies();
	FACEBOOKGOODIES_API UFunction* Z_Construct_UDelegateFunction_FacebookGoodies_OnGetUserPictureURLSuccess__DelegateSignature();
// End Cross Module References
	void UFBGraphLibCallback::StaticRegisterNativesUFBGraphLibCallback()
	{
	}
	UClass* Z_Construct_UClass_UFBGraphLibCallback_NoRegister()
	{
		return UFBGraphLibCallback::StaticClass();
	}
	struct Z_Construct_UClass_UFBGraphLibCallback_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGetUserPictureURLSuccessDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnGetUserPictureURLSuccessDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFBGraphLibCallback_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBGraphLibCallback_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Login/FBGraphLibCallback.h" },
		{ "ModuleRelativePath", "Private/Login/FBGraphLibCallback.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBGraphLibCallback_Statics::NewProp_OnGetUserPictureURLSuccessDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/Login/FBGraphLibCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UFBGraphLibCallback_Statics::NewProp_OnGetUserPictureURLSuccessDelegate = { "OnGetUserPictureURLSuccessDelegate", nullptr, (EPropertyFlags)0x0040000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFBGraphLibCallback, OnGetUserPictureURLSuccessDelegate), Z_Construct_UDelegateFunction_FacebookGoodies_OnGetUserPictureURLSuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFBGraphLibCallback_Statics::NewProp_OnGetUserPictureURLSuccessDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFBGraphLibCallback_Statics::NewProp_OnGetUserPictureURLSuccessDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFBGraphLibCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFBGraphLibCallback_Statics::NewProp_OnGetUserPictureURLSuccessDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFBGraphLibCallback_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFBGraphLibCallback>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFBGraphLibCallback_Statics::ClassParams = {
		&UFBGraphLibCallback::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFBGraphLibCallback_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFBGraphLibCallback_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFBGraphLibCallback_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFBGraphLibCallback_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFBGraphLibCallback()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFBGraphLibCallback_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFBGraphLibCallback, 3775997317);
	template<> FACEBOOKGOODIES_API UClass* StaticClass<UFBGraphLibCallback>()
	{
		return UFBGraphLibCallback::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFBGraphLibCallback(Z_Construct_UClass_UFBGraphLibCallback, &UFBGraphLibCallback::StaticClass, TEXT("/Script/FacebookGoodies"), TEXT("UFBGraphLibCallback"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFBGraphLibCallback);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
