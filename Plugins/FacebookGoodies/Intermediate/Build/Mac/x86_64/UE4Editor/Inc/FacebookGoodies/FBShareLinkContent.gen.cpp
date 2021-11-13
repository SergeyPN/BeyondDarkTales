// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FacebookGoodies/Public/Sharing/Content/FBShareLinkContent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBShareLinkContent() {}
// Cross Module References
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareLinkContent_NoRegister();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareLinkContent();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareContent();
	UPackage* Z_Construct_UPackage__Script_FacebookGoodies();
// End Cross Module References
	DEFINE_FUNCTION(UFBShareLinkContent::execSetQuote)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Quote);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQuote(Z_Param_Quote);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBShareLinkContent::execNewShareLinkContent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFBShareLinkContent**)Z_Param__Result=UFBShareLinkContent::NewShareLinkContent();
		P_NATIVE_END;
	}
	void UFBShareLinkContent::StaticRegisterNativesUFBShareLinkContent()
	{
		UClass* Class = UFBShareLinkContent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NewShareLinkContent", &UFBShareLinkContent::execNewShareLinkContent },
			{ "SetQuote", &UFBShareLinkContent::execSetQuote },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFBShareLinkContent_NewShareLinkContent_Statics
	{
		struct FBShareLinkContent_eventNewShareLinkContent_Parms
		{
			UFBShareLinkContent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFBShareLinkContent_NewShareLinkContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareLinkContent_eventNewShareLinkContent_Parms, ReturnValue), Z_Construct_UClass_UFBShareLinkContent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBShareLinkContent_NewShareLinkContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareLinkContent_NewShareLinkContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareLinkContent_NewShareLinkContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Create a new Share Link Content object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBShareLinkContent.h" },
		{ "ToolTip", "Create a new Share Link Content object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBShareLinkContent_NewShareLinkContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBShareLinkContent, nullptr, "NewShareLinkContent", nullptr, nullptr, sizeof(FBShareLinkContent_eventNewShareLinkContent_Parms), Z_Construct_UFunction_UFBShareLinkContent_NewShareLinkContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareLinkContent_NewShareLinkContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBShareLinkContent_NewShareLinkContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareLinkContent_NewShareLinkContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBShareLinkContent_NewShareLinkContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBShareLinkContent_NewShareLinkContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBShareLinkContent_SetQuote_Statics
	{
		struct FBShareLinkContent_eventSetQuote_Parms
		{
			FString Quote;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quote_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Quote;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareLinkContent_SetQuote_Statics::NewProp_Quote_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBShareLinkContent_SetQuote_Statics::NewProp_Quote = { "Quote", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareLinkContent_eventSetQuote_Parms, Quote), METADATA_PARAMS(Z_Construct_UFunction_UFBShareLinkContent_SetQuote_Statics::NewProp_Quote_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareLinkContent_SetQuote_Statics::NewProp_Quote_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBShareLinkContent_SetQuote_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareLinkContent_SetQuote_Statics::NewProp_Quote,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareLinkContent_SetQuote_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Set the quote for the link being shared.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBShareLinkContent.h" },
		{ "ToolTip", "Set the quote for the link being shared." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBShareLinkContent_SetQuote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBShareLinkContent, nullptr, "SetQuote", nullptr, nullptr, sizeof(FBShareLinkContent_eventSetQuote_Parms), Z_Construct_UFunction_UFBShareLinkContent_SetQuote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareLinkContent_SetQuote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBShareLinkContent_SetQuote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareLinkContent_SetQuote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBShareLinkContent_SetQuote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBShareLinkContent_SetQuote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFBShareLinkContent_NoRegister()
	{
		return UFBShareLinkContent::StaticClass();
	}
	struct Z_Construct_UClass_UFBShareLinkContent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFBShareLinkContent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFBShareContent,
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFBShareLinkContent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFBShareLinkContent_NewShareLinkContent, "NewShareLinkContent" }, // 3697299832
		{ &Z_Construct_UFunction_UFBShareLinkContent_SetQuote, "SetQuote" }, // 2636991397
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBShareLinkContent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Sharing/Content/FBShareLinkContent.h" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBShareLinkContent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFBShareLinkContent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFBShareLinkContent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFBShareLinkContent_Statics::ClassParams = {
		&UFBShareLinkContent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFBShareLinkContent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFBShareLinkContent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFBShareLinkContent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFBShareLinkContent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFBShareLinkContent, 291380512);
	template<> FACEBOOKGOODIES_API UClass* StaticClass<UFBShareLinkContent>()
	{
		return UFBShareLinkContent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFBShareLinkContent(Z_Construct_UClass_UFBShareLinkContent, &UFBShareLinkContent::StaticClass, TEXT("/Script/FacebookGoodies"), TEXT("UFBShareLinkContent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFBShareLinkContent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
