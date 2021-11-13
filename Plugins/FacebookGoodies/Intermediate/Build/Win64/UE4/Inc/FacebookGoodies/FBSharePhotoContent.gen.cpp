// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FacebookGoodies/Public/Sharing/Content/FBSharePhotoContent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBSharePhotoContent() {}
// Cross Module References
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBSharePhotoContent_NoRegister();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBSharePhotoContent();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareContent();
	UPackage* Z_Construct_UPackage__Script_FacebookGoodies();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBSharePhoto_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFBSharePhotoContent::execSetPhotos)
	{
		P_GET_TARRAY_REF(UFBSharePhoto*,Z_Param_Out_Photos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPhotos(Z_Param_Out_Photos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBSharePhotoContent::execAddPhotos)
	{
		P_GET_TARRAY_REF(UFBSharePhoto*,Z_Param_Out_Photos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPhotos(Z_Param_Out_Photos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBSharePhotoContent::execAddPhoto)
	{
		P_GET_OBJECT(UFBSharePhoto,Z_Param_Photo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPhoto(Z_Param_Photo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBSharePhotoContent::execNewSharePhotoContent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFBSharePhotoContent**)Z_Param__Result=UFBSharePhotoContent::NewSharePhotoContent();
		P_NATIVE_END;
	}
	void UFBSharePhotoContent::StaticRegisterNativesUFBSharePhotoContent()
	{
		UClass* Class = UFBSharePhotoContent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPhoto", &UFBSharePhotoContent::execAddPhoto },
			{ "AddPhotos", &UFBSharePhotoContent::execAddPhotos },
			{ "NewSharePhotoContent", &UFBSharePhotoContent::execNewSharePhotoContent },
			{ "SetPhotos", &UFBSharePhotoContent::execSetPhotos },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFBSharePhotoContent_AddPhoto_Statics
	{
		struct FBSharePhotoContent_eventAddPhoto_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFBSharePhotoContent_AddPhoto_Statics::NewProp_Photo = { "Photo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBSharePhotoContent_eventAddPhoto_Parms, Photo), Z_Construct_UClass_UFBSharePhoto_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBSharePhotoContent_AddPhoto_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBSharePhotoContent_AddPhoto_Statics::NewProp_Photo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBSharePhotoContent_AddPhoto_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Add a Share Photo object to the content.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBSharePhotoContent.h" },
		{ "ToolTip", "Add a Share Photo object to the content." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBSharePhotoContent_AddPhoto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBSharePhotoContent, nullptr, "AddPhoto", nullptr, nullptr, sizeof(FBSharePhotoContent_eventAddPhoto_Parms), Z_Construct_UFunction_UFBSharePhotoContent_AddPhoto_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBSharePhotoContent_AddPhoto_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBSharePhotoContent_AddPhoto_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBSharePhotoContent_AddPhoto_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBSharePhotoContent_AddPhoto()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBSharePhotoContent_AddPhoto_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBSharePhotoContent_AddPhotos_Statics
	{
		struct FBSharePhotoContent_eventAddPhotos_Parms
		{
			TArray<UFBSharePhoto*> Photos;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Photos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Photos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Photos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFBSharePhotoContent_AddPhotos_Statics::NewProp_Photos_Inner = { "Photos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFBSharePhoto_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBSharePhotoContent_AddPhotos_Statics::NewProp_Photos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFBSharePhotoContent_AddPhotos_Statics::NewProp_Photos = { "Photos", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBSharePhotoContent_eventAddPhotos_Parms, Photos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFBSharePhotoContent_AddPhotos_Statics::NewProp_Photos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBSharePhotoContent_AddPhotos_Statics::NewProp_Photos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBSharePhotoContent_AddPhotos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBSharePhotoContent_AddPhotos_Statics::NewProp_Photos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBSharePhotoContent_AddPhotos_Statics::NewProp_Photos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBSharePhotoContent_AddPhotos_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Add multiple Share Photo objects to the content.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBSharePhotoContent.h" },
		{ "ToolTip", "Add multiple Share Photo objects to the content." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBSharePhotoContent_AddPhotos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBSharePhotoContent, nullptr, "AddPhotos", nullptr, nullptr, sizeof(FBSharePhotoContent_eventAddPhotos_Parms), Z_Construct_UFunction_UFBSharePhotoContent_AddPhotos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBSharePhotoContent_AddPhotos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBSharePhotoContent_AddPhotos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBSharePhotoContent_AddPhotos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBSharePhotoContent_AddPhotos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBSharePhotoContent_AddPhotos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBSharePhotoContent_NewSharePhotoContent_Statics
	{
		struct FBSharePhotoContent_eventNewSharePhotoContent_Parms
		{
			UFBSharePhotoContent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFBSharePhotoContent_NewSharePhotoContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBSharePhotoContent_eventNewSharePhotoContent_Parms, ReturnValue), Z_Construct_UClass_UFBSharePhotoContent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBSharePhotoContent_NewSharePhotoContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBSharePhotoContent_NewSharePhotoContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBSharePhotoContent_NewSharePhotoContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Create a new Share Photo Content object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBSharePhotoContent.h" },
		{ "ToolTip", "Create a new Share Photo Content object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBSharePhotoContent_NewSharePhotoContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBSharePhotoContent, nullptr, "NewSharePhotoContent", nullptr, nullptr, sizeof(FBSharePhotoContent_eventNewSharePhotoContent_Parms), Z_Construct_UFunction_UFBSharePhotoContent_NewSharePhotoContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBSharePhotoContent_NewSharePhotoContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBSharePhotoContent_NewSharePhotoContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBSharePhotoContent_NewSharePhotoContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBSharePhotoContent_NewSharePhotoContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBSharePhotoContent_NewSharePhotoContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBSharePhotoContent_SetPhotos_Statics
	{
		struct FBSharePhotoContent_eventSetPhotos_Parms
		{
			TArray<UFBSharePhoto*> Photos;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Photos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Photos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Photos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFBSharePhotoContent_SetPhotos_Statics::NewProp_Photos_Inner = { "Photos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFBSharePhoto_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBSharePhotoContent_SetPhotos_Statics::NewProp_Photos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFBSharePhotoContent_SetPhotos_Statics::NewProp_Photos = { "Photos", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBSharePhotoContent_eventSetPhotos_Parms, Photos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFBSharePhotoContent_SetPhotos_Statics::NewProp_Photos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBSharePhotoContent_SetPhotos_Statics::NewProp_Photos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBSharePhotoContent_SetPhotos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBSharePhotoContent_SetPhotos_Statics::NewProp_Photos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBSharePhotoContent_SetPhotos_Statics::NewProp_Photos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBSharePhotoContent_SetPhotos_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Set the content with multiple Share Photo objects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBSharePhotoContent.h" },
		{ "ToolTip", "Set the content with multiple Share Photo objects." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBSharePhotoContent_SetPhotos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBSharePhotoContent, nullptr, "SetPhotos", nullptr, nullptr, sizeof(FBSharePhotoContent_eventSetPhotos_Parms), Z_Construct_UFunction_UFBSharePhotoContent_SetPhotos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBSharePhotoContent_SetPhotos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBSharePhotoContent_SetPhotos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBSharePhotoContent_SetPhotos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBSharePhotoContent_SetPhotos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBSharePhotoContent_SetPhotos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFBSharePhotoContent_NoRegister()
	{
		return UFBSharePhotoContent::StaticClass();
	}
	struct Z_Construct_UClass_UFBSharePhotoContent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFBSharePhotoContent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFBShareContent,
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFBSharePhotoContent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFBSharePhotoContent_AddPhoto, "AddPhoto" }, // 2452125677
		{ &Z_Construct_UFunction_UFBSharePhotoContent_AddPhotos, "AddPhotos" }, // 2642116486
		{ &Z_Construct_UFunction_UFBSharePhotoContent_NewSharePhotoContent, "NewSharePhotoContent" }, // 127768523
		{ &Z_Construct_UFunction_UFBSharePhotoContent_SetPhotos, "SetPhotos" }, // 1621271182
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBSharePhotoContent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Sharing/Content/FBSharePhotoContent.h" },
		{ "ModuleRelativePath", "Public/Sharing/Content/FBSharePhotoContent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFBSharePhotoContent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFBSharePhotoContent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFBSharePhotoContent_Statics::ClassParams = {
		&UFBSharePhotoContent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFBSharePhotoContent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFBSharePhotoContent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFBSharePhotoContent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFBSharePhotoContent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFBSharePhotoContent, 2795369753);
	template<> FACEBOOKGOODIES_API UClass* StaticClass<UFBSharePhotoContent>()
	{
		return UFBSharePhotoContent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFBSharePhotoContent(Z_Construct_UClass_UFBSharePhotoContent, &UFBSharePhotoContent::StaticClass, TEXT("/Script/FacebookGoodies"), TEXT("UFBSharePhotoContent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFBSharePhotoContent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
