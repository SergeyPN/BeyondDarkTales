// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FacebookGoodies/Public/Sharing/FBShareLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBShareLibrary() {}
// Cross Module References
	FACEBOOKGOODIES_API UFunction* Z_Construct_UDelegateFunction_FacebookGoodies_OnShareErrorDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FacebookGoodies();
	FACEBOOKGOODIES_API UFunction* Z_Construct_UDelegateFunction_FacebookGoodies_OnShareSuccessDelegate__DelegateSignature();
	FACEBOOKGOODIES_API UFunction* Z_Construct_UDelegateFunction_FacebookGoodies_OnShareCancelDelegate__DelegateSignature();
	FACEBOOKGOODIES_API UEnum* Z_Construct_UEnum_FacebookGoodies_EFBShareMode();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareLibrary_NoRegister();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBShareContent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FacebookGoodies_OnShareErrorDelegate__DelegateSignature_Statics
	{
		struct _Script_FacebookGoodies_eventOnShareErrorDelegate_Parms
		{
			FString ErrorMessage;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FacebookGoodies_OnShareErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FacebookGoodies_eventOnShareErrorDelegate_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FacebookGoodies_OnShareErrorDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FacebookGoodies_OnShareErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FacebookGoodies_OnShareErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sharing/FBShareLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FacebookGoodies_OnShareErrorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FacebookGoodies, nullptr, "OnShareErrorDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_FacebookGoodies_eventOnShareErrorDelegate_Parms), Z_Construct_UDelegateFunction_FacebookGoodies_OnShareErrorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FacebookGoodies_OnShareErrorDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FacebookGoodies_OnShareErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FacebookGoodies_OnShareErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FacebookGoodies_OnShareErrorDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FacebookGoodies_OnShareErrorDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FacebookGoodies_OnShareSuccessDelegate__DelegateSignature_Statics
	{
		struct _Script_FacebookGoodies_eventOnShareSuccessDelegate_Parms
		{
			FString PostId;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PostId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FacebookGoodies_OnShareSuccessDelegate__DelegateSignature_Statics::NewProp_PostId = { "PostId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FacebookGoodies_eventOnShareSuccessDelegate_Parms, PostId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FacebookGoodies_OnShareSuccessDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FacebookGoodies_OnShareSuccessDelegate__DelegateSignature_Statics::NewProp_PostId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FacebookGoodies_OnShareSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sharing/FBShareLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FacebookGoodies_OnShareSuccessDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FacebookGoodies, nullptr, "OnShareSuccessDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_FacebookGoodies_eventOnShareSuccessDelegate_Parms), Z_Construct_UDelegateFunction_FacebookGoodies_OnShareSuccessDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FacebookGoodies_OnShareSuccessDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FacebookGoodies_OnShareSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FacebookGoodies_OnShareSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FacebookGoodies_OnShareSuccessDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FacebookGoodies_OnShareSuccessDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FacebookGoodies_OnShareCancelDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FacebookGoodies_OnShareCancelDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sharing/FBShareLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FacebookGoodies_OnShareCancelDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FacebookGoodies, nullptr, "OnShareCancelDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FacebookGoodies_OnShareCancelDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FacebookGoodies_OnShareCancelDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FacebookGoodies_OnShareCancelDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FacebookGoodies_OnShareCancelDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EFBShareMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FacebookGoodies_EFBShareMode, Z_Construct_UPackage__Script_FacebookGoodies(), TEXT("EFBShareMode"));
		}
		return Singleton;
	}
	template<> FACEBOOKGOODIES_API UEnum* StaticEnum<EFBShareMode>()
	{
		return EFBShareMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFBShareMode(EFBShareMode_StaticEnum, TEXT("/Script/FacebookGoodies"), TEXT("EFBShareMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FacebookGoodies_EFBShareMode_Hash() { return 2733191982U; }
	UEnum* Z_Construct_UEnum_FacebookGoodies_EFBShareMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FacebookGoodies();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFBShareMode"), 0, Get_Z_Construct_UEnum_FacebookGoodies_EFBShareMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFBShareMode::Automatic", (int64)EFBShareMode::Automatic },
				{ "EFBShareMode::Native", (int64)EFBShareMode::Native },
				{ "EFBShareMode::Web", (int64)EFBShareMode::Web },
				{ "EFBShareMode::FeedWeb", (int64)EFBShareMode::FeedWeb },
				{ "EFBShareMode::ShareSheet", (int64)EFBShareMode::ShareSheet },
				{ "EFBShareMode::Browser", (int64)EFBShareMode::Browser },
				{ "EFBShareMode::FeedBrowser", (int64)EFBShareMode::FeedBrowser },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Automatic.Comment", "// The mode is determined automatically.\n" },
				{ "Automatic.Name", "EFBShareMode::Automatic" },
				{ "Automatic.ToolTip", "The mode is determined automatically." },
				{ "Browser.Comment", "// The dialog in Safari. iOS only!\n" },
				{ "Browser.Name", "EFBShareMode::Browser" },
				{ "Browser.ToolTip", "The dialog in Safari. iOS only!" },
				{ "Comment", "/** Modes for the sharing dialog. */" },
				{ "FeedBrowser.Comment", "// The feed dialog in Safari. iOS only!\n" },
				{ "FeedBrowser.Name", "EFBShareMode::FeedBrowser" },
				{ "FeedBrowser.ToolTip", "The feed dialog in Safari. iOS only!" },
				{ "FeedWeb.Comment", "// The feed dialog in the built-in web browser.\n" },
				{ "FeedWeb.Name", "EFBShareMode::FeedWeb" },
				{ "FeedWeb.ToolTip", "The feed dialog in the built-in web browser." },
				{ "ModuleRelativePath", "Public/Sharing/FBShareLibrary.h" },
				{ "Native.Comment", "// The native dialog is used.\n" },
				{ "Native.Name", "EFBShareMode::Native" },
				{ "Native.ToolTip", "The native dialog is used." },
				{ "ShareSheet.Comment", "// The iOS integrated share sheet dialog. iOS only!\n" },
				{ "ShareSheet.Name", "EFBShareMode::ShareSheet" },
				{ "ShareSheet.ToolTip", "The iOS integrated share sheet dialog. iOS only!" },
				{ "ToolTip", "Modes for the sharing dialog." },
				{ "Web.Comment", "// The web dialog is used.\n" },
				{ "Web.Name", "EFBShareMode::Web" },
				{ "Web.ToolTip", "The web dialog is used." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FacebookGoodies,
				nullptr,
				"EFBShareMode",
				"EFBShareMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UFBShareLibrary::execShowShareDialogForContent)
	{
		P_GET_OBJECT(UFBShareContent,Z_Param_Content);
		P_GET_ENUM(EFBShareMode,Z_Param_ShareMode);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnCancel);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFBShareLibrary::ShowShareDialogForContent(Z_Param_Content,EFBShareMode(Z_Param_ShareMode),FOnShareSuccessDelegate(Z_Param_Out_OnSuccess),FOnShareCancelDelegate(Z_Param_Out_OnCancel),FOnShareErrorDelegate(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	void UFBShareLibrary::StaticRegisterNativesUFBShareLibrary()
	{
		UClass* Class = UFBShareLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowShareDialogForContent", &UFBShareLibrary::execShowShareDialogForContent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics
	{
		struct FBShareLibrary_eventShowShareDialogForContent_Parms
		{
			UFBShareContent* Content;
			EFBShareMode ShareMode;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnCancel;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShareMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ShareMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCancel_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnCancel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareLibrary_eventShowShareDialogForContent_Parms, Content), Z_Construct_UClass_UFBShareContent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::NewProp_ShareMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::NewProp_ShareMode = { "ShareMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareLibrary_eventShowShareDialogForContent_Parms, ShareMode), Z_Construct_UEnum_FacebookGoodies_EFBShareMode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareLibrary_eventShowShareDialogForContent_Parms, OnSuccess), Z_Construct_UDelegateFunction_FacebookGoodies_OnShareSuccessDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::NewProp_OnCancel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::NewProp_OnCancel = { "OnCancel", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareLibrary_eventShowShareDialogForContent_Parms, OnCancel), Z_Construct_UDelegateFunction_FacebookGoodies_OnShareCancelDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::NewProp_OnCancel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::NewProp_OnCancel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBShareLibrary_eventShowShareDialogForContent_Parms, OnError), Z_Construct_UDelegateFunction_FacebookGoodies_OnShareErrorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::NewProp_ShareMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::NewProp_ShareMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::NewProp_OnCancel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OnSuccess,OnCancel,OnError" },
		{ "Category", "Facebook Goodies | Sharing" },
		{ "Comment", "/**\n\x09 * Share content. Requires the user to be signed in for iOS.\n\x09 * Some of the share modes require the Facebook application to be installed on the device.\n\x09 *\n\x09 * Note: no callbacks will be fired when sharing to stories on iOS, because it works differently under the hood\n\x09 *\n\x09 * @param Content - content to share.\n\x09 * @param ShareMode - mode for the share dialog.\n\x09 * @param OnSuccess - callback to be invoked after successful sharing. Returns post ID, if the required permission is granted during login.\n\x09 * @param OnCancel - callback to be invoked if the user cancels sharing.\n\x09 * @param OnError - callback to be invoked if an error occurs during sharing.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Sharing/FBShareLibrary.h" },
		{ "ToolTip", "Share content. Requires the user to be signed in for iOS.\nSome of the share modes require the Facebook application to be installed on the device.\n\nNote: no callbacks will be fired when sharing to stories on iOS, because it works differently under the hood\n\n@param Content - content to share.\n@param ShareMode - mode for the share dialog.\n@param OnSuccess - callback to be invoked after successful sharing. Returns post ID, if the required permission is granted during login.\n@param OnCancel - callback to be invoked if the user cancels sharing.\n@param OnError - callback to be invoked if an error occurs during sharing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBShareLibrary, nullptr, "ShowShareDialogForContent", nullptr, nullptr, sizeof(FBShareLibrary_eventShowShareDialogForContent_Parms), Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFBShareLibrary_NoRegister()
	{
		return UFBShareLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFBShareLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFBShareLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFBShareLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFBShareLibrary_ShowShareDialogForContent, "ShowShareDialogForContent" }, // 2184107538
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBShareLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sharing/FBShareLibrary.h" },
		{ "ModuleRelativePath", "Public/Sharing/FBShareLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFBShareLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFBShareLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFBShareLibrary_Statics::ClassParams = {
		&UFBShareLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFBShareLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFBShareLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFBShareLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFBShareLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFBShareLibrary, 1997816503);
	template<> FACEBOOKGOODIES_API UClass* StaticClass<UFBShareLibrary>()
	{
		return UFBShareLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFBShareLibrary(Z_Construct_UClass_UFBShareLibrary, &UFBShareLibrary::StaticClass, TEXT("/Script/FacebookGoodies"), TEXT("UFBShareLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFBShareLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
