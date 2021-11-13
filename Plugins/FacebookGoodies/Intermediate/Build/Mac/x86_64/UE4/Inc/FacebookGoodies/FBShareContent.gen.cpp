// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FacebookGoodies/Public/Sharing/Content/FBShareContent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBShareContent() {}
// Cross Module References
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareContent_NoRegister();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareContent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FacebookGoodies();
// End Cross Module References
	DEFINE_FUNCTION(UFBShareContent::execSetShareHashtag)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ShareHashtag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShareHashtag(Z_Param_ShareHashtag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBShareContent::execSetRef)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRef(Z_Param_Ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBShareContent::execSetPageId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PageId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPageId(Z_Param_PageId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBShareContent::execSetPlaceId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PlaceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaceId(Z_Param_PlaceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBShareContent::execSetPeopleIds)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Ids);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPeopleIds(Z_Param_Out_Ids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBShareContent::execSetContentUrl)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContentUrl(Z_Param_Url);
		P_NATIVE_END;
	}
	void UFBShareContent::StaticRegisterNativesUFBShareContent()
	{
		UClass* Class = UFBShareContent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetContentUrl", &UFBShareContent::execSetContentUrl },
			{ "SetPageId", &UFBShareContent::execSetPageId },
			{ "SetPeopleIds", &UFBShareContent::execSetPeopleIds },
			{ "SetPlaceId", &UFBShareContent::execSetPlaceId },
			{ "SetRef", &UFBShareContent::execSetRef },
			{ "SetShareHashtag", &UFBShareContent::execSetShareHashtag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFBShareContent_SetContentUrl_Statics
	{
		struct FBShareContent_eventSetContentUrl_Parms
		{
			FString Url;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareContent_SetContentUrl_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBShareContent_SetContentUrl_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareContent_eventSetContentUrl_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UFBShareContent_SetContentUrl_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareContent_SetContentUrl_Statics::NewProp_Url_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBShareContent_SetContentUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareContent_SetContentUrl_Statics::NewProp_Url,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareContent_SetContentUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Set the URL for the content being shared.\n\x09 *\n\x09 * Note: this URL will be checked for all link meta tags for linking in platform specific ways.\n\x09 * See documentation for App Links  (https://developers.facebook.com/docs/applinks/)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBShareContent.h" },
		{ "ToolTip", "Set the URL for the content being shared.\n\nNote: this URL will be checked for all link meta tags for linking in platform specific ways.\nSee documentation for App Links  (https://developers.facebook.com/docs/applinks/)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBShareContent_SetContentUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBShareContent, nullptr, "SetContentUrl", nullptr, nullptr, sizeof(FBShareContent_eventSetContentUrl_Parms), Z_Construct_UFunction_UFBShareContent_SetContentUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareContent_SetContentUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBShareContent_SetContentUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareContent_SetContentUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBShareContent_SetContentUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBShareContent_SetContentUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBShareContent_SetPageId_Statics
	{
		struct FBShareContent_eventSetPageId_Parms
		{
			FString PageId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PageId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PageId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareContent_SetPageId_Statics::NewProp_PageId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBShareContent_SetPageId_Statics::NewProp_PageId = { "PageId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareContent_eventSetPageId_Parms, PageId), METADATA_PARAMS(Z_Construct_UFunction_UFBShareContent_SetPageId_Statics::NewProp_PageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareContent_SetPageId_Statics::NewProp_PageId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBShareContent_SetPageId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareContent_SetPageId_Statics::NewProp_PageId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareContent_SetPageId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Set the ID for a page to tag with this content.\n\x09 *\n\x09 * Note: will not take any effect on iOS.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBShareContent.h" },
		{ "ToolTip", "Set the ID for a page to tag with this content.\n\nNote: will not take any effect on iOS." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBShareContent_SetPageId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBShareContent, nullptr, "SetPageId", nullptr, nullptr, sizeof(FBShareContent_eventSetPageId_Parms), Z_Construct_UFunction_UFBShareContent_SetPageId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareContent_SetPageId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBShareContent_SetPageId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareContent_SetPageId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBShareContent_SetPageId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBShareContent_SetPageId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBShareContent_SetPeopleIds_Statics
	{
		struct FBShareContent_eventSetPeopleIds_Parms
		{
			TArray<FString> Ids;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ids_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ids_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Ids;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBShareContent_SetPeopleIds_Statics::NewProp_Ids_Inner = { "Ids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareContent_SetPeopleIds_Statics::NewProp_Ids_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFBShareContent_SetPeopleIds_Statics::NewProp_Ids = { "Ids", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareContent_eventSetPeopleIds_Parms, Ids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFBShareContent_SetPeopleIds_Statics::NewProp_Ids_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareContent_SetPeopleIds_Statics::NewProp_Ids_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBShareContent_SetPeopleIds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareContent_SetPeopleIds_Statics::NewProp_Ids_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareContent_SetPeopleIds_Statics::NewProp_Ids,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareContent_SetPeopleIds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Set the list of IDs for taggable people to tag with this content.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBShareContent.h" },
		{ "ToolTip", "Set the list of IDs for taggable people to tag with this content." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBShareContent_SetPeopleIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBShareContent, nullptr, "SetPeopleIds", nullptr, nullptr, sizeof(FBShareContent_eventSetPeopleIds_Parms), Z_Construct_UFunction_UFBShareContent_SetPeopleIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareContent_SetPeopleIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBShareContent_SetPeopleIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareContent_SetPeopleIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBShareContent_SetPeopleIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBShareContent_SetPeopleIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBShareContent_SetPlaceId_Statics
	{
		struct FBShareContent_eventSetPlaceId_Parms
		{
			FString PlaceId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlaceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareContent_SetPlaceId_Statics::NewProp_PlaceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBShareContent_SetPlaceId_Statics::NewProp_PlaceId = { "PlaceId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareContent_eventSetPlaceId_Parms, PlaceId), METADATA_PARAMS(Z_Construct_UFunction_UFBShareContent_SetPlaceId_Statics::NewProp_PlaceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareContent_SetPlaceId_Statics::NewProp_PlaceId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBShareContent_SetPlaceId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareContent_SetPlaceId_Statics::NewProp_PlaceId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareContent_SetPlaceId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Set the ID for a place to tag with this content.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBShareContent.h" },
		{ "ToolTip", "Set the ID for a place to tag with this content." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBShareContent_SetPlaceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBShareContent, nullptr, "SetPlaceId", nullptr, nullptr, sizeof(FBShareContent_eventSetPlaceId_Parms), Z_Construct_UFunction_UFBShareContent_SetPlaceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareContent_SetPlaceId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBShareContent_SetPlaceId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareContent_SetPlaceId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBShareContent_SetPlaceId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBShareContent_SetPlaceId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBShareContent_SetRef_Statics
	{
		struct FBShareContent_eventSetRef_Parms
		{
			FString Ref;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ref;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareContent_SetRef_Statics::NewProp_Ref_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBShareContent_SetRef_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareContent_eventSetRef_Parms, Ref), METADATA_PARAMS(Z_Construct_UFunction_UFBShareContent_SetRef_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareContent_SetRef_Statics::NewProp_Ref_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBShareContent_SetRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareContent_SetRef_Statics::NewProp_Ref,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareContent_SetRef_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Set the value to be added to the referrer URL when a person follows a link from this shared content on feed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBShareContent.h" },
		{ "ToolTip", "Set the value to be added to the referrer URL when a person follows a link from this shared content on feed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBShareContent_SetRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBShareContent, nullptr, "SetRef", nullptr, nullptr, sizeof(FBShareContent_eventSetRef_Parms), Z_Construct_UFunction_UFBShareContent_SetRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareContent_SetRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBShareContent_SetRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareContent_SetRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBShareContent_SetRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBShareContent_SetRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBShareContent_SetShareHashtag_Statics
	{
		struct FBShareContent_eventSetShareHashtag_Parms
		{
			FString ShareHashtag;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShareHashtag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShareHashtag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareContent_SetShareHashtag_Statics::NewProp_ShareHashtag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBShareContent_SetShareHashtag_Statics::NewProp_ShareHashtag = { "ShareHashtag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareContent_eventSetShareHashtag_Parms, ShareHashtag), METADATA_PARAMS(Z_Construct_UFunction_UFBShareContent_SetShareHashtag_Statics::NewProp_ShareHashtag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareContent_SetShareHashtag_Statics::NewProp_ShareHashtag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBShareContent_SetShareHashtag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareContent_SetShareHashtag_Statics::NewProp_ShareHashtag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareContent_SetShareHashtag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Set the hashtag for the content being shared.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBShareContent.h" },
		{ "ToolTip", "Set the hashtag for the content being shared." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBShareContent_SetShareHashtag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBShareContent, nullptr, "SetShareHashtag", nullptr, nullptr, sizeof(FBShareContent_eventSetShareHashtag_Parms), Z_Construct_UFunction_UFBShareContent_SetShareHashtag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareContent_SetShareHashtag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBShareContent_SetShareHashtag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareContent_SetShareHashtag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBShareContent_SetShareHashtag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBShareContent_SetShareHashtag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFBShareContent_NoRegister()
	{
		return UFBShareContent::StaticClass();
	}
	struct Z_Construct_UClass_UFBShareContent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFBShareContent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFBShareContent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFBShareContent_SetContentUrl, "SetContentUrl" }, // 868467334
		{ &Z_Construct_UFunction_UFBShareContent_SetPageId, "SetPageId" }, // 3629600003
		{ &Z_Construct_UFunction_UFBShareContent_SetPeopleIds, "SetPeopleIds" }, // 1864202138
		{ &Z_Construct_UFunction_UFBShareContent_SetPlaceId, "SetPlaceId" }, // 1069218066
		{ &Z_Construct_UFunction_UFBShareContent_SetRef, "SetRef" }, // 354132313
		{ &Z_Construct_UFunction_UFBShareContent_SetShareHashtag, "SetShareHashtag" }, // 645541088
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBShareContent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Sharing/Content/FBShareContent.h" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBShareContent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFBShareContent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFBShareContent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFBShareContent_Statics::ClassParams = {
		&UFBShareContent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFBShareContent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFBShareContent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFBShareContent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFBShareContent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFBShareContent, 1097372881);
	template<> FACEBOOKGOODIES_API UClass* StaticClass<UFBShareContent>()
	{
		return UFBShareContent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFBShareContent(Z_Construct_UClass_UFBShareContent, &UFBShareContent::StaticClass, TEXT("/Script/FacebookGoodies"), TEXT("UFBShareContent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFBShareContent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
