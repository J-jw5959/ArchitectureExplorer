// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "VRCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRCharacter() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AVRCharacter_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AVRCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AVRCharacter::StaticRegisterNativesAVRCharacter()
	{
	}
	UClass* Z_Construct_UClass_AVRCharacter_NoRegister()
	{
		return AVRCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AVRCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "VRCharacter.h" },
				{ "ModuleRelativePath", "VRCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportProjectionExtent_MetaData[] = {
				{ "Category", "VRCharacter" },
				{ "ModuleRelativePath", "VRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeleportProjectionExtent = { UE4CodeGen_Private::EPropertyClass::Struct, "TeleportProjectionExtent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AVRCharacter, TeleportProjectionExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_TeleportProjectionExtent_MetaData, ARRAY_COUNT(NewProp_TeleportProjectionExtent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportFadeTime_MetaData[] = {
				{ "Category", "VRCharacter" },
				{ "ModuleRelativePath", "VRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TeleportFadeTime = { UE4CodeGen_Private::EPropertyClass::Float, "TeleportFadeTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AVRCharacter, TeleportFadeTime), METADATA_PARAMS(NewProp_TeleportFadeTime_MetaData, ARRAY_COUNT(NewProp_TeleportFadeTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTeleportDistance_MetaData[] = {
				{ "Category", "VRCharacter" },
				{ "ModuleRelativePath", "VRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTeleportDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MaxTeleportDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AVRCharacter, MaxTeleportDistance), METADATA_PARAMS(NewProp_MaxTeleportDistance_MetaData, ARRAY_COUNT(NewProp_MaxTeleportDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationMarker_MetaData[] = {
				{ "Category", "VRCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "VRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestinationMarker = { UE4CodeGen_Private::EPropertyClass::Object, "DestinationMarker", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(AVRCharacter, DestinationMarker), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_DestinationMarker_MetaData, ARRAY_COUNT(NewProp_DestinationMarker_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRRoot_MetaData[] = {
				{ "Category", "VRCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "VRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRRoot = { UE4CodeGen_Private::EPropertyClass::Object, "VRRoot", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(AVRCharacter, VRRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_VRRoot_MetaData, ARRAY_COUNT(NewProp_VRRoot_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
				{ "Category", "VRCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "VRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(AVRCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_Camera_MetaData, ARRAY_COUNT(NewProp_Camera_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TeleportProjectionExtent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TeleportFadeTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxTeleportDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DestinationMarker,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRRoot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Camera,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AVRCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AVRCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AVRCharacter, 1588069494);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRCharacter(Z_Construct_UClass_AVRCharacter, &AVRCharacter::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AVRCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
