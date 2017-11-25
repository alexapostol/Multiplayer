// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLatentActionInfo;
#ifdef STEREOPANORAMA_StereoCapturePawn_generated_h
#error "StereoCapturePawn.generated.h already included, missing '#pragma once' in StereoCapturePawn.h"
#endif
#define STEREOPANORAMA_StereoCapturePawn_generated_h

#define Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_56_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateStereoAtlas) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateStereoAtlas(Z_Param_WorldContextObject,Z_Param_LatentInfo); \
		P_NATIVE_END; \
	}


#define Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateStereoAtlas) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateStereoAtlas(Z_Param_WorldContextObject,Z_Param_LatentInfo); \
		P_NATIVE_END; \
	}


#define Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStereoCapturePawn(); \
	friend STEREOPANORAMA_API class UClass* Z_Construct_UClass_AStereoCapturePawn(); \
public: \
	DECLARE_CLASS(AStereoCapturePawn, ADefaultPawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/StereoPanorama"), NO_API) \
	DECLARE_SERIALIZER(AStereoCapturePawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_56_INCLASS \
private: \
	static void StaticRegisterNativesAStereoCapturePawn(); \
	friend STEREOPANORAMA_API class UClass* Z_Construct_UClass_AStereoCapturePawn(); \
public: \
	DECLARE_CLASS(AStereoCapturePawn, ADefaultPawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/StereoPanorama"), NO_API) \
	DECLARE_SERIALIZER(AStereoCapturePawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStereoCapturePawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStereoCapturePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStereoCapturePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStereoCapturePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStereoCapturePawn(AStereoCapturePawn&&); \
	NO_API AStereoCapturePawn(const AStereoCapturePawn&); \
public:


#define Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStereoCapturePawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStereoCapturePawn(AStereoCapturePawn&&); \
	NO_API AStereoCapturePawn(const AStereoCapturePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStereoCapturePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStereoCapturePawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStereoCapturePawn)


#define Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_56_PRIVATE_PROPERTY_OFFSET
#define Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_52_PROLOG
#define Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_56_PRIVATE_PROPERTY_OFFSET \
	Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_56_RPC_WRAPPERS \
	Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_56_INCLASS \
	Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_56_PRIVATE_PROPERTY_OFFSET \
	Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_56_INCLASS_NO_PURE_DECLS \
	Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Multiplayer_Plugins_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
