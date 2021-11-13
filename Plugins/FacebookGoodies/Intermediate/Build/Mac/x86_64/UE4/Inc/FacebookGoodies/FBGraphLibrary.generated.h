// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFBFetchedFriendsData;
struct FFBPagingCursors;
enum class EPagingDirection : uint8;
 
enum class EFBHttpMethod : uint8;
#ifdef FACEBOOKGOODIES_FBGraphLibrary_generated_h
#error "FBGraphLibrary.generated.h already included, missing '#pragma once' in FBGraphLibrary.h"
#endif
#define FACEBOOKGOODIES_FBGraphLibrary_generated_h

#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_13_DELEGATE \
struct _Script_FacebookGoodies_eventOnGetProfileDelegate_Parms \
{ \
	FString Name; \
	FString Email; \
	FString PictureURL; \
}; \
static inline void FOnGetProfileDelegate_DelegateWrapper(const FScriptDelegate& OnGetProfileDelegate, const FString& Name, const FString& Email, const FString& PictureURL) \
{ \
	_Script_FacebookGoodies_eventOnGetProfileDelegate_Parms Parms; \
	Parms.Name=Name; \
	Parms.Email=Email; \
	Parms.PictureURL=PictureURL; \
	OnGetProfileDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_12_DELEGATE \
struct _Script_FacebookGoodies_eventOnGetUserPictureURLSuccess_Parms \
{ \
	FString UserPictureUrl; \
}; \
static inline void FOnGetUserPictureURLSuccess_DelegateWrapper(const FScriptDelegate& OnGetUserPictureURLSuccess, const FString& UserPictureUrl) \
{ \
	_Script_FacebookGoodies_eventOnGetUserPictureURLSuccess_Parms Parms; \
	Parms.UserPictureUrl=UserPictureUrl; \
	OnGetUserPictureURLSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_11_DELEGATE \
struct _Script_FacebookGoodies_eventOnGetFriendsCompleteDelegate_Parms \
{ \
	FFBFetchedFriendsData FetchedFriendsData; \
}; \
static inline void FOnGetFriendsCompleteDelegate_DelegateWrapper(const FScriptDelegate& OnGetFriendsCompleteDelegate, FFBFetchedFriendsData FetchedFriendsData) \
{ \
	_Script_FacebookGoodies_eventOnGetFriendsCompleteDelegate_Parms Parms; \
	Parms.FetchedFriendsData=FetchedFriendsData; \
	OnGetFriendsCompleteDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_10_DELEGATE \
struct _Script_FacebookGoodies_eventOnQueryCompleteDelegate_Parms \
{ \
	FString JsonResponse; \
}; \
static inline void FOnQueryCompleteDelegate_DelegateWrapper(const FScriptDelegate& OnQueryCompleteDelegate, const FString& JsonResponse) \
{ \
	_Script_FacebookGoodies_eventOnQueryCompleteDelegate_Parms Parms; \
	Parms.JsonResponse=JsonResponse; \
	OnQueryCompleteDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_33_SPARSE_DATA
#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetProfilePicture); \
	DECLARE_FUNCTION(execGetFriendsPagingData); \
	DECLARE_FUNCTION(execGetUserFriendsData); \
	DECLARE_FUNCTION(execGetProfileData); \
	DECLARE_FUNCTION(execRunQuery);


#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetProfilePicture); \
	DECLARE_FUNCTION(execGetFriendsPagingData); \
	DECLARE_FUNCTION(execGetUserFriendsData); \
	DECLARE_FUNCTION(execGetProfileData); \
	DECLARE_FUNCTION(execRunQuery);


#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFBGraphLibrary(); \
	friend struct Z_Construct_UClass_UFBGraphLibrary_Statics; \
public: \
	DECLARE_CLASS(UFBGraphLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FacebookGoodies"), NO_API) \
	DECLARE_SERIALIZER(UFBGraphLibrary)


#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUFBGraphLibrary(); \
	friend struct Z_Construct_UClass_UFBGraphLibrary_Statics; \
public: \
	DECLARE_CLASS(UFBGraphLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FacebookGoodies"), NO_API) \
	DECLARE_SERIALIZER(UFBGraphLibrary)


#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFBGraphLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFBGraphLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFBGraphLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFBGraphLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFBGraphLibrary(UFBGraphLibrary&&); \
	NO_API UFBGraphLibrary(const UFBGraphLibrary&); \
public:


#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFBGraphLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFBGraphLibrary(UFBGraphLibrary&&); \
	NO_API UFBGraphLibrary(const UFBGraphLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFBGraphLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFBGraphLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFBGraphLibrary)


#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_33_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_30_PROLOG
#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_33_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_33_SPARSE_DATA \
	HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_33_RPC_WRAPPERS \
	HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_33_INCLASS \
	HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_33_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_33_SPARSE_DATA \
	HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_33_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACEBOOKGOODIES_API UClass* StaticClass<class UFBGraphLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBGraphLibrary_h


#define FOREACH_ENUM_EPAGINGDIRECTION(op) \
	op(EPagingDirection::PREVIOUS) \
	op(EPagingDirection::NEXT) 

enum class EPagingDirection : uint8;
template<> FACEBOOKGOODIES_API UEnum* StaticEnum<EPagingDirection>();

#define FOREACH_ENUM_EFBHTTPMETHOD(op) \
	op(EFBHttpMethod::Get) \
	op(EFBHttpMethod::Post) \
	op(EFBHttpMethod::Delete) 

enum class EFBHttpMethod : uint8;
template<> FACEBOOKGOODIES_API UEnum* StaticEnum<EFBHttpMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
