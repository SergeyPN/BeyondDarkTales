// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FacebookGoodies/Public/Analytics/FBUserData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBUserData() {}
// Cross Module References
	FACEBOOKGOODIES_API UScriptStruct* Z_Construct_UScriptStruct_FFBUserData();
	UPackage* Z_Construct_UPackage__Script_FacebookGoodies();
// End Cross Module References
class UScriptStruct* FFBUserData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACEBOOKGOODIES_API uint32 Get_Z_Construct_UScriptStruct_FFBUserData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFBUserData, Z_Construct_UPackage__Script_FacebookGoodies(), TEXT("FBUserData"), sizeof(FFBUserData), Get_Z_Construct_UScriptStruct_FFBUserData_Hash());
	}
	return Singleton;
}
template<> FACEBOOKGOODIES_API UScriptStruct* StaticStruct<FFBUserData>()
{
	return FFBUserData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFBUserData(FFBUserData::StaticStruct, TEXT("/Script/FacebookGoodies"), TEXT("FBUserData"), false, nullptr, nullptr);
static struct FScriptStruct_FacebookGoodies_StaticRegisterNativesFFBUserData
{
	FScriptStruct_FacebookGoodies_StaticRegisterNativesFFBUserData()
	{
		UScriptStruct::DeferCppStructOps<FFBUserData>(FName(TEXT("FBUserData")));
	}
} ScriptStruct_FacebookGoodies_StaticRegisterNativesFFBUserData;
	struct Z_Construct_UScriptStruct_FFBUserData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FirstName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Phone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Phone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DateOfBirth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DateOfBirth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Gender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_City_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_City;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Zip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Zip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Country_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Country;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBUserData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Analytics/FBUserData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFBUserData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFBUserData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Email_MetaData[] = {
		{ "Category", "Facebook Goodies | Analytics" },
		{ "ModuleRelativePath", "Public/Analytics/FBUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBUserData, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_FirstName_MetaData[] = {
		{ "Category", "Facebook Goodies | Analytics" },
		{ "ModuleRelativePath", "Public/Analytics/FBUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_FirstName = { "FirstName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBUserData, FirstName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_FirstName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_FirstName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_LastName_MetaData[] = {
		{ "Category", "Facebook Goodies | Analytics" },
		{ "ModuleRelativePath", "Public/Analytics/FBUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_LastName = { "LastName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBUserData, LastName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_LastName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_LastName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Phone_MetaData[] = {
		{ "Category", "Facebook Goodies | Analytics" },
		{ "ModuleRelativePath", "Public/Analytics/FBUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Phone = { "Phone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBUserData, Phone), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Phone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Phone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_DateOfBirth_MetaData[] = {
		{ "Category", "Facebook Goodies | Analytics" },
		{ "ModuleRelativePath", "Public/Analytics/FBUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_DateOfBirth = { "DateOfBirth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBUserData, DateOfBirth), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_DateOfBirth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_DateOfBirth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Gender_MetaData[] = {
		{ "Category", "Facebook Goodies | Analytics" },
		{ "ModuleRelativePath", "Public/Analytics/FBUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBUserData, Gender), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Gender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_City_MetaData[] = {
		{ "Category", "Facebook Goodies | Analytics" },
		{ "ModuleRelativePath", "Public/Analytics/FBUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_City = { "City", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBUserData, City), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_City_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_City_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Facebook Goodies | Analytics" },
		{ "ModuleRelativePath", "Public/Analytics/FBUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBUserData, State), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Zip_MetaData[] = {
		{ "Category", "Facebook Goodies | Analytics" },
		{ "ModuleRelativePath", "Public/Analytics/FBUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Zip = { "Zip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBUserData, Zip), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Zip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Zip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Country_MetaData[] = {
		{ "Category", "Facebook Goodies | Analytics" },
		{ "ModuleRelativePath", "Public/Analytics/FBUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Country = { "Country", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBUserData, Country), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Country_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Country_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFBUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_FirstName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_LastName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Phone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_DateOfBirth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_City,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Zip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBUserData_Statics::NewProp_Country,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFBUserData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
		nullptr,
		&NewStructOps,
		"FBUserData",
		sizeof(FFBUserData),
		alignof(FFBUserData),
		Z_Construct_UScriptStruct_FFBUserData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBUserData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFBUserData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBUserData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFBUserData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFBUserData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FacebookGoodies();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FBUserData"), sizeof(FFBUserData), Get_Z_Construct_UScriptStruct_FFBUserData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFBUserData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFBUserData_Hash() { return 17013973U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
