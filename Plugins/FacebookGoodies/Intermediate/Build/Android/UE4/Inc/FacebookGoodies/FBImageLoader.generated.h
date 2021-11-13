// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSlateBrush;
#ifdef FACEBOOKGOODIES_FBImageLoader_generated_h
#error "FBImageLoader.generated.h already included, missing '#pragma once' in FBImageLoader.h"
#endif
#define FACEBOOKGOODIES_FBImageLoader_generated_h

#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h_11_DELEGATE \
struct _Script_FacebookGoodies_eventOnImageLoadFailed_Parms \
{ \
	FString ImageURL; \
}; \
static inline void FOnImageLoadFailed_DelegateWrapper(const FScriptDelegate& OnImageLoadFailed, const FString& ImageURL) \
{ \
	_Script_FacebookGoodies_eventOnImageLoadFailed_Parms Parms; \
	Parms.ImageURL=ImageURL; \
	OnImageLoadFailed.ProcessDelegate<UObject>(&Parms); \
}


#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h_10_DELEGATE \
struct _Script_FacebookGoodies_eventOnImageLoaded_Parms \
{ \
	FSlateBrush ImageBrush; \
	FString ImageURL; \
}; \
static inline void FOnImageLoaded_DelegateWrapper(const FScriptDelegate& OnImageLoaded, FSlateBrush ImageBrush, const FString& ImageURL) \
{ \
	_Script_FacebookGoodies_eventOnImageLoaded_Parms Parms; \
	Parms.ImageBrush=ImageBrush; \
	Parms.ImageURL=ImageURL; \
	OnImageLoaded.ProcessDelegate<UObject>(&Parms); \
}


#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h_17_SPARSE_DATA
#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadImage);


#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadImage);


#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFBImageLoader(); \
	friend struct Z_Construct_UClass_UFBImageLoader_Statics; \
public: \
	DECLARE_CLASS(UFBImageLoader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FacebookGoodies"), NO_API) \
	DECLARE_SERIALIZER(UFBImageLoader)


#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFBImageLoader(); \
	friend struct Z_Construct_UClass_UFBImageLoader_Statics; \
public: \
	DECLARE_CLASS(UFBImageLoader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FacebookGoodies"), NO_API) \
	DECLARE_SERIALIZER(UFBImageLoader)


#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFBImageLoader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFBImageLoader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFBImageLoader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFBImageLoader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFBImageLoader(UFBImageLoader&&); \
	NO_API UFBImageLoader(const UFBImageLoader&); \
public:


#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFBImageLoader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFBImageLoader(UFBImageLoader&&); \
	NO_API UFBImageLoader(const UFBImageLoader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFBImageLoader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFBImageLoader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFBImageLoader)


#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h_17_PRIVATE_PROPERTY_OFFSET
#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h_14_PROLOG
#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h_17_PRIVATE_PROPERTY_OFFSET \
	BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h_17_SPARSE_DATA \
	BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h_17_RPC_WRAPPERS \
	BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h_17_INCLASS \
	BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h_17_PRIVATE_PROPERTY_OFFSET \
	BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h_17_SPARSE_DATA \
	BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h_17_INCLASS_NO_PURE_DECLS \
	BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FBImageLoader."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACEBOOKGOODIES_API UClass* StaticClass<class UFBImageLoader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BeyondDarkTales_Plugins_FacebookGoodies_Source_FacebookGoodies_Public_Demo_FBImageLoader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
