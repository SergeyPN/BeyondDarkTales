// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FacebookGoodies/Public/Sharing/Media/FBSharePhoto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBSharePhoto() {}
// Cross Module References
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBSharePhoto_NoRegister();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBSharePhoto();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareMedia();
	UPackage* Z_Construct_UPackage__Script_FacebookGoodies();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFBSharePhoto::execSetCaption)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Caption);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCaption(Z_Param_Caption);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBSharePhoto::execSetUserGenerated)
	{
		P_GET_UBOOL(Z_Param_UserGenerated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUserGenerated(Z_Param_UserGenerated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBSharePhoto::execSetImagePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ImagePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetImagePath(Z_Param_ImagePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBSharePhoto::execSetImage)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Image);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetImage(Z_Param_Image);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBSharePhoto::execNewSharePhoto)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFBSharePhoto**)Z_Param__Result=UFBSharePhoto::NewSharePhoto();
		P_NATIVE_END;
	}
	void UFBSharePhoto::StaticRegisterNativesUFBSharePhoto()
	{
		UClass* Class = UFBSharePhoto::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NewSharePhoto", &UFBSharePhoto::execNewSharePhoto },
			{ "SetCaption", &UFBSharePhoto::execSetCaption },
			{ "SetImage", &UFBSharePhoto::execSetImage },
			{ "SetImagePath", &UFBSharePhoto::execSetImagePath },
			{ "SetUserGenerated", &UFBSharePhoto::execSetUserGenerated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFBSharePhoto_NewSharePhoto_Statics
	{
		struct FBSharePhoto_eventNewSharePhoto_Parms
		{
			UFBSharePhoto* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFBSharePhoto_NewSharePhoto_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBSharePhoto_eventNewSharePhoto_Parms, ReturnValue), Z_Construct_UClass_UFBSharePhoto_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBSharePhoto_NewSharePhoto_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBSharePhoto_NewSharePhoto_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBSharePhoto_NewSharePhoto_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Create a new Share Photo object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Media/FBSharePhoto.h" },
		{ "ToolTip", "Create a new Share Photo object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBSharePhoto_NewSharePhoto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBSharePhoto, nullptr, "NewSharePhoto", nullptr, nullptr, sizeof(FBSharePhoto_eventNewSharePhoto_Parms), Z_Construct_UFunction_UFBSharePhoto_NewSharePhoto_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBSharePhoto_NewSharePhoto_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBSharePhoto_NewSharePhoto_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBSharePhoto_NewSharePhoto_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBSharePhoto_NewSharePhoto()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBSharePhoto_NewSharePhoto_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBSharePhoto_SetCaption_Statics
	{
		struct FBSharePhoto_eventSetCaption_Parms
		{
			FString Caption;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Caption_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Caption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBSharePhoto_SetCaption_Statics::NewProp_Caption_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBSharePhoto_SetCaption_Statics::NewProp_Caption = { "Caption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBSharePhoto_eventSetCaption_Parms, Caption), METADATA_PARAMS(Z_Construct_UFunction_UFBSharePhoto_SetCaption_Statics::NewProp_Caption_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBSharePhoto_SetCaption_Statics::NewProp_Caption_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBSharePhoto_SetCaption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBSharePhoto_SetCaption_Statics::NewProp_Caption,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBSharePhoto_SetCaption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Set the caption to the image.\n\x09 *\n\x09 * Note: the 'caption' must come from * the user, as pre-filled content is forbidden by the Platform Policies (2.3).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Media/FBSharePhoto.h" },
		{ "ToolTip", "Set the caption to the image.\n\nNote: the 'caption' must come from * the user, as pre-filled content is forbidden by the Platform Policies (2.3)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBSharePhoto_SetCaption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBSharePhoto, nullptr, "SetCaption", nullptr, nullptr, sizeof(FBSharePhoto_eventSetCaption_Parms), Z_Construct_UFunction_UFBSharePhoto_SetCaption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBSharePhoto_SetCaption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBSharePhoto_SetCaption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBSharePhoto_SetCaption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBSharePhoto_SetCaption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBSharePhoto_SetCaption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBSharePhoto_SetImage_Statics
	{
		struct FBSharePhoto_eventSetImage_Parms
		{
			UTexture2D* Image;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFBSharePhoto_SetImage_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBSharePhoto_eventSetImage_Parms, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBSharePhoto_SetImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBSharePhoto_SetImage_Statics::NewProp_Image,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBSharePhoto_SetImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Set the source image from texture.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Media/FBSharePhoto.h" },
		{ "ToolTip", "Set the source image from texture." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBSharePhoto_SetImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBSharePhoto, nullptr, "SetImage", nullptr, nullptr, sizeof(FBSharePhoto_eventSetImage_Parms), Z_Construct_UFunction_UFBSharePhoto_SetImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBSharePhoto_SetImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBSharePhoto_SetImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBSharePhoto_SetImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBSharePhoto_SetImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBSharePhoto_SetImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBSharePhoto_SetImagePath_Statics
	{
		struct FBSharePhoto_eventSetImagePath_Parms
		{
			FString ImagePath;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImagePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBSharePhoto_SetImagePath_Statics::NewProp_ImagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBSharePhoto_SetImagePath_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBSharePhoto_eventSetImagePath_Parms, ImagePath), METADATA_PARAMS(Z_Construct_UFunction_UFBSharePhoto_SetImagePath_Statics::NewProp_ImagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBSharePhoto_SetImagePath_Statics::NewProp_ImagePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBSharePhoto_SetImagePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBSharePhoto_SetImagePath_Statics::NewProp_ImagePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBSharePhoto_SetImagePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Set the source image from full file path on the device.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Media/FBSharePhoto.h" },
		{ "ToolTip", "Set the source image from full file path on the device." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBSharePhoto_SetImagePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBSharePhoto, nullptr, "SetImagePath", nullptr, nullptr, sizeof(FBSharePhoto_eventSetImagePath_Parms), Z_Construct_UFunction_UFBSharePhoto_SetImagePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBSharePhoto_SetImagePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBSharePhoto_SetImagePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBSharePhoto_SetImagePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBSharePhoto_SetImagePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBSharePhoto_SetImagePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBSharePhoto_SetUserGenerated_Statics
	{
		struct FBSharePhoto_eventSetUserGenerated_Parms
		{
			bool UserGenerated;
		};
		static void NewProp_UserGenerated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UserGenerated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFBSharePhoto_SetUserGenerated_Statics::NewProp_UserGenerated_SetBit(void* Obj)
	{
		((FBSharePhoto_eventSetUserGenerated_Parms*)Obj)->UserGenerated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFBSharePhoto_SetUserGenerated_Statics::NewProp_UserGenerated = { "UserGenerated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBSharePhoto_eventSetUserGenerated_Parms), &Z_Construct_UFunction_UFBSharePhoto_SetUserGenerated_Statics::NewProp_UserGenerated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBSharePhoto_SetUserGenerated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBSharePhoto_SetUserGenerated_Statics::NewProp_UserGenerated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBSharePhoto_SetUserGenerated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Set whether the source image is user-generated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Media/FBSharePhoto.h" },
		{ "ToolTip", "Set whether the source image is user-generated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBSharePhoto_SetUserGenerated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBSharePhoto, nullptr, "SetUserGenerated", nullptr, nullptr, sizeof(FBSharePhoto_eventSetUserGenerated_Parms), Z_Construct_UFunction_UFBSharePhoto_SetUserGenerated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBSharePhoto_SetUserGenerated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBSharePhoto_SetUserGenerated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBSharePhoto_SetUserGenerated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBSharePhoto_SetUserGenerated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBSharePhoto_SetUserGenerated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFBSharePhoto_NoRegister()
	{
		return UFBSharePhoto::StaticClass();
	}
	struct Z_Construct_UClass_UFBSharePhoto_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFBSharePhoto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFBShareMedia,
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFBSharePhoto_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFBSharePhoto_NewSharePhoto, "NewSharePhoto" }, // 4158991051
		{ &Z_Construct_UFunction_UFBSharePhoto_SetCaption, "SetCaption" }, // 793526373
		{ &Z_Construct_UFunction_UFBSharePhoto_SetImage, "SetImage" }, // 2821956652
		{ &Z_Construct_UFunction_UFBSharePhoto_SetImagePath, "SetImagePath" }, // 2890907729
		{ &Z_Construct_UFunction_UFBSharePhoto_SetUserGenerated, "SetUserGenerated" }, // 2851203309
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBSharePhoto_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Sharing/Media/FBSharePhoto.h" },
		{ "ModuleRelativePath", "Public/Sharing/Media/FBSharePhoto.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFBSharePhoto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFBSharePhoto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFBSharePhoto_Statics::ClassParams = {
		&UFBSharePhoto::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFBSharePhoto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFBSharePhoto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFBSharePhoto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFBSharePhoto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFBSharePhoto, 2173282566);
	template<> FACEBOOKGOODIES_API UClass* StaticClass<UFBSharePhoto>()
	{
		return UFBSharePhoto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFBSharePhoto(Z_Construct_UClass_UFBSharePhoto, &UFBSharePhoto::StaticClass, TEXT("/Script/FacebookGoodies"), TEXT("UFBSharePhoto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFBSharePhoto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
