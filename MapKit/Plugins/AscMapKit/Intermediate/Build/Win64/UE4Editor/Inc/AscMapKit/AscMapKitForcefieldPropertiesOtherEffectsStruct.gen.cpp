// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitForcefieldPropertiesOtherEffectsStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
class UScriptStruct* FAscMapKitForcefieldPropertiesOtherEffectsStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitForcefieldPropertiesOtherEffectsStruct"), sizeof(FAscMapKitForcefieldPropertiesOtherEffectsStruct), Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitForcefieldPropertiesOtherEffectsStruct>()
{
	return FAscMapKitForcefieldPropertiesOtherEffectsStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct(FAscMapKitForcefieldPropertiesOtherEffectsStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitForcefieldPropertiesOtherEffectsStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitForcefieldPropertiesOtherEffectsStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitForcefieldPropertiesOtherEffectsStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitForcefieldPropertiesOtherEffectsStruct")),new UScriptStruct::TCppStructOps<FAscMapKitForcefieldPropertiesOtherEffectsStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitForcefieldPropertiesOtherEffectsStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDisabledEffectsLocalTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnDisabledEffectsLocalTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayOnDisabledSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayOnDisabledSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayOnDisabledSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayOnDisabledSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayOnDisabledSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayOnDisabledSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayOnDisabledSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayOnDisabledSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDisabledParticleScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnDisabledParticleScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDisabledParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnDisabledParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultOnDisabledParticle_MetaData[];
#endif
		static void NewProp_DisableDefaultOnDisabledParticle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultOnDisabledParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDisappearEffectsLocalTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnDisappearEffectsLocalTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayOnDisappearSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayOnDisappearSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayOnDisappearSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayOnDisappearSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayOnDisappearSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayOnDisappearSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayOnDisappearSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayOnDisappearSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDisappearParticleScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnDisappearParticleScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDisappearParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnDisappearParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultOnDisappearParticle_MetaData[];
#endif
		static void NewProp_DisableDefaultOnDisappearParticle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultOnDisappearParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAppearEffectsLocalTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnAppearEffectsLocalTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayOnAppearSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayOnAppearSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayOnAppearSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayOnAppearSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayOnAppearSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayOnAppearSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayOnAppearSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayOnAppearSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAppearParticleScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnAppearParticleScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAppearParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnAppearParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultOnAppearParticle_MetaData[];
#endif
		static void NewProp_DisableDefaultOnAppearParticle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultOnAppearParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayOnHitSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayOnHitSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayOnHitSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayOnHitSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayOnHitSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayOnHitSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayOnHitSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayOnHitSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHitParticleDelaySeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OnHitParticleDelaySeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHitParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnHitParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultOnHitParticle_MetaData[];
#endif
		static void NewProp_DisableDefaultOnHitParticle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultOnHitParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayAmbientSoundCueLocalTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayAmbientSoundCueLocalTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayAmbientSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayAmbientSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayAmbientSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayAmbientSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayAmbientSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayAmbientSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayAmbientSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayAmbientSoundCue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitForcefieldPropertiesOtherEffectsStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisabledEffectsLocalTransform_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// If you need to local offset the transform for the effects when they are spawned. Only location and rotation are used. Scale is ignored.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If you need to local offset the transform for the effects when they are spawned. Only location and rotation are used. Scale is ignored." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisabledEffectsLocalTransform = { "OnDisabledEffectsLocalTransform", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesOtherEffectsStruct, OnDisabledEffectsLocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisabledEffectsLocalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisabledEffectsLocalTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisabledSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the on disabled sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the on disabled sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisabledSoundCueSoundClass = { "PlayOnDisabledSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesOtherEffectsStruct, PlayOnDisabledSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisabledSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisabledSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisabledSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisabledSoundCue_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom sound to play as an on disabled effect for this forcefield. Leave empty for game runtime default.\n// * For example: a electrical buzzing sound.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as an on disabled effect for this forcefield. Leave empty for game runtime default.\n* For example: a electrical buzzing sound." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisabledSoundCue = { "PlayOnDisabledSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesOtherEffectsStruct, PlayOnDisabledSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisabledSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisabledSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnDisabledSoundCue_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnDisabledSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitForcefieldPropertiesOtherEffectsStruct*)Obj)->DisableDefaultPlayOnDisabledSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnDisabledSoundCue = { "DisableDefaultPlayOnDisabledSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitForcefieldPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnDisabledSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnDisabledSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnDisabledSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisabledParticleScale_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// Modify the particle scale as necessary.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Modify the particle scale as necessary." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisabledParticleScale = { "OnDisabledParticleScale", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesOtherEffectsStruct, OnDisabledParticleScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisabledParticleScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisabledParticleScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisabledParticle_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a particle to play when this forcefield is disabled. Leave empty for game runtime default.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a particle to play when this forcefield is disabled. Leave empty for game runtime default." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisabledParticle = { "OnDisabledParticle", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesOtherEffectsStruct, OnDisabledParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisabledParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisabledParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnDisabledParticle_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// If particles aren't provided, the default game assets will be used at runtime.\n// However, if you disable it here, then no particles will be used.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If particles aren't provided, the default game assets will be used at runtime.\nHowever, if you disable it here, then no particles will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnDisabledParticle_SetBit(void* Obj)
	{
		((FAscMapKitForcefieldPropertiesOtherEffectsStruct*)Obj)->DisableDefaultOnDisabledParticle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnDisabledParticle = { "DisableDefaultOnDisabledParticle", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitForcefieldPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnDisabledParticle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnDisabledParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnDisabledParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisappearEffectsLocalTransform_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// If you need to local offset the transform for the effects when they are spawned. Only location and rotation are used. Scale is ignored.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If you need to local offset the transform for the effects when they are spawned. Only location and rotation are used. Scale is ignored." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisappearEffectsLocalTransform = { "OnDisappearEffectsLocalTransform", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesOtherEffectsStruct, OnDisappearEffectsLocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisappearEffectsLocalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisappearEffectsLocalTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisappearSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the on disappear sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the on disappear sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisappearSoundCueSoundClass = { "PlayOnDisappearSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesOtherEffectsStruct, PlayOnDisappearSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisappearSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisappearSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisappearSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisappearSoundCue_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom sound to play as an on disappear effect for this forcefield. Leave empty for game runtime default.\n// * For example: a electrical buzzing sound.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as an on disappear effect for this forcefield. Leave empty for game runtime default.\n* For example: a electrical buzzing sound." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisappearSoundCue = { "PlayOnDisappearSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesOtherEffectsStruct, PlayOnDisappearSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisappearSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisappearSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnDisappearSoundCue_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnDisappearSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitForcefieldPropertiesOtherEffectsStruct*)Obj)->DisableDefaultPlayOnDisappearSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnDisappearSoundCue = { "DisableDefaultPlayOnDisappearSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitForcefieldPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnDisappearSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnDisappearSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnDisappearSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisappearParticleScale_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// Modify the particle scale as necessary.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Modify the particle scale as necessary." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisappearParticleScale = { "OnDisappearParticleScale", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesOtherEffectsStruct, OnDisappearParticleScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisappearParticleScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisappearParticleScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisappearParticle_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a particle to play when this forcefield disappears during pulse. Leave empty for game runtime default.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a particle to play when this forcefield disappears during pulse. Leave empty for game runtime default." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisappearParticle = { "OnDisappearParticle", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesOtherEffectsStruct, OnDisappearParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisappearParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisappearParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnDisappearParticle_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// If particles aren't provided, the default game assets will be used at runtime.\n// However, if you disable it here, then no particles will be used.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If particles aren't provided, the default game assets will be used at runtime.\nHowever, if you disable it here, then no particles will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnDisappearParticle_SetBit(void* Obj)
	{
		((FAscMapKitForcefieldPropertiesOtherEffectsStruct*)Obj)->DisableDefaultOnDisappearParticle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnDisappearParticle = { "DisableDefaultOnDisappearParticle", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitForcefieldPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnDisappearParticle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnDisappearParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnDisappearParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnAppearEffectsLocalTransform_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// If you need to local offset the transform for the effects when they are spawned. Only location and rotation are used. Scale is ignored.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If you need to local offset the transform for the effects when they are spawned. Only location and rotation are used. Scale is ignored." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnAppearEffectsLocalTransform = { "OnAppearEffectsLocalTransform", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesOtherEffectsStruct, OnAppearEffectsLocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnAppearEffectsLocalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnAppearEffectsLocalTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnAppearSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the on appear sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the on appear sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnAppearSoundCueSoundClass = { "PlayOnAppearSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesOtherEffectsStruct, PlayOnAppearSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnAppearSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnAppearSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnAppearSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnAppearSoundCue_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom sound to play as an on appear effect for this forcefield. Leave empty for game runtime default.\n// * For example: a electrical buzzing sound.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as an on appear effect for this forcefield. Leave empty for game runtime default.\n* For example: a electrical buzzing sound." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnAppearSoundCue = { "PlayOnAppearSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesOtherEffectsStruct, PlayOnAppearSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnAppearSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnAppearSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnAppearSoundCue_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnAppearSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitForcefieldPropertiesOtherEffectsStruct*)Obj)->DisableDefaultPlayOnAppearSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnAppearSoundCue = { "DisableDefaultPlayOnAppearSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitForcefieldPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnAppearSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnAppearSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnAppearSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnAppearParticleScale_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// Modify the particle scale as necessary.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Modify the particle scale as necessary." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnAppearParticleScale = { "OnAppearParticleScale", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesOtherEffectsStruct, OnAppearParticleScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnAppearParticleScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnAppearParticleScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnAppearParticle_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a particle to play when this forcefield appears during pulse. Leave empty for game runtime default.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a particle to play when this forcefield appears during pulse. Leave empty for game runtime default." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnAppearParticle = { "OnAppearParticle", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesOtherEffectsStruct, OnAppearParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnAppearParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnAppearParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnAppearParticle_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// If particles aren't provided, the default game assets will be used at runtime.\n// However, if you disable it here, then no particles will be used.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If particles aren't provided, the default game assets will be used at runtime.\nHowever, if you disable it here, then no particles will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnAppearParticle_SetBit(void* Obj)
	{
		((FAscMapKitForcefieldPropertiesOtherEffectsStruct*)Obj)->DisableDefaultOnAppearParticle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnAppearParticle = { "DisableDefaultOnAppearParticle", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitForcefieldPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnAppearParticle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnAppearParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnAppearParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the on hit sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the on hit sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCueSoundClass = { "PlayOnHitSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesOtherEffectsStruct, PlayOnHitSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCue_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom sound to play as an on hit effect for this forcefield. Leave empty for game runtime default.\n// * For example: a electrical buzzing sound.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as an on hit effect for this forcefield. Leave empty for game runtime default.\n* For example: a electrical buzzing sound." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCue = { "PlayOnHitSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesOtherEffectsStruct, PlayOnHitSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnHitSoundCue_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnHitSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitForcefieldPropertiesOtherEffectsStruct*)Obj)->DisableDefaultPlayOnHitSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnHitSoundCue = { "DisableDefaultPlayOnHitSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitForcefieldPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnHitSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnHitSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnHitSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnHitParticleDelaySeconds_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a delay, in seconds, to wait before allowing the particle to spawn again after an intial impact.\n// * This is for performance control. You don't want a lot of particles being spawned for a weapon with a high fire rate.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a delay, in seconds, to wait before allowing the particle to spawn again after an intial impact.\n* This is for performance control. You don't want a lot of particles being spawned for a weapon with a high fire rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnHitParticleDelaySeconds = { "OnHitParticleDelaySeconds", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesOtherEffectsStruct, OnHitParticleDelaySeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnHitParticleDelaySeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnHitParticleDelaySeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnHitParticle_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a particle to play when collision occurs on this forcefield. Leave empty for game runtime default.\n// * For example: an electrical spark.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a particle to play when collision occurs on this forcefield. Leave empty for game runtime default.\n* For example: an electrical spark." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnHitParticle = { "OnHitParticle", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesOtherEffectsStruct, OnHitParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnHitParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnHitParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnHitParticle_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// If particles aren't provided, the default game assets will be used at runtime.\n// However, if you disable it here, then no particles will be used.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If particles aren't provided, the default game assets will be used at runtime.\nHowever, if you disable it here, then no particles will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnHitParticle_SetBit(void* Obj)
	{
		((FAscMapKitForcefieldPropertiesOtherEffectsStruct*)Obj)->DisableDefaultOnHitParticle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnHitParticle = { "DisableDefaultOnHitParticle", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitForcefieldPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnHitParticle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnHitParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnHitParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCueLocalTransform_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// If you need to local offset the transform for the effects when they are spawned. Only location and rotation are used. Scale is ignored.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If you need to local offset the transform for the effects when they are spawned. Only location and rotation are used. Scale is ignored." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCueLocalTransform = { "PlayAmbientSoundCueLocalTransform", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesOtherEffectsStruct, PlayAmbientSoundCueLocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCueLocalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCueLocalTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the ambient sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the ambient sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCueSoundClass = { "PlayAmbientSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesOtherEffectsStruct, PlayAmbientSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCue_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom sound to play as an ambient effect for this forcefield. Leave empty for game runtime default.\n// * For example: a electrical buzzing sound.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as an ambient effect for this forcefield. Leave empty for game runtime default.\n* For example: a electrical buzzing sound." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCue = { "PlayAmbientSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesOtherEffectsStruct, PlayAmbientSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesOtherEffectsStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitForcefieldPropertiesOtherEffectsStruct*)Obj)->DisableDefaultPlayAmbientSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue = { "DisableDefaultPlayAmbientSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitForcefieldPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisabledEffectsLocalTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisabledSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisabledSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisabledSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnDisabledSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisabledParticleScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisabledParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnDisabledParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisappearEffectsLocalTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisappearSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisappearSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnDisappearSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnDisappearSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisappearParticleScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnDisappearParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnDisappearParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnAppearEffectsLocalTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnAppearSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnAppearSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnAppearSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnAppearSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnAppearParticleScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnAppearParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnAppearParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnHitSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnHitParticleDelaySeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_OnHitParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnHitParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCueLocalTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitForcefieldPropertiesOtherEffectsStruct",
		sizeof(FAscMapKitForcefieldPropertiesOtherEffectsStruct),
		alignof(FAscMapKitForcefieldPropertiesOtherEffectsStruct),
		Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitForcefieldPropertiesOtherEffectsStruct"), sizeof(FAscMapKitForcefieldPropertiesOtherEffectsStruct), Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct_Hash() { return 305530858U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
