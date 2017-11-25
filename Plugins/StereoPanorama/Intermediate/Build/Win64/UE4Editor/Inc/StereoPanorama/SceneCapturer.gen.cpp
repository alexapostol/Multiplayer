// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/SceneCapturer.h"
#include "Private/SceneCapturer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCapturer() {}
// Cross Module References
	STEREOPANORAMA_API UEnum* Z_Construct_UEnum_StereoPanorama_ECaptureStep();
	UPackage* Z_Construct_UPackage__Script_StereoPanorama();
	STEREOPANORAMA_API UClass* Z_Construct_UClass_USceneCapturer_NoRegister();
	STEREOPANORAMA_API UClass* Z_Construct_UClass_USceneCapturer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ECaptureStep_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StereoPanorama_ECaptureStep, Z_Construct_UPackage__Script_StereoPanorama(), TEXT("ECaptureStep"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECaptureStep(ECaptureStep_StaticEnum, TEXT("/Script/StereoPanorama"), TEXT("ECaptureStep"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StereoPanorama_ECaptureStep_CRC() { return 627339676U; }
	UEnum* Z_Construct_UEnum_StereoPanorama_ECaptureStep()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StereoPanorama();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECaptureStep"), 0, Get_Z_Construct_UEnum_StereoPanorama_ECaptureStep_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECaptureStep::Reset", (int64)ECaptureStep::Reset },
				{ "ECaptureStep::SetStartPosition", (int64)ECaptureStep::SetStartPosition },
				{ "ECaptureStep::SetPosition", (int64)ECaptureStep::SetPosition },
				{ "ECaptureStep::Read", (int64)ECaptureStep::Read },
				{ "ECaptureStep::Pause", (int64)ECaptureStep::Pause },
				{ "ECaptureStep::Unpause", (int64)ECaptureStep::Unpause },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/SceneCapturer.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StereoPanorama,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECaptureStep",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECaptureStep",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void USceneCapturer::StaticRegisterNativesUSceneCapturer()
	{
	}
	UClass* Z_Construct_UClass_USceneCapturer_NoRegister()
	{
		return USceneCapturer::StaticClass();
	}
	UClass* Z_Construct_UClass_USceneCapturer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_StereoPanorama,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SceneCapturer.h" },
				{ "ModuleRelativePath", "Private/SceneCapturer.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USceneCapturer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USceneCapturer::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USceneCapturer, 2450893046);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USceneCapturer(Z_Construct_UClass_USceneCapturer, &USceneCapturer::StaticClass, TEXT("/Script/StereoPanorama"), TEXT("USceneCapturer"), false, nullptr, nullptr, nullptr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
