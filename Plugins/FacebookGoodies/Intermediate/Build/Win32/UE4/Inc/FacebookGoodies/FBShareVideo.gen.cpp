// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FacebookGoodies/Public/Sharing/Media/FBShareVideo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBShareVideo() {}
// Cross Module References
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareVideo_NoRegister();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareVideo();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareMedia();
	UPackage* Z_Construct_UPackage__Script_FacebookGoodies();
// End Cross Module References
	DEFINE_FUNCTION(UFBShareVideo::execNewShareVideo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_VideoPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFBShareVideo**)Z_Param__Result=UFBShareVideo::NewShareVideo(Z_Param_VideoPath);
		P_NATIVE_END;
	}
	void UFBShareVideo::StaticRegisterNativesUFBShareVideo()
	{
		UClass* Class = UFBShareVideo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NewShareVideo", &UFBShareVideo::execNewShareVideo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFBShareVideo_NewShareVideo_Statics
	{
		struct FBShareVideo_eventNewShareVideo_Parms
		{
			FString VideoPath;
			UFBShareVideo* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VideoPath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareVideo_NewShareVideo_Statics::NewProp_VideoPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBShareVideo_NewShareVideo_Statics::NewProp_VideoPath = { "VideoPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareVideo_eventNewShareVideo_Parms, VideoPath), METADATA_PARAMS(Z_Construct_UFunction_UFBShareVideo_NewShareVideo_Statics::NewProp_VideoPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareVideo_NewShareVideo_Statics::NewProp_VideoPath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFBShareVideo_NewShareVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareVideo_eventNewShareVideo_Parms, ReturnValue), Z_Construct_UClass_UFBShareVideo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBShareVideo_NewShareVideo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareVideo_NewShareVideo_Statics::NewProp_VideoPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareVideo_NewShareVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareVideo_NewShareVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Create a new Share Video object.\n\x09 *\n\x09 * @param VideoPath - full path to the file on the device.\n\x09 * On iOS it has to be in specific format:  \"assets-library://asset/asset.[FILE_EXTENSION]?id=[FILE_ID]&ext=[FILE_EXTENSION]\"\n\x09 * Where FILE_EXTENSION is mov, or mp4, etc., and FILE_ID is the asset ID from PhotoLibrary.\n\x09 * Example: assets-library://asset/asset.mp4?id=225640F8-597C-4E71-A1E9-490C7737B0E4&ext=mp4\n\x09 *\n\x09 * Can be obtained as a result of the native image picker - under the deprecated UIImagePickerControllerReferenceURL key.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Media/FBShareVideo.h" },
		{ "ToolTip", "Create a new Share Video object.\n\n@param VideoPath - full path to the file on the device.\nOn iOS it has to be in specific format:  \"assets-library://asset/asset.[FILE_EXTENSION]?id=[FILE_ID]&ext=[FILE_EXTENSION]\"\nWhere FILE_EXTENSION is mov, or mp4, etc., and FILE_ID is the asset ID from PhotoLibrary.\nExample: assets-library://asset/asset.mp4?id=225640F8-597C-4E71-A1E9-490C7737B0E4&ext=mp4\n\nCan be obtained as a result of the native image picker - under the deprecated UIImagePickerControllerReferenceURL key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBShareVideo_NewShareVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBShareVideo, nullptr, "NewShareVideo", nullptr, nullptr, sizeof(FBShareVideo_eventNewShareVideo_Parms), Z_Construct_UFunction_UFBShareVideo_NewShareVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareVideo_NewShareVideo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBShareVideo_NewShareVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareVideo_NewShareVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBShareVideo_NewShareVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBShareVideo_NewShareVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFBShareVideo_NoRegister()
	{
		return UFBShareVideo::StaticClass();
	}
	struct Z_Construct_UClass_UFBShareVideo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFBShareVideo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFBShareMedia,
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFBShareVideo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFBShareVideo_NewShareVideo, "NewShareVideo" }, // 3635438064
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBShareVideo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Sharing/Media/FBShareVideo.h" },
		{ "ModuleRelativePath", "Public/Sharing/Media/FBShareVideo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFBShareVideo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFBShareVideo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFBShareVideo_Statics::ClassParams = {
		&UFBShareVideo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFBShareVideo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFBShareVideo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFBShareVideo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFBShareVideo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFBShareVideo, 3806399247);
	template<> FACEBOOKGOODIES_API UClass* StaticClass<UFBShareVideo>()
	{
		return UFBShareVideo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFBShareVideo(Z_Construct_UClass_UFBShareVideo, &UFBShareVideo::StaticClass, TEXT("/Script/FacebookGoodies"), TEXT("UFBShareVideo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFBShareVideo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
