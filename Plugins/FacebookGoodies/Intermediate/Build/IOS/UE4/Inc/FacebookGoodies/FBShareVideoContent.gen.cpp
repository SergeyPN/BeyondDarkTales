// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FacebookGoodies/Public/Sharing/Content/FBShareVideoContent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBShareVideoContent() {}
// Cross Module References
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareVideoContent_NoRegister();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareVideoContent();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareContent();
	UPackage* Z_Construct_UPackage__Script_FacebookGoodies();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareVideo_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFBShareVideoContent::execNewShareVideoContent)
	{
		P_GET_OBJECT(UFBShareVideo,Z_Param_Video);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFBShareVideoContent**)Z_Param__Result=UFBShareVideoContent::NewShareVideoContent(Z_Param_Video);
		P_NATIVE_END;
	}
	void UFBShareVideoContent::StaticRegisterNativesUFBShareVideoContent()
	{
		UClass* Class = UFBShareVideoContent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NewShareVideoContent", &UFBShareVideoContent::execNewShareVideoContent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFBShareVideoContent_NewShareVideoContent_Statics
	{
		struct FBShareVideoContent_eventNewShareVideoContent_Parms
		{
			UFBShareVideo* Video;
			UFBShareVideoContent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Video;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFBShareVideoContent_NewShareVideoContent_Statics::NewProp_Video = { "Video", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareVideoContent_eventNewShareVideoContent_Parms, Video), Z_Construct_UClass_UFBShareVideo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFBShareVideoContent_NewShareVideoContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareVideoContent_eventNewShareVideoContent_Parms, ReturnValue), Z_Construct_UClass_UFBShareVideoContent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBShareVideoContent_NewShareVideoContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareVideoContent_NewShareVideoContent_Statics::NewProp_Video,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareVideoContent_NewShareVideoContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareVideoContent_NewShareVideoContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Create a new Share Video Content object with a corresponding Share Video object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBShareVideoContent.h" },
		{ "ToolTip", "Create a new Share Video Content object with a corresponding Share Video object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBShareVideoContent_NewShareVideoContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBShareVideoContent, nullptr, "NewShareVideoContent", nullptr, nullptr, sizeof(FBShareVideoContent_eventNewShareVideoContent_Parms), Z_Construct_UFunction_UFBShareVideoContent_NewShareVideoContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareVideoContent_NewShareVideoContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBShareVideoContent_NewShareVideoContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareVideoContent_NewShareVideoContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBShareVideoContent_NewShareVideoContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBShareVideoContent_NewShareVideoContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFBShareVideoContent_NoRegister()
	{
		return UFBShareVideoContent::StaticClass();
	}
	struct Z_Construct_UClass_UFBShareVideoContent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFBShareVideoContent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFBShareContent,
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFBShareVideoContent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFBShareVideoContent_NewShareVideoContent, "NewShareVideoContent" }, // 3369315711
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBShareVideoContent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Sharing/Content/FBShareVideoContent.h" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBShareVideoContent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFBShareVideoContent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFBShareVideoContent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFBShareVideoContent_Statics::ClassParams = {
		&UFBShareVideoContent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFBShareVideoContent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFBShareVideoContent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFBShareVideoContent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFBShareVideoContent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFBShareVideoContent, 2285811148);
	template<> FACEBOOKGOODIES_API UClass* StaticClass<UFBShareVideoContent>()
	{
		return UFBShareVideoContent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFBShareVideoContent(Z_Construct_UClass_UFBShareVideoContent, &UFBShareVideoContent::StaticClass, TEXT("/Script/FacebookGoodies"), TEXT("UFBShareVideoContent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFBShareVideoContent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
