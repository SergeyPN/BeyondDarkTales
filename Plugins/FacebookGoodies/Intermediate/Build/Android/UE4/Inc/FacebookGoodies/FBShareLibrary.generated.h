// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFBShareContent;
enum class EFBShareMode : uint8;
#ifdef FACEBOOKGOODIES_FBShareLibrary_generated_h
#error "FBShareLibrary.generated.h already included, missing '#pragma once' in FBShareLibrary.h"
#endif
#define FACEBOOKGOODIES_FBShareLibrary_generated_h

#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_11_DELEGATE \
struct _Script_FacebookGoodies_eventOnShareErrorDelegate_Parms \
{ \
	FString ErrorMessage; \
}; \
static inline void FOnShareErrorDelegate_DelegateWrapper(const FScriptDelegate& OnShareErrorDelegate, const FString& ErrorMessage) \
{ \
	_Script_FacebookGoodies_eventOnShareErrorDelegate_Parms Parms; \
	Parms.ErrorMessage=ErrorMessage; \
	OnShareErrorDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_10_DELEGATE \
struct _Script_FacebookGoodies_eventOnShareSuccessDelegate_Parms \
{ \
	FString PostId; \
}; \
static inline void FOnShareSuccessDelegate_DelegateWrapper(const FScriptDelegate& OnShareSuccessDelegate, const FString& PostId) \
{ \
	_Script_FacebookGoodies_eventOnShareSuccessDelegate_Parms Parms; \
	Parms.PostId=PostId; \
	OnShareSuccessDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_9_DELEGATE \
static inline void FOnShareCancelDelegate_DelegateWrapper(const FScriptDelegate& OnShareCancelDelegate) \
{ \
	OnShareCancelDelegate.ProcessDelegate<UObject>(NULL); \
}


#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_38_SPARSE_DATA
#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShowShareDialogForContent);


#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShowShareDialogForContent);


#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFBShareLibrary(); \
	friend struct Z_Construct_UClass_UFBShareLibrary_Statics; \
public: \
	DECLARE_CLASS(UFBShareLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FacebookGoodies"), NO_API) \
	DECLARE_SERIALIZER(UFBShareLibrary)


#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUFBShareLibrary(); \
	friend struct Z_Construct_UClass_UFBShareLibrary_Statics; \
public: \
	DECLARE_CLASS(UFBShareLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FacebookGoodies"), NO_API) \
	DECLARE_SERIALIZER(UFBShareLibrary)


#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFBShareLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFBShareLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFBShareLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFBShareLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFBShareLibrary(UFBShareLibrary&&); \
	NO_API UFBShareLibrary(const UFBShareLibrary&); \
public:


#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFBShareLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFBShareLibrary(UFBShareLibrary&&); \
	NO_API UFBShareLibrary(const UFBShareLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFBShareLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFBShareLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFBShareLibrary)


#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_38_PRIVATE_PROPERTY_OFFSET
#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_35_PROLOG
#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_38_PRIVATE_PROPERTY_OFFSET \
	BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_38_SPARSE_DATA \
	BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_38_RPC_WRAPPERS \
	BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_38_INCLASS \
	BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_38_PRIVATE_PROPERTY_OFFSET \
	BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_38_SPARSE_DATA \
	BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_38_INCLASS_NO_PURE_DECLS \
	BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACEBOOKGOODIES_API UClass* StaticClass<class UFBShareLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Sharing_FBShareLibrary_h


#define FOREACH_ENUM_EFBSHAREMODE(op) \
	op(EFBShareMode::Automatic) \
	op(EFBShareMode::Native) \
	op(EFBShareMode::Web) \
	op(EFBShareMode::FeedWeb) \
	op(EFBShareMode::ShareSheet) \
	op(EFBShareMode::Browser) \
	op(EFBShareMode::FeedBrowser) 

enum class EFBShareMode : uint8;
template<> FACEBOOKGOODIES_API UEnum* StaticEnum<EFBShareMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
