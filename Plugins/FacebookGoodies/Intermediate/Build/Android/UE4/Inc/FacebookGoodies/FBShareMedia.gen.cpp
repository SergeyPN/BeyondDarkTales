// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FacebookGoodies/Public/Sharing/Media/FBShareMedia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBShareMedia() {}
// Cross Module References
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareMedia_NoRegister();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareMedia();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FacebookGoodies();
// End Cross Module References
	void UFBShareMedia::StaticRegisterNativesUFBShareMedia()
	{
	}
	UClass* Z_Construct_UClass_UFBShareMedia_NoRegister()
	{
		return UFBShareMedia::StaticClass();
	}
	struct Z_Construct_UClass_UFBShareMedia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFBShareMedia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBShareMedia_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Sharing/Media/FBShareMedia.h" },
		{ "ModuleRelativePath", "Public/Sharing/Media/FBShareMedia.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFBShareMedia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFBShareMedia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFBShareMedia_Statics::ClassParams = {
		&UFBShareMedia::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFBShareMedia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFBShareMedia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFBShareMedia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFBShareMedia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFBShareMedia, 1532204203);
	template<> FACEBOOKGOODIES_API UClass* StaticClass<UFBShareMedia>()
	{
		return UFBShareMedia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFBShareMedia(Z_Construct_UClass_UFBShareMedia, &UFBShareMedia::StaticClass, TEXT("/Script/FacebookGoodies"), TEXT("UFBShareMedia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFBShareMedia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
