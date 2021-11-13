// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FacebookGoodies/Public/Login/FBFriendsData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBFriendsData() {}
// Cross Module References
	FACEBOOKGOODIES_API UScriptStruct* Z_Construct_UScriptStruct_FFBFetchedFriendsData();
	UPackage* Z_Construct_UPackage__Script_FacebookGoodies();
	FACEBOOKGOODIES_API UScriptStruct* Z_Construct_UScriptStruct_FFBFriendData();
	FACEBOOKGOODIES_API UScriptStruct* Z_Construct_UScriptStruct_FFBFriendsPaging();
	FACEBOOKGOODIES_API UScriptStruct* Z_Construct_UScriptStruct_FFBFriendsSummary();
	FACEBOOKGOODIES_API UScriptStruct* Z_Construct_UScriptStruct_FFBPagingCursors();
// End Cross Module References
class UScriptStruct* FFBFetchedFriendsData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACEBOOKGOODIES_API uint32 Get_Z_Construct_UScriptStruct_FFBFetchedFriendsData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFBFetchedFriendsData, Z_Construct_UPackage__Script_FacebookGoodies(), TEXT("FBFetchedFriendsData"), sizeof(FFBFetchedFriendsData), Get_Z_Construct_UScriptStruct_FFBFetchedFriendsData_Hash());
	}
	return Singleton;
}
template<> FACEBOOKGOODIES_API UScriptStruct* StaticStruct<FFBFetchedFriendsData>()
{
	return FFBFetchedFriendsData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFBFetchedFriendsData(FFBFetchedFriendsData::StaticStruct, TEXT("/Script/FacebookGoodies"), TEXT("FBFetchedFriendsData"), false, nullptr, nullptr);
static struct FScriptStruct_FacebookGoodies_StaticRegisterNativesFFBFetchedFriendsData
{
	FScriptStruct_FacebookGoodies_StaticRegisterNativesFFBFetchedFriendsData()
	{
		UScriptStruct::DeferCppStructOps<FFBFetchedFriendsData>(FName(TEXT("FBFetchedFriendsData")));
	}
} ScriptStruct_FacebookGoodies_StaticRegisterNativesFFBFetchedFriendsData;
	struct Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Paging_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Paging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Summary_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Summary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Login/FBFriendsData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFBFetchedFriendsData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFBFriendData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Facebook Goodies | Fetch Friends" },
		{ "ModuleRelativePath", "Public/Login/FBFriendsData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBFetchedFriendsData, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::NewProp_Paging_MetaData[] = {
		{ "Category", "Facebook Goodies | Fetch Friends" },
		{ "ModuleRelativePath", "Public/Login/FBFriendsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::NewProp_Paging = { "Paging", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBFetchedFriendsData, Paging), Z_Construct_UScriptStruct_FFBFriendsPaging, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::NewProp_Paging_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::NewProp_Paging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::NewProp_Summary_MetaData[] = {
		{ "Category", "Facebook Goodies | Fetch Friends" },
		{ "ModuleRelativePath", "Public/Login/FBFriendsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::NewProp_Summary = { "Summary", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBFetchedFriendsData, Summary), Z_Construct_UScriptStruct_FFBFriendsSummary, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::NewProp_Summary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::NewProp_Summary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::NewProp_Paging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::NewProp_Summary,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
		nullptr,
		&NewStructOps,
		"FBFetchedFriendsData",
		sizeof(FFBFetchedFriendsData),
		alignof(FFBFetchedFriendsData),
		Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFBFetchedFriendsData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFBFetchedFriendsData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FacebookGoodies();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FBFetchedFriendsData"), sizeof(FFBFetchedFriendsData), Get_Z_Construct_UScriptStruct_FFBFetchedFriendsData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFBFetchedFriendsData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFBFetchedFriendsData_Hash() { return 628817721U; }
class UScriptStruct* FFBFriendsPaging::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACEBOOKGOODIES_API uint32 Get_Z_Construct_UScriptStruct_FFBFriendsPaging_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFBFriendsPaging, Z_Construct_UPackage__Script_FacebookGoodies(), TEXT("FBFriendsPaging"), sizeof(FFBFriendsPaging), Get_Z_Construct_UScriptStruct_FFBFriendsPaging_Hash());
	}
	return Singleton;
}
template<> FACEBOOKGOODIES_API UScriptStruct* StaticStruct<FFBFriendsPaging>()
{
	return FFBFriendsPaging::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFBFriendsPaging(FFBFriendsPaging::StaticStruct, TEXT("/Script/FacebookGoodies"), TEXT("FBFriendsPaging"), false, nullptr, nullptr);
static struct FScriptStruct_FacebookGoodies_StaticRegisterNativesFFBFriendsPaging
{
	FScriptStruct_FacebookGoodies_StaticRegisterNativesFFBFriendsPaging()
	{
		UScriptStruct::DeferCppStructOps<FFBFriendsPaging>(FName(TEXT("FBFriendsPaging")));
	}
} ScriptStruct_FacebookGoodies_StaticRegisterNativesFFBFriendsPaging;
	struct Z_Construct_UScriptStruct_FFBFriendsPaging_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cursors_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cursors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Previous_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Previous;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Next_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Next;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Login/FBFriendsData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFBFriendsPaging>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::NewProp_Cursors_MetaData[] = {
		{ "Category", "Facebook Goodies | Fetch Friends" },
		{ "ModuleRelativePath", "Public/Login/FBFriendsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::NewProp_Cursors = { "Cursors", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBFriendsPaging, Cursors), Z_Construct_UScriptStruct_FFBPagingCursors, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::NewProp_Cursors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::NewProp_Cursors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::NewProp_Previous_MetaData[] = {
		{ "Category", "Facebook Goodies | Fetch Friends" },
		{ "ModuleRelativePath", "Public/Login/FBFriendsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::NewProp_Previous = { "Previous", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBFriendsPaging, Previous), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::NewProp_Previous_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::NewProp_Previous_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::NewProp_Next_MetaData[] = {
		{ "Category", "Facebook Goodies | Fetch Friends" },
		{ "ModuleRelativePath", "Public/Login/FBFriendsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::NewProp_Next = { "Next", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBFriendsPaging, Next), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::NewProp_Next_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::NewProp_Next_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::NewProp_Cursors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::NewProp_Previous,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::NewProp_Next,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
		nullptr,
		&NewStructOps,
		"FBFriendsPaging",
		sizeof(FFBFriendsPaging),
		alignof(FFBFriendsPaging),
		Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFBFriendsPaging()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFBFriendsPaging_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FacebookGoodies();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FBFriendsPaging"), sizeof(FFBFriendsPaging), Get_Z_Construct_UScriptStruct_FFBFriendsPaging_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFBFriendsPaging_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFBFriendsPaging_Hash() { return 2909473286U; }
class UScriptStruct* FFBFriendsSummary::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACEBOOKGOODIES_API uint32 Get_Z_Construct_UScriptStruct_FFBFriendsSummary_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFBFriendsSummary, Z_Construct_UPackage__Script_FacebookGoodies(), TEXT("FBFriendsSummary"), sizeof(FFBFriendsSummary), Get_Z_Construct_UScriptStruct_FFBFriendsSummary_Hash());
	}
	return Singleton;
}
template<> FACEBOOKGOODIES_API UScriptStruct* StaticStruct<FFBFriendsSummary>()
{
	return FFBFriendsSummary::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFBFriendsSummary(FFBFriendsSummary::StaticStruct, TEXT("/Script/FacebookGoodies"), TEXT("FBFriendsSummary"), false, nullptr, nullptr);
static struct FScriptStruct_FacebookGoodies_StaticRegisterNativesFFBFriendsSummary
{
	FScriptStruct_FacebookGoodies_StaticRegisterNativesFFBFriendsSummary()
	{
		UScriptStruct::DeferCppStructOps<FFBFriendsSummary>(FName(TEXT("FBFriendsSummary")));
	}
} ScriptStruct_FacebookGoodies_StaticRegisterNativesFFBFriendsSummary;
	struct Z_Construct_UScriptStruct_FFBFriendsSummary_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TotalCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBFriendsSummary_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Login/FBFriendsData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFBFriendsSummary_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFBFriendsSummary>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBFriendsSummary_Statics::NewProp_TotalCount_MetaData[] = {
		{ "Category", "Facebook Goodies | Fetch Friends" },
		{ "ModuleRelativePath", "Public/Login/FBFriendsData.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFBFriendsSummary_Statics::NewProp_TotalCount = { "TotalCount", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBFriendsSummary, TotalCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBFriendsSummary_Statics::NewProp_TotalCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBFriendsSummary_Statics::NewProp_TotalCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFBFriendsSummary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBFriendsSummary_Statics::NewProp_TotalCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFBFriendsSummary_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
		nullptr,
		&NewStructOps,
		"FBFriendsSummary",
		sizeof(FFBFriendsSummary),
		alignof(FFBFriendsSummary),
		Z_Construct_UScriptStruct_FFBFriendsSummary_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBFriendsSummary_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFBFriendsSummary_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBFriendsSummary_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFBFriendsSummary()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFBFriendsSummary_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FacebookGoodies();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FBFriendsSummary"), sizeof(FFBFriendsSummary), Get_Z_Construct_UScriptStruct_FFBFriendsSummary_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFBFriendsSummary_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFBFriendsSummary_Hash() { return 928532640U; }
class UScriptStruct* FFBPagingCursors::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACEBOOKGOODIES_API uint32 Get_Z_Construct_UScriptStruct_FFBPagingCursors_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFBPagingCursors, Z_Construct_UPackage__Script_FacebookGoodies(), TEXT("FBPagingCursors"), sizeof(FFBPagingCursors), Get_Z_Construct_UScriptStruct_FFBPagingCursors_Hash());
	}
	return Singleton;
}
template<> FACEBOOKGOODIES_API UScriptStruct* StaticStruct<FFBPagingCursors>()
{
	return FFBPagingCursors::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFBPagingCursors(FFBPagingCursors::StaticStruct, TEXT("/Script/FacebookGoodies"), TEXT("FBPagingCursors"), false, nullptr, nullptr);
static struct FScriptStruct_FacebookGoodies_StaticRegisterNativesFFBPagingCursors
{
	FScriptStruct_FacebookGoodies_StaticRegisterNativesFFBPagingCursors()
	{
		UScriptStruct::DeferCppStructOps<FFBPagingCursors>(FName(TEXT("FBPagingCursors")));
	}
} ScriptStruct_FacebookGoodies_StaticRegisterNativesFFBPagingCursors;
	struct Z_Construct_UScriptStruct_FFBPagingCursors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Before_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Before;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_After_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_After;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBPagingCursors_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Login/FBFriendsData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFBPagingCursors_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFBPagingCursors>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBPagingCursors_Statics::NewProp_Before_MetaData[] = {
		{ "Category", "Facebook Goodies | Fetch Friends" },
		{ "ModuleRelativePath", "Public/Login/FBFriendsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFBPagingCursors_Statics::NewProp_Before = { "Before", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBPagingCursors, Before), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBPagingCursors_Statics::NewProp_Before_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBPagingCursors_Statics::NewProp_Before_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBPagingCursors_Statics::NewProp_After_MetaData[] = {
		{ "Category", "Facebook Goodies | Fetch Friends" },
		{ "ModuleRelativePath", "Public/Login/FBFriendsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFBPagingCursors_Statics::NewProp_After = { "After", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBPagingCursors, After), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBPagingCursors_Statics::NewProp_After_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBPagingCursors_Statics::NewProp_After_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFBPagingCursors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBPagingCursors_Statics::NewProp_Before,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBPagingCursors_Statics::NewProp_After,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFBPagingCursors_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
		nullptr,
		&NewStructOps,
		"FBPagingCursors",
		sizeof(FFBPagingCursors),
		alignof(FFBPagingCursors),
		Z_Construct_UScriptStruct_FFBPagingCursors_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBPagingCursors_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFBPagingCursors_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBPagingCursors_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFBPagingCursors()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFBPagingCursors_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FacebookGoodies();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FBPagingCursors"), sizeof(FFBPagingCursors), Get_Z_Construct_UScriptStruct_FFBPagingCursors_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFBPagingCursors_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFBPagingCursors_Hash() { return 4175563482U; }
class UScriptStruct* FFBFriendData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACEBOOKGOODIES_API uint32 Get_Z_Construct_UScriptStruct_FFBFriendData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFBFriendData, Z_Construct_UPackage__Script_FacebookGoodies(), TEXT("FBFriendData"), sizeof(FFBFriendData), Get_Z_Construct_UScriptStruct_FFBFriendData_Hash());
	}
	return Singleton;
}
template<> FACEBOOKGOODIES_API UScriptStruct* StaticStruct<FFBFriendData>()
{
	return FFBFriendData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFBFriendData(FFBFriendData::StaticStruct, TEXT("/Script/FacebookGoodies"), TEXT("FBFriendData"), false, nullptr, nullptr);
static struct FScriptStruct_FacebookGoodies_StaticRegisterNativesFFBFriendData
{
	FScriptStruct_FacebookGoodies_StaticRegisterNativesFFBFriendData()
	{
		UScriptStruct::DeferCppStructOps<FFBFriendData>(FName(TEXT("FBFriendData")));
	}
} ScriptStruct_FacebookGoodies_StaticRegisterNativesFFBFriendData;
	struct Z_Construct_UScriptStruct_FFBFriendData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBFriendData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Login/FBFriendsData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFBFriendData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFBFriendData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBFriendData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Facebook Goodies | Fetch Friends" },
		{ "ModuleRelativePath", "Public/Login/FBFriendsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFBFriendData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBFriendData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBFriendData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBFriendData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBFriendData_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Facebook Goodies | Fetch Friends" },
		{ "ModuleRelativePath", "Public/Login/FBFriendsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFBFriendData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFBFriendData, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBFriendData_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBFriendData_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFBFriendData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBFriendData_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBFriendData_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFBFriendData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FacebookGoodies,
		nullptr,
		&NewStructOps,
		"FBFriendData",
		sizeof(FFBFriendData),
		alignof(FFBFriendData),
		Z_Construct_UScriptStruct_FFBFriendData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBFriendData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFBFriendData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBFriendData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFBFriendData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFBFriendData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FacebookGoodies();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FBFriendData"), sizeof(FFBFriendData), Get_Z_Construct_UScriptStruct_FFBFriendData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFBFriendData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFBFriendData_Hash() { return 2931371906U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
