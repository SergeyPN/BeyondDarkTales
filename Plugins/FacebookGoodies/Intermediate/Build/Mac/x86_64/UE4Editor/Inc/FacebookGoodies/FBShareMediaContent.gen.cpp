// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FacebookGoodies/Public/Sharing/Content/FBShareMediaContent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBShareMediaContent() {}
// Cross Module References
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareMediaContent_NoRegister();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareMediaContent();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareContent();
	UPackage* Z_Construct_UPackage__Script_FacebookGoodies();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareMedia_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFBShareMediaContent::execNewShareMediaContent)
	{
		P_GET_TARRAY_REF(UFBShareMedia*,Z_Param_Out_Media);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFBShareMediaContent**)Z_Param__Result=UFBShareMediaContent::NewShareMediaContent(Z_Param_Out_Media);
		P_NATIVE_END;
	}
	void UFBShareMediaContent::StaticRegisterNativesUFBShareMediaContent()
	{
		UClass* Class = UFBShareMediaContent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NewShareMediaContent", &UFBShareMediaContent::execNewShareMediaContent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFBShareMediaContent_NewShareMediaContent_Statics
	{
		struct FBShareMediaContent_eventNewShareMediaContent_Parms
		{
			TArray<UFBShareMedia*> Media;
			UFBShareMediaContent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Media_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Media_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Media;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFBShareMediaContent_NewShareMediaContent_Statics::NewProp_Media_Inner = { "Media", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFBShareMedia_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareMediaContent_NewShareMediaContent_Statics::NewProp_Media_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFBShareMediaContent_NewShareMediaContent_Statics::NewProp_Media = { "Media", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareMediaContent_eventNewShareMediaContent_Parms, Media), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFBShareMediaContent_NewShareMediaContent_Statics::NewProp_Media_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareMediaContent_NewShareMediaContent_Statics::NewProp_Media_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFBShareMediaContent_NewShareMediaContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareMediaContent_eventNewShareMediaContent_Parms, ReturnValue), Z_Construct_UClass_UFBShareMediaContent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBShareMediaContent_NewShareMediaContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareMediaContent_NewShareMediaContent_Statics::NewProp_Media_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareMediaContent_NewShareMediaContent_Statics::NewProp_Media,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareMediaContent_NewShareMediaContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareMediaContent_NewShareMediaContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Create a new Share Media Content object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBShareMediaContent.h" },
		{ "ToolTip", "Create a new Share Media Content object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBShareMediaContent_NewShareMediaContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBShareMediaContent, nullptr, "NewShareMediaContent", nullptr, nullptr, sizeof(FBShareMediaContent_eventNewShareMediaContent_Parms), Z_Construct_UFunction_UFBShareMediaContent_NewShareMediaContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareMediaContent_NewShareMediaContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBShareMediaContent_NewShareMediaContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareMediaContent_NewShareMediaContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBShareMediaContent_NewShareMediaContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBShareMediaContent_NewShareMediaContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFBShareMediaContent_NoRegister()
	{
		return UFBShareMediaContent::StaticClass();
	}
	struct Z_Construct_UClass_UFBShareMediaContent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFBShareMediaContent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFBShareContent,
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFBShareMediaContent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFBShareMediaContent_NewShareMediaContent, "NewShareMediaContent" }, // 2752468490
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBShareMediaContent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Sharing/Content/FBShareMediaContent.h" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBShareMediaContent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFBShareMediaContent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFBShareMediaContent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFBShareMediaContent_Statics::ClassParams = {
		&UFBShareMediaContent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFBShareMediaContent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFBShareMediaContent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFBShareMediaContent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFBShareMediaContent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFBShareMediaContent, 1063225123);
	template<> FACEBOOKGOODIES_API UClass* StaticClass<UFBShareMediaContent>()
	{
		return UFBShareMediaContent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFBShareMediaContent(Z_Construct_UClass_UFBShareMediaContent, &UFBShareMediaContent::StaticClass, TEXT("/Script/FacebookGoodies"), TEXT("UFBShareMediaContent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFBShareMediaContent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
