// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEREOPANORAMA_SceneCapturer_generated_h
#error "SceneCapturer.generated.h already included, missing '#pragma once' in SceneCapturer.h"
#endif
#define STEREOPANORAMA_SceneCapturer_generated_h

#define Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Private_SceneCapturer_h_43_RPC_WRAPPERS
#define Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Private_SceneCapturer_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Private_SceneCapturer_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneCapturer(); \
	friend STEREOPANORAMA_API class UClass* Z_Construct_UClass_USceneCapturer(); \
public: \
	DECLARE_CLASS(USceneCapturer, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/StereoPanorama"), NO_API) \
	DECLARE_SERIALIZER(USceneCapturer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Private_SceneCapturer_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUSceneCapturer(); \
	friend STEREOPANORAMA_API class UClass* Z_Construct_UClass_USceneCapturer(); \
public: \
	DECLARE_CLASS(USceneCapturer, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/StereoPanorama"), NO_API) \
	DECLARE_SERIALIZER(USceneCapturer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Private_SceneCapturer_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USceneCapturer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneCapturer) \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneCapturer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneCapturer(USceneCapturer&&); \
	NO_API USceneCapturer(const USceneCapturer&); \
public:


#define Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Private_SceneCapturer_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneCapturer(USceneCapturer&&); \
	NO_API USceneCapturer(const USceneCapturer&); \
public: \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneCapturer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USceneCapturer)


#define Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Private_SceneCapturer_h_43_PRIVATE_PROPERTY_OFFSET
#define Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Private_SceneCapturer_h_38_PROLOG
#define Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Private_SceneCapturer_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Private_SceneCapturer_h_43_PRIVATE_PROPERTY_OFFSET \
	Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Private_SceneCapturer_h_43_RPC_WRAPPERS \
	Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Private_SceneCapturer_h_43_INCLASS \
	Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Private_SceneCapturer_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Private_SceneCapturer_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Private_SceneCapturer_h_43_PRIVATE_PROPERTY_OFFSET \
	Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Private_SceneCapturer_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Private_SceneCapturer_h_43_INCLASS_NO_PURE_DECLS \
	Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Private_SceneCapturer_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Private_SceneCapturer_h


#define FOREACH_ENUM_ECAPTURESTEP(op) \
	op(ECaptureStep::Reset) \
	op(ECaptureStep::SetStartPosition) \
	op(ECaptureStep::SetPosition) \
	op(ECaptureStep::Read) \
	op(ECaptureStep::Pause) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
