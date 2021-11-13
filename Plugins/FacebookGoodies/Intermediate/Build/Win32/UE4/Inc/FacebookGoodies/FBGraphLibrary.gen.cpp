// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FacebookGoodies/Public/Login/FBGraphLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBGraphLibrary() {}
// Cross Module References
	FACEBOOKGOODIES_API UFunction* Z_Construct_UDelegateFunction_FacebookGoodies_OnGetProfileDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FacebookGoodies();
	FACEBOOKGOODIES_API UFunction* Z_Construct_UDelegateFunction_FacebookGoodies_OnGetUserPictureURLSuccess__DelegateSignature();
	FACEBOOKGOODIES_API UFunction* Z_Construct_UDelegateFunction_FacebookGoodies_OnGetFriendsCompleteDelegate__DelegateSignature();
	FACEBOOKGOODIES_API UScriptStruct* Z_Construct_UScriptStruct_FFBFetchedFriendsData();
	FACEBOOKGOODIES_API UFunction* Z_Construct_UDelegateFunction_FacebookGoodies_OnQueryCompleteDelegate__DelegateSignature();
	FACEBOOKGOODIES_API UEnum* Z_Construct_UEnum_FacebookGoodies_EPagingDirection();
	FACEBOOKGOODIES_API UEnum* Z_Construct_UEnum_FacebookGoodies_EFBHttpMethod();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBGraphLibrary_NoRegister();
	FACEBOOKGOODIES_API UClass* Z_Construct_UClass_UFBGraphLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FACEBOOKGOODIES_API UScriptStruct* Z_Construct_UScriptStruct_FFBPagingCursors();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FacebookGoodies_OnGetProfileDelegate__DelegateSignature_Statics
	{
		struct _Script_FacebookGoodies_eventOnGetProfileDelegate_Parms
		{
			FString Name;
			FString Email;
			FString PictureURL;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PictureURL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FacebookGoodies_OnGetProfileDelegate__DelegateSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FacebookGoodies_eventOnGetProfileDelegate_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FacebookGoodies_OnGetProfileDelegate__DelegateSignature_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FacebookGoodies_eventOnGetProfileDelegate_Parms, Email), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FacebookGoodies_OnGetProfileDelegate__DelegateSignature_Statics::NewProp_PictureURL = { "PictureURL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FacebookGoodies_eventOnGetProfileDelegate_Parms, PictureURL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FacebookGoodies_OnGetProfileDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FacebookGoodies_OnGetProfileDelegate__DelegateSignature_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FacebookGoodies_OnGetProfileDelegate__DelegateSignature_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FacebookGoodies_OnGetProfileDelegate__DelegateSignature_Statics::NewProp_PictureURL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FacebookGoodies_OnGetProfileDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Login/FBGraphLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FacebookGoodies_OnGetProfileDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FacebookGoodies, nullptr, "OnGetProfileDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_FacebookGoodies_eventOnGetProfileDelegate_Parms), Z_Construct_UDelegateFunction_FacebookGoodies_OnGetProfileDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FacebookGoodies_OnGetProfileDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FacebookGoodies_OnGetProfileDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FacebookGoodies_OnGetProfileDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FacebookGoodies_OnGetProfileDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FacebookGoodies_OnGetProfileDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FacebookGoodies_OnGetUserPictureURLSuccess__DelegateSignature_Statics
	{
		struct _Script_FacebookGoodies_eventOnGetUserPictureURLSuccess_Parms
		{
			FString UserPictureUrl;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserPictureUrl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FacebookGoodies_OnGetUserPictureURLSuccess__DelegateSignature_Statics::NewProp_UserPictureUrl = { "UserPictureUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FacebookGoodies_eventOnGetUserPictureURLSuccess_Parms, UserPictureUrl), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FacebookGoodies_OnGetUserPictureURLSuccess__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FacebookGoodies_OnGetUserPictureURLSuccess__DelegateSignature_Statics::NewProp_UserPictureUrl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FacebookGoodies_OnGetUserPictureURLSuccess__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Login/FBGraphLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FacebookGoodies_OnGetUserPictureURLSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FacebookGoodies, nullptr, "OnGetUserPictureURLSuccess__DelegateSignature", nullptr, nullptr, sizeof(_Script_FacebookGoodies_eventOnGetUserPictureURLSuccess_Parms), Z_Construct_UDelegateFunction_FacebookGoodies_OnGetUserPictureURLSuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FacebookGoodies_OnGetUserPictureURLSuccess__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FacebookGoodies_OnGetUserPictureURLSuccess__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FacebookGoodies_OnGetUserPictureURLSuccess__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FacebookGoodies_OnGetUserPictureURLSuccess__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FacebookGoodies_OnGetUserPictureURLSuccess__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FacebookGoodies_OnGetFriendsCompleteDelegate__DelegateSignature_Statics
	{
		struct _Script_FacebookGoodies_eventOnGetFriendsCompleteDelegate_Parms
		{
			FFBFetchedFriendsData FetchedFriendsData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FetchedFriendsData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FacebookGoodies_OnGetFriendsCompleteDelegate__DelegateSignature_Statics::NewProp_FetchedFriendsData = { "FetchedFriendsData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FacebookGoodies_eventOnGetFriendsCompleteDelegate_Parms, FetchedFriendsData), Z_Construct_UScriptStruct_FFBFetchedFriendsData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FacebookGoodies_OnGetFriendsCompleteDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FacebookGoodies_OnGetFriendsCompleteDelegate__DelegateSignature_Statics::NewProp_FetchedFriendsData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FacebookGoodies_OnGetFriendsCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Login/FBGraphLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FacebookGoodies_OnGetFriendsCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FacebookGoodies, nullptr, "OnGetFriendsCompleteDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_FacebookGoodies_eventOnGetFriendsCompleteDelegate_Parms), Z_Construct_UDelegateFunction_FacebookGoodies_OnGetFriendsCompleteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FacebookGoodies_OnGetFriendsCompleteDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FacebookGoodies_OnGetFriendsCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FacebookGoodies_OnGetFriendsCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FacebookGoodies_OnGetFriendsCompleteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FacebookGoodies_OnGetFriendsCompleteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FacebookGoodies_OnQueryCompleteDelegate__DelegateSignature_Statics
	{
		struct _Script_FacebookGoodies_eventOnQueryCompleteDelegate_Parms
		{
			FString JsonResponse;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonResponse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FacebookGoodies_OnQueryCompleteDelegate__DelegateSignature_Statics::NewProp_JsonResponse = { "JsonResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FacebookGoodies_eventOnQueryCompleteDelegate_Parms, JsonResponse), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FacebookGoodies_OnQueryCompleteDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FacebookGoodies_OnQueryCompleteDelegate__DelegateSignature_Statics::NewProp_JsonResponse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FacebookGoodies_OnQueryCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Login/FBGraphLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FacebookGoodies_OnQueryCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FacebookGoodies, nullptr, "OnQueryCompleteDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_FacebookGoodies_eventOnQueryCompleteDelegate_Parms), Z_Construct_UDelegateFunction_FacebookGoodies_OnQueryCompleteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FacebookGoodies_OnQueryCompleteDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FacebookGoodies_OnQueryCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FacebookGoodies_OnQueryCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FacebookGoodies_OnQueryCompleteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FacebookGoodies_OnQueryCompleteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EPagingDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FacebookGoodies_EPagingDirection, Z_Construct_UPackage__Script_FacebookGoodies(), TEXT("EPagingDirection"));
		}
		return Singleton;
	}
	template<> FACEBOOKGOODIES_API UEnum* StaticEnum<EPagingDirection>()
	{
		return EPagingDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPagingDirection(EPagingDirection_StaticEnum, TEXT("/Script/FacebookGoodies"), TEXT("EPagingDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FacebookGoodies_EPagingDirection_Hash() { return 2474581884U; }
	UEnum* Z_Construct_UEnum_FacebookGoodies_EPagingDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FacebookGoodies();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPagingDirection"), 0, Get_Z_Construct_UEnum_FacebookGoodies_EPagingDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPagingDirection::PREVIOUS", (int64)EPagingDirection::PREVIOUS },
				{ "EPagingDirection::NEXT", (int64)EPagingDirection::NEXT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Login/FBGraphLibrary.h" },
				{ "NEXT.Name", "EPagingDirection::NEXT" },
				{ "PREVIOUS.Name", "EPagingDirection::PREVIOUS" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FacebookGoodies,
				nullptr,
				"EPagingDirection",
				"EPagingDirection",
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
	static UEnum* EFBHttpMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FacebookGoodies_EFBHttpMethod, Z_Construct_UPackage__Script_FacebookGoodies(), TEXT("EFBHttpMethod"));
		}
		return Singleton;
	}
	template<> FACEBOOKGOODIES_API UEnum* StaticEnum<EFBHttpMethod>()
	{
		return EFBHttpMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFBHttpMethod(EFBHttpMethod_StaticEnum, TEXT("/Script/FacebookGoodies"), TEXT("EFBHttpMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FacebookGoodies_EFBHttpMethod_Hash() { return 514631755U; }
	UEnum* Z_Construct_UEnum_FacebookGoodies_EFBHttpMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FacebookGoodies();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFBHttpMethod"), 0, Get_Z_Construct_UEnum_FacebookGoodies_EFBHttpMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFBHttpMethod::Get", (int64)EFBHttpMethod::Get },
				{ "EFBHttpMethod::Post", (int64)EFBHttpMethod::Post },
				{ "EFBHttpMethod::Delete", (int64)EFBHttpMethod::Delete },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Delete.Name", "EFBHttpMethod::Delete" },
				{ "Get.Name", "EFBHttpMethod::Get" },
				{ "ModuleRelativePath", "Public/Login/FBGraphLibrary.h" },
				{ "Post.Name", "EFBHttpMethod::Post" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FacebookGoodies,
				nullptr,
				"EFBHttpMethod",
				"EFBHttpMethod",
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
	DEFINE_FUNCTION(UFBGraphLibrary::execGetProfilePicture)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnPictureUrlReceived);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFBGraphLibrary::GetProfilePicture(Z_Param_UserId,FOnGetUserPictureURLSuccess(Z_Param_Out_OnPictureUrlReceived));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBGraphLibrary::execGetFriendsPagingData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_STRUCT(FFBPagingCursors,Z_Param_FetchedCursors);
		P_GET_ENUM(EPagingDirection,Z_Param_PagingDirection);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnGetFriends);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFBGraphLibrary::GetFriendsPagingData(Z_Param_UserId,Z_Param_FetchedCursors,EPagingDirection(Z_Param_PagingDirection),FOnGetFriendsCompleteDelegate(Z_Param_Out_OnGetFriends));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBGraphLibrary::execGetUserFriendsData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnGetFriends);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFBGraphLibrary::GetUserFriendsData(Z_Param_UserId,FOnGetFriendsCompleteDelegate(Z_Param_Out_OnGetFriends));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBGraphLibrary::execGetProfileData)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnGetProfile);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFBGraphLibrary::GetProfileData(FOnGetProfileDelegate(Z_Param_Out_OnGetProfile));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFBGraphLibrary::execRunQuery)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Query);
		P_GET_TMAP(FString,FString,Z_Param_Parameters);
		P_GET_ENUM(EFBHttpMethod,Z_Param_HttpMethod);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnQueryComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFBGraphLibrary::RunQuery(Z_Param_Query,Z_Param_Parameters,EFBHttpMethod(Z_Param_HttpMethod),FOnQueryCompleteDelegate(Z_Param_Out_OnQueryComplete));
		P_NATIVE_END;
	}
	void UFBGraphLibrary::StaticRegisterNativesUFBGraphLibrary()
	{
		UClass* Class = UFBGraphLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFriendsPagingData", &UFBGraphLibrary::execGetFriendsPagingData },
			{ "GetProfileData", &UFBGraphLibrary::execGetProfileData },
			{ "GetProfilePicture", &UFBGraphLibrary::execGetProfilePicture },
			{ "GetUserFriendsData", &UFBGraphLibrary::execGetUserFriendsData },
			{ "RunQuery", &UFBGraphLibrary::execRunQuery },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData_Statics
	{
		struct FBGraphLibrary_eventGetFriendsPagingData_Parms
		{
			FString UserId;
			FFBPagingCursors FetchedCursors;
			EPagingDirection PagingDirection;
			FScriptDelegate OnGetFriends;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FetchedCursors;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PagingDirection_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PagingDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGetFriends_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnGetFriends;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBGraphLibrary_eventGetFriendsPagingData_Parms, UserId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData_Statics::NewProp_FetchedCursors = { "FetchedCursors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBGraphLibrary_eventGetFriendsPagingData_Parms, FetchedCursors), Z_Construct_UScriptStruct_FFBPagingCursors, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData_Statics::NewProp_PagingDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData_Statics::NewProp_PagingDirection = { "PagingDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBGraphLibrary_eventGetFriendsPagingData_Parms, PagingDirection), Z_Construct_UEnum_FacebookGoodies_EPagingDirection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData_Statics::NewProp_OnGetFriends_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData_Statics::NewProp_OnGetFriends = { "OnGetFriends", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBGraphLibrary_eventGetFriendsPagingData_Parms, OnGetFriends), Z_Construct_UDelegateFunction_FacebookGoodies_OnGetFriendsCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData_Statics::NewProp_OnGetFriends_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData_Statics::NewProp_OnGetFriends_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData_Statics::NewProp_FetchedCursors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData_Statics::NewProp_PagingDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData_Statics::NewProp_PagingDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData_Statics::NewProp_OnGetFriends,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData_Statics::Function_MetaDataParams[] = {
		{ "Category", "FacebookGoodies | Graph API" },
		{ "Comment", "/**\n\x09* Get user's friends paging data.\n\x09*\n\x09* @param UserId - ID of a user to fetch friends data from. Required only for iOS!\n\x09* @param FetchedCursors - Cursors from fetched friends data response\n\x09* @param PagingDirection - Direction for scrolled page\n\x09* @param OnGetFriends - Called when friends data is retrieved\n\x09*/" },
		{ "ModuleRelativePath", "Public/Login/FBGraphLibrary.h" },
		{ "ToolTip", "Get user's friends paging data.\n\n@param UserId - ID of a user to fetch friends data from. Required only for iOS!\n@param FetchedCursors - Cursors from fetched friends data response\n@param PagingDirection - Direction for scrolled page\n@param OnGetFriends - Called when friends data is retrieved" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBGraphLibrary, nullptr, "GetFriendsPagingData", nullptr, nullptr, sizeof(FBGraphLibrary_eventGetFriendsPagingData_Parms), Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBGraphLibrary_GetProfileData_Statics
	{
		struct FBGraphLibrary_eventGetProfileData_Parms
		{
			FScriptDelegate OnGetProfile;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGetProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnGetProfile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBGraphLibrary_GetProfileData_Statics::NewProp_OnGetProfile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFBGraphLibrary_GetProfileData_Statics::NewProp_OnGetProfile = { "OnGetProfile", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBGraphLibrary_eventGetProfileData_Parms, OnGetProfile), Z_Construct_UDelegateFunction_FacebookGoodies_OnGetProfileDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFBGraphLibrary_GetProfileData_Statics::NewProp_OnGetProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBGraphLibrary_GetProfileData_Statics::NewProp_OnGetProfile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBGraphLibrary_GetProfileData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBGraphLibrary_GetProfileData_Statics::NewProp_OnGetProfile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBGraphLibrary_GetProfileData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Graph API" },
		{ "Comment", "/**\n\x09* Get basic profile data: name, email (requires permission) and profile picture URL.\n\x09*\n\x09* @param OnGetProfile - Called when profile data is retrieved\n\x09*/" },
		{ "ModuleRelativePath", "Public/Login/FBGraphLibrary.h" },
		{ "ToolTip", "Get basic profile data: name, email (requires permission) and profile picture URL.\n\n@param OnGetProfile - Called when profile data is retrieved" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBGraphLibrary_GetProfileData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBGraphLibrary, nullptr, "GetProfileData", nullptr, nullptr, sizeof(FBGraphLibrary_eventGetProfileData_Parms), Z_Construct_UFunction_UFBGraphLibrary_GetProfileData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBGraphLibrary_GetProfileData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBGraphLibrary_GetProfileData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBGraphLibrary_GetProfileData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBGraphLibrary_GetProfileData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBGraphLibrary_GetProfileData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBGraphLibrary_GetProfilePicture_Statics
	{
		struct FBGraphLibrary_eventGetProfilePicture_Parms
		{
			FString UserId;
			FScriptDelegate OnPictureUrlReceived;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPictureUrlReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnPictureUrlReceived;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBGraphLibrary_GetProfilePicture_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBGraphLibrary_eventGetProfilePicture_Parms, UserId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBGraphLibrary_GetProfilePicture_Statics::NewProp_OnPictureUrlReceived_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFBGraphLibrary_GetProfilePicture_Statics::NewProp_OnPictureUrlReceived = { "OnPictureUrlReceived", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBGraphLibrary_eventGetProfilePicture_Parms, OnPictureUrlReceived), Z_Construct_UDelegateFunction_FacebookGoodies_OnGetUserPictureURLSuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFBGraphLibrary_GetProfilePicture_Statics::NewProp_OnPictureUrlReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBGraphLibrary_GetProfilePicture_Statics::NewProp_OnPictureUrlReceived_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBGraphLibrary_GetProfilePicture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBGraphLibrary_GetProfilePicture_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBGraphLibrary_GetProfilePicture_Statics::NewProp_OnPictureUrlReceived,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBGraphLibrary_GetProfilePicture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Graph API" },
		{ "Comment", "/**\n\x09* Get user's profile picture.\n\x09*\n\x09* @param UserId - ID of a user to get profile picture url from\n\x09* @param OnPictureUrlReceived - Called when image url is retrieved\n\x09*/" },
		{ "ModuleRelativePath", "Public/Login/FBGraphLibrary.h" },
		{ "ToolTip", "Get user's profile picture.\n\n@param UserId - ID of a user to get profile picture url from\n@param OnPictureUrlReceived - Called when image url is retrieved" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBGraphLibrary_GetProfilePicture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBGraphLibrary, nullptr, "GetProfilePicture", nullptr, nullptr, sizeof(FBGraphLibrary_eventGetProfilePicture_Parms), Z_Construct_UFunction_UFBGraphLibrary_GetProfilePicture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBGraphLibrary_GetProfilePicture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBGraphLibrary_GetProfilePicture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBGraphLibrary_GetProfilePicture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBGraphLibrary_GetProfilePicture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBGraphLibrary_GetProfilePicture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBGraphLibrary_GetUserFriendsData_Statics
	{
		struct FBGraphLibrary_eventGetUserFriendsData_Parms
		{
			FString UserId;
			FScriptDelegate OnGetFriends;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGetFriends_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnGetFriends;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBGraphLibrary_GetUserFriendsData_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBGraphLibrary_eventGetUserFriendsData_Parms, UserId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBGraphLibrary_GetUserFriendsData_Statics::NewProp_OnGetFriends_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFBGraphLibrary_GetUserFriendsData_Statics::NewProp_OnGetFriends = { "OnGetFriends", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBGraphLibrary_eventGetUserFriendsData_Parms, OnGetFriends), Z_Construct_UDelegateFunction_FacebookGoodies_OnGetFriendsCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFBGraphLibrary_GetUserFriendsData_Statics::NewProp_OnGetFriends_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBGraphLibrary_GetUserFriendsData_Statics::NewProp_OnGetFriends_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBGraphLibrary_GetUserFriendsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBGraphLibrary_GetUserFriendsData_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBGraphLibrary_GetUserFriendsData_Statics::NewProp_OnGetFriends,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBGraphLibrary_GetUserFriendsData_Statics::Function_MetaDataParams[] = {
		{ "Category", "FacebookGoodies | Graph API" },
		{ "Comment", "/**\n\x09* Get user's friends data.\n\x09*\n\x09* @param UserId - ID of a user to fetch friends data from\n\x09* @param OnGetFriends - Called when friends data is retrieved\n\x09*/" },
		{ "ModuleRelativePath", "Public/Login/FBGraphLibrary.h" },
		{ "ToolTip", "Get user's friends data.\n\n@param UserId - ID of a user to fetch friends data from\n@param OnGetFriends - Called when friends data is retrieved" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBGraphLibrary_GetUserFriendsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBGraphLibrary, nullptr, "GetUserFriendsData", nullptr, nullptr, sizeof(FBGraphLibrary_eventGetUserFriendsData_Parms), Z_Construct_UFunction_UFBGraphLibrary_GetUserFriendsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBGraphLibrary_GetUserFriendsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBGraphLibrary_GetUserFriendsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBGraphLibrary_GetUserFriendsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBGraphLibrary_GetUserFriendsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBGraphLibrary_GetUserFriendsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics
	{
		struct FBGraphLibrary_eventRunQuery_Parms
		{
			FString Query;
			TMap<FString,FString> Parameters;
			EFBHttpMethod HttpMethod;
			FScriptDelegate OnQueryComplete;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Parameters_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Parameters_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Parameters;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HttpMethod_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HttpMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueryComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnQueryComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBGraphLibrary_eventRunQuery_Parms, Query), METADATA_PARAMS(Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::NewProp_Query_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::NewProp_Parameters_ValueProp = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::NewProp_Parameters_Key_KeyProp = { "Parameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBGraphLibrary_eventRunQuery_Parms, Parameters), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::NewProp_HttpMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::NewProp_HttpMethod = { "HttpMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBGraphLibrary_eventRunQuery_Parms, HttpMethod), Z_Construct_UEnum_FacebookGoodies_EFBHttpMethod, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::NewProp_OnQueryComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::NewProp_OnQueryComplete = { "OnQueryComplete", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBGraphLibrary_eventRunQuery_Parms, OnQueryComplete), Z_Construct_UDelegateFunction_FacebookGoodies_OnQueryCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::NewProp_OnQueryComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::NewProp_OnQueryComplete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::NewProp_Query,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::NewProp_Parameters_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::NewProp_Parameters_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::NewProp_HttpMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::NewProp_HttpMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::NewProp_OnQueryComplete,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "Facebook Goodies | Graph API" },
		{ "Comment", "/**\n\x09* Run a Facebook Graph API query.\n\x09*\n\x09* @param Query - Query to run\n\x09* @param Parameters - Parameter passed to the query\n\x09* @param HttpMethod - Http method to use\n\x09* @param OnQueryComplete - Called when a query completes\n\x09*/" },
		{ "ModuleRelativePath", "Public/Login/FBGraphLibrary.h" },
		{ "ToolTip", "Run a Facebook Graph API query.\n\n@param Query - Query to run\n@param Parameters - Parameter passed to the query\n@param HttpMethod - Http method to use\n@param OnQueryComplete - Called when a query completes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFBGraphLibrary, nullptr, "RunQuery", nullptr, nullptr, sizeof(FBGraphLibrary_eventRunQuery_Parms), Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFBGraphLibrary_RunQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFBGraphLibrary_RunQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFBGraphLibrary_NoRegister()
	{
		return UFBGraphLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFBGraphLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFBGraphLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFBGraphLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFBGraphLibrary_GetFriendsPagingData, "GetFriendsPagingData" }, // 2735618457
		{ &Z_Construct_UFunction_UFBGraphLibrary_GetProfileData, "GetProfileData" }, // 1546912328
		{ &Z_Construct_UFunction_UFBGraphLibrary_GetProfilePicture, "GetProfilePicture" }, // 693983568
		{ &Z_Construct_UFunction_UFBGraphLibrary_GetUserFriendsData, "GetUserFriendsData" }, // 767991596
		{ &Z_Construct_UFunction_UFBGraphLibrary_RunQuery, "RunQuery" }, // 917368840
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBGraphLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Login/FBGraphLibrary.h" },
		{ "ModuleRelativePath", "Public/Login/FBGraphLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFBGraphLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFBGraphLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFBGraphLibrary_Statics::ClassParams = {
		&UFBGraphLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFBGraphLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFBGraphLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFBGraphLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFBGraphLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFBGraphLibrary, 2348945665);
	template<> FACEBOOKGOODIES_API UClass* StaticClass<UFBGraphLibrary>()
	{
		return UFBGraphLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFBGraphLibrary(Z_Construct_UClass_UFBGraphLibrary, &UFBGraphLibrary::StaticClass, TEXT("/Script/FacebookGoodies"), TEXT("UFBGraphLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFBGraphLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
