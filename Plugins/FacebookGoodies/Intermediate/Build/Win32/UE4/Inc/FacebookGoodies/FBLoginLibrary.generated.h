// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACEBOOKGOODIES_FBLoginLibrary_generated_h
#error "FBLoginLibrary.generated.h already included, missing '#pragma once' in FBLoginLibrary.h"
#endif
#define FACEBOOKGOODIES_FBLoginLibrary_generated_h

#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_10_DELEGATE \
struct _Script_FacebookGoodies_eventOnLoginErrorDelegate_Parms \
{ \
	FString ErrorMessage; \
}; \
static inline void FOnLoginErrorDelegate_DelegateWrapper(const FScriptDelegate& OnLoginErrorDelegate, const FString& ErrorMessage) \
{ \
	_Script_FacebookGoodies_eventOnLoginErrorDelegate_Parms Parms; \
	Parms.ErrorMessage=ErrorMessage; \
	OnLoginErrorDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_9_DELEGATE \
static inline void FOnLoginCancelDelegate_DelegateWrapper(const FScriptDelegate& OnLoginCancelDelegate) \
{ \
	OnLoginCancelDelegate.ProcessDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_8_DELEGATE \
static inline void FOnLoginSuccessDelegate_DelegateWrapper(const FScriptDelegate& OnLoginSuccessDelegate) \
{ \
	OnLoginSuccessDelegate.ProcessDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_15_SPARSE_DATA
#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetExpiredPermissions); \
	DECLARE_FUNCTION(execGetDeclinedPermissions); \
	DECLARE_FUNCTION(execGetPermissions); \
	DECLARE_FUNCTION(execGetUserId); \
	DECLARE_FUNCTION(execGetAccessToken); \
	DECLARE_FUNCTION(execIsLoggedIn); \
	DECLARE_FUNCTION(execLogout); \
	DECLARE_FUNCTION(execLoginWithPublishPermissions); \
	DECLARE_FUNCTION(execLoginWithReadPermissions); \
	DECLARE_FUNCTION(execLogin);


#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetExpiredPermissions); \
	DECLARE_FUNCTION(execGetDeclinedPermissions); \
	DECLARE_FUNCTION(execGetPermissions); \
	DECLARE_FUNCTION(execGetUserId); \
	DECLARE_FUNCTION(execGetAccessToken); \
	DECLARE_FUNCTION(execIsLoggedIn); \
	DECLARE_FUNCTION(execLogout); \
	DECLARE_FUNCTION(execLoginWithPublishPermissions); \
	DECLARE_FUNCTION(execLoginWithReadPermissions); \
	DECLARE_FUNCTION(execLogin);


#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFBLoginLibrary(); \
	friend struct Z_Construct_UClass_UFBLoginLibrary_Statics; \
public: \
	DECLARE_CLASS(UFBLoginLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FacebookGoodies"), NO_API) \
	DECLARE_SERIALIZER(UFBLoginLibrary)


#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFBLoginLibrary(); \
	friend struct Z_Construct_UClass_UFBLoginLibrary_Statics; \
public: \
	DECLARE_CLASS(UFBLoginLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FacebookGoodies"), NO_API) \
	DECLARE_SERIALIZER(UFBLoginLibrary)


#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFBLoginLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFBLoginLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFBLoginLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFBLoginLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFBLoginLibrary(UFBLoginLibrary&&); \
	NO_API UFBLoginLibrary(const UFBLoginLibrary&); \
public:


#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFBLoginLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFBLoginLibrary(UFBLoginLibrary&&); \
	NO_API UFBLoginLibrary(const UFBLoginLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFBLoginLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFBLoginLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFBLoginLibrary)


#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_12_PROLOG
#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_15_SPARSE_DATA \
	HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_15_RPC_WRAPPERS \
	HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_15_INCLASS \
	HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_15_SPARSE_DATA \
	HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACEBOOKGOODIES_API UClass* StaticClass<class UFBLoginLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Login_FBLoginLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
