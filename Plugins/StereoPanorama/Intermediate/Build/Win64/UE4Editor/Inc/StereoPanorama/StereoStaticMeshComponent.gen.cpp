// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/SceneCapturer.h"
#include "Private/StereoStaticMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStereoStaticMeshComponent() {}
// Cross Module References
	STEREOPANORAMA_API UEnum* Z_Construct_UEnum_StereoPanorama_ESPStereoCameraLayer();
	UPackage* Z_Construct_UPackage__Script_StereoPanorama();
	STEREOPANORAMA_API UClass* Z_Construct_UClass_UStereoStaticMeshComponent_NoRegister();
	STEREOPANORAMA_API UClass* Z_Construct_UClass_UStereoStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
// End Cross Module References
	static UEnum* ESPStereoCameraLayer_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StereoPanorama_ESPStereoCameraLayer, Z_Construct_UPackage__Script_StereoPanorama(), TEXT("ESPStereoCameraLayer"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESPStereoCameraLayer(ESPStereoCameraLayer_StaticEnum, TEXT("/Script/StereoPanorama"), TEXT("ESPStereoCameraLayer"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StereoPanorama_ESPStereoCameraLayer_CRC() { return 2875226842U; }
	UEnum* Z_Construct_UEnum_StereoPanorama_ESPStereoCameraLayer()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StereoPanorama();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESPStereoCameraLayer"), 0, Get_Z_Construct_UEnum_StereoPanorama_ESPStereoCameraLayer_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESPStereoCameraLayer::LeftEye", (int64)ESPStereoCameraLayer::LeftEye },
				{ "ESPStereoCameraLayer::RightEye", (int64)ESPStereoCameraLayer::RightEye },
				{ "ESPStereoCameraLayer::BothEyes", (int64)ESPStereoCameraLayer::BothEyes },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Private/StereoStaticMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StereoPanorama,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESPStereoCameraLayer",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESPStereoCameraLayer",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UStereoStaticMeshComponent::StaticRegisterNativesUStereoStaticMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UStereoStaticMeshComponent_NoRegister()
	{
		return UStereoStaticMeshComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UStereoStaticMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_StereoPanorama,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Rendering Common" },
				{ "HideCategories", "Object Activation Components|Activation Object Activation Components|Activation Trigger" },
				{ "IncludePath", "StereoStaticMeshComponent.h" },
				{ "ModuleRelativePath", "Private/StereoStaticMeshComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyeToRender_MetaData[] = {
				{ "Category", "Sprite" },
				{ "ModuleRelativePath", "Private/StereoStaticMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EyeToRender = { UE4CodeGen_Private::EPropertyClass::Enum, "EyeToRender", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UStereoStaticMeshComponent, EyeToRender), Z_Construct_UEnum_StereoPanorama_ESPStereoCameraLayer, METADATA_PARAMS(NewProp_EyeToRender_MetaData, ARRAY_COUNT(NewProp_EyeToRender_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_EyeToRender_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EyeToRender,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EyeToRender_Underlying,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UStereoStaticMeshComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UStereoStaticMeshComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A01080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStereoStaticMeshComponent, 3612551587);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStereoStaticMeshComponent(Z_Construct_UClass_UStereoStaticMeshComponent, &UStereoStaticMeshComponent::StaticClass, TEXT("/Script/StereoPanorama"), TEXT("UStereoStaticMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStereoStaticMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
