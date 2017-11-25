// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/SceneCapturer.h"
#include "Public/StereoCapturePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStereoCapturePawn() {}
// Cross Module References
	STEREOPANORAMA_API UClass* Z_Construct_UClass_AStereoCapturePawn_NoRegister();
	STEREOPANORAMA_API UClass* Z_Construct_UClass_AStereoCapturePawn();
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn();
	UPackage* Z_Construct_UPackage__Script_StereoPanorama();
	STEREOPANORAMA_API UFunction* Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void AStereoCapturePawn::StaticRegisterNativesAStereoCapturePawn()
	{
		UClass* Class = AStereoCapturePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateStereoAtlas", (Native)&AStereoCapturePawn::execUpdateStereoAtlas },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas()
	{
		struct StereoCapturePawn_eventUpdateStereoAtlas_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "LatentInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StereoCapturePawn_eventUpdateStereoAtlas_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StereoCapturePawn_eventUpdateStereoAtlas_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LatentInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "Latent", "" },
				{ "LatentInfo", "LatentInfo" },
				{ "ModuleRelativePath", "Public/StereoCapturePawn.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AStereoCapturePawn, "UpdateStereoAtlas", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StereoCapturePawn_eventUpdateStereoAtlas_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStereoCapturePawn_NoRegister()
	{
		return AStereoCapturePawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AStereoCapturePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ADefaultPawn,
				(UObject* (*)())Z_Construct_UPackage__Script_StereoPanorama,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas, "UpdateStereoAtlas" }, // 435090536
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "StereoCapturePawn.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/StereoCapturePawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightEyeAtlas_MetaData[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Public/StereoCapturePawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightEyeAtlas = { UE4CodeGen_Private::EPropertyClass::Object, "RightEyeAtlas", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AStereoCapturePawn, RightEyeAtlas), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_RightEyeAtlas_MetaData, ARRAY_COUNT(NewProp_RightEyeAtlas_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftEyeAtlas_MetaData[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Public/StereoCapturePawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftEyeAtlas = { UE4CodeGen_Private::EPropertyClass::Object, "LeftEyeAtlas", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AStereoCapturePawn, LeftEyeAtlas), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_LeftEyeAtlas_MetaData, ARRAY_COUNT(NewProp_LeftEyeAtlas_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightEyeAtlas,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftEyeAtlas,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AStereoCapturePawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AStereoCapturePawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStereoCapturePawn, 3317867495);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStereoCapturePawn(Z_Construct_UClass_AStereoCapturePawn, &AStereoCapturePawn::StaticClass, TEXT("/Script/StereoPanorama"), TEXT("AStereoCapturePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStereoCapturePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
