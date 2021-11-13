// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FacebookGoodies/Public/Sharing/Content/FBShareStoryContent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBShareStoryContent() {}
// Cross Module References
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareStoryContent_NoRegister();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareStoryContent();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareContent();
	UPackage* Z_Construct_UPackage__Script_FacebookGoodies();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareMedia_NoRegister();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBSharePhoto_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFBShareStoryContent::execSetAttributionLink)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Link);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttributionLink(Z_Param_Link);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBShareStoryContent::execSetBackgroundColorList)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TopColor);
		P_GET_PROPERTY(FStrProperty,Z_Param_BottomColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBackgroundColorList(Z_Param_TopColor,Z_Param_BottomColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBShareStoryContent::execSetBackgroundAsset)
	{
		P_GET_OBJECT(UFBShareMedia,Z_Param_Media);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBackgroundAsset(Z_Param_Media);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBShareStoryContent::execSetStickerAsset)
	{
		P_GET_OBJECT(UFBSharePhoto,Z_Param_Photo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStickerAsset(Z_Param_Photo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBShareStoryContent::execNewShareStoryContent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFBShareStoryContent**)Z_Param__Result=UFBShareStoryContent::NewShareStoryContent();
		P_NATIVE_END;
	}
	void UFBShareStoryContent::StaticRegisterNativesUFBShareStoryContent()
	{
		UClass* Class = UFBShareStoryContent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NewShareStoryContent", &UFBShareStoryContent::execNewShareStoryContent },
			{ "SetAttributionLink", &UFBShareStoryContent::execSetAttributionLink },
			{ "SetBackgroundAsset", &UFBShareStoryContent::execSetBackgroundAsset },
			{ "SetBackgroundColorList", &UFBShareStoryContent::execSetBackgroundColorList },
			{ "SetStickerAsset", &UFBShareStoryContent::execSetStickerAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFBShareStoryContent_NewShareStoryContent_Statics
	{
		struct FBShareStoryContent_eventNewShareStoryContent_Parms
		{
			UFBShareStoryContent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFBShareStoryContent_NewShareStoryContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareStoryContent_eventNewShareStoryContent_Parms, ReturnValue), Z_Construct_UClass_UFBShareStoryContent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBShareStoryContent_NewShareStoryContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareStoryContent_NewShareStoryContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareStoryContent_NewShareStoryContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Create a new Share Story Content object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBShareStoryContent.h" },
		{ "ToolTip", "Create a new Share Story Content object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBShareStoryContent_NewShareStoryContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBShareStoryContent, nullptr, "NewShareStoryContent", nullptr, nullptr, sizeof(FBShareStoryContent_eventNewShareStoryContent_Parms), Z_Construct_UFunction_UFBShareStoryContent_NewShareStoryContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareStoryContent_NewShareStoryContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBShareStoryContent_NewShareStoryContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareStoryContent_NewShareStoryContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBShareStoryContent_NewShareStoryContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBShareStoryContent_NewShareStoryContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBShareStoryContent_SetAttributionLink_Statics
	{
		struct FBShareStoryContent_eventSetAttributionLink_Parms
		{
			FString Link;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Link_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Link;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareStoryContent_SetAttributionLink_Statics::NewProp_Link_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBShareStoryContent_SetAttributionLink_Statics::NewProp_Link = { "Link", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareStoryContent_eventSetAttributionLink_Parms, Link), METADATA_PARAMS(Z_Construct_UFunction_UFBShareStoryContent_SetAttributionLink_Statics::NewProp_Link_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareStoryContent_SetAttributionLink_Statics::NewProp_Link_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBShareStoryContent_SetAttributionLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareStoryContent_SetAttributionLink_Statics::NewProp_Link,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareStoryContent_SetAttributionLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * A deep link URL to content in your app. If missing, the story will not include an attribution link.\n\x09 * Use full URLs, including protocol (e.g. https://developers.facebok.com instead of developers.facebook.com)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBShareStoryContent.h" },
		{ "ToolTip", "A deep link URL to content in your app. If missing, the story will not include an attribution link.\nUse full URLs, including protocol (e.g. https://developers.facebok.com instead of developers.facebook.com)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBShareStoryContent_SetAttributionLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBShareStoryContent, nullptr, "SetAttributionLink", nullptr, nullptr, sizeof(FBShareStoryContent_eventSetAttributionLink_Parms), Z_Construct_UFunction_UFBShareStoryContent_SetAttributionLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareStoryContent_SetAttributionLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBShareStoryContent_SetAttributionLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareStoryContent_SetAttributionLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBShareStoryContent_SetAttributionLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBShareStoryContent_SetAttributionLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundAsset_Statics
	{
		struct FBShareStoryContent_eventSetBackgroundAsset_Parms
		{
			UFBShareMedia* Media;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Media;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundAsset_Statics::NewProp_Media = { "Media", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareStoryContent_eventSetBackgroundAsset_Parms, Media), Z_Construct_UClass_UFBShareMedia_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundAsset_Statics::NewProp_Media,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Set the background of the content. Can be either a Share Photo or a Share Video object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBShareStoryContent.h" },
		{ "ToolTip", "Set the background of the content. Can be either a Share Photo or a Share Video object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBShareStoryContent, nullptr, "SetBackgroundAsset", nullptr, nullptr, sizeof(FBShareStoryContent_eventSetBackgroundAsset_Parms), Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundColorList_Statics
	{
		struct FBShareStoryContent_eventSetBackgroundColorList_Parms
		{
			FString TopColor;
			FString BottomColor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TopColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottomColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BottomColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundColorList_Statics::NewProp_TopColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundColorList_Statics::NewProp_TopColor = { "TopColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareStoryContent_eventSetBackgroundColorList_Parms, TopColor), METADATA_PARAMS(Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundColorList_Statics::NewProp_TopColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundColorList_Statics::NewProp_TopColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundColorList_Statics::NewProp_BottomColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundColorList_Statics::NewProp_BottomColor = { "BottomColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareStoryContent_eventSetBackgroundColorList_Parms, BottomColor), METADATA_PARAMS(Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundColorList_Statics::NewProp_BottomColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundColorList_Statics::NewProp_BottomColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundColorList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundColorList_Statics::NewProp_TopColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundColorList_Statics::NewProp_BottomColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundColorList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Set the background color of the content. If the colors are different, a color gradient background will be generated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBShareStoryContent.h" },
		{ "ToolTip", "Set the background color of the content. If the colors are different, a color gradient background will be generated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundColorList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBShareStoryContent, nullptr, "SetBackgroundColorList", nullptr, nullptr, sizeof(FBShareStoryContent_eventSetBackgroundColorList_Parms), Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundColorList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundColorList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundColorList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundColorList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundColorList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundColorList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBShareStoryContent_SetStickerAsset_Statics
	{
		struct FBShareStoryContent_eventSetStickerAsset_Parms
		{
			UFBSharePhoto* Photo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Photo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFBShareStoryContent_SetStickerAsset_Statics::NewProp_Photo = { "Photo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareStoryContent_eventSetStickerAsset_Parms, Photo), Z_Construct_UClass_UFBSharePhoto_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBShareStoryContent_SetStickerAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareStoryContent_SetStickerAsset_Statics::NewProp_Photo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareStoryContent_SetStickerAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Add a sticker asset to the story content.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBShareStoryContent.h" },
		{ "ToolTip", "Add a sticker asset to the story content." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBShareStoryContent_SetStickerAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBShareStoryContent, nullptr, "SetStickerAsset", nullptr, nullptr, sizeof(FBShareStoryContent_eventSetStickerAsset_Parms), Z_Construct_UFunction_UFBShareStoryContent_SetStickerAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareStoryContent_SetStickerAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBShareStoryContent_SetStickerAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareStoryContent_SetStickerAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBShareStoryContent_SetStickerAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBShareStoryContent_SetStickerAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFBShareStoryContent_NoRegister()
	{
		return UFBShareStoryContent::StaticClass();
	}
	struct Z_Construct_UClass_UFBShareStoryContent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFBShareStoryContent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFBShareContent,
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFBShareStoryContent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFBShareStoryContent_NewShareStoryContent, "NewShareStoryContent" }, // 3983964615
		{ &Z_Construct_UFunction_UFBShareStoryContent_SetAttributionLink, "SetAttributionLink" }, // 3301059704
		{ &Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundAsset, "SetBackgroundAsset" }, // 3741696603
		{ &Z_Construct_UFunction_UFBShareStoryContent_SetBackgroundColorList, "SetBackgroundColorList" }, // 1338211785
		{ &Z_Construct_UFunction_UFBShareStoryContent_SetStickerAsset, "SetStickerAsset" }, // 3055739775
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBShareStoryContent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Sharing/Content/FBShareStoryContent.h" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBShareStoryContent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFBShareStoryContent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFBShareStoryContent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFBShareStoryContent_Statics::ClassParams = {
		&UFBShareStoryContent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFBShareStoryContent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFBShareStoryContent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFBShareStoryContent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFBShareStoryContent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFBShareStoryContent, 3187843172);
	template<> FACEBOOKGOODIES_API UClass* StaticClass<UFBShareStoryContent>()
	{
		return UFBShareStoryContent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFBShareStoryContent(Z_Construct_UClass_UFBShareStoryContent, &UFBShareStoryContent::StaticClass, TEXT("/Script/FacebookGoodies"), TEXT("UFBShareStoryContent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFBShareStoryContent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
