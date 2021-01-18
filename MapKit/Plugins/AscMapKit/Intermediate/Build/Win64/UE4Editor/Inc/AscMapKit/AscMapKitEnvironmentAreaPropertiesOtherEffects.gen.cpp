// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesOtherEffects.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnvironmentAreaPropertiesOtherEffects() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
class UScriptStruct* FAscMapKitEnvironmentAreaPropertiesOtherEffects::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnvironmentAreaPropertiesOtherEffects"), sizeof(FAscMapKitEnvironmentAreaPropertiesOtherEffects), Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnvironmentAreaPropertiesOtherEffects>()
{
	return FAscMapKitEnvironmentAreaPropertiesOtherEffects::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects(FAscMapKitEnvironmentAreaPropertiesOtherEffects::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnvironmentAreaPropertiesOtherEffects"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesOtherEffects
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesOtherEffects()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnvironmentAreaPropertiesOtherEffects")),new UScriptStruct::TCppStructOps<FAscMapKitEnvironmentAreaPropertiesOtherEffects>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesOtherEffects;
	struct Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOverlapEndSoundCueClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OnOverlapEndSoundCueClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OnOverlapEndSoundCueClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOverlapEndSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnOverlapEndSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultOnOverlapEndSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultOnOverlapEndSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultOnOverlapEndSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOverlapSoundCueClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OnOverlapSoundCueClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OnOverlapSoundCueClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOverlapSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnOverlapSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultOnOverlapSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultOnOverlapSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultOnOverlapSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayerAmbientSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentPlayerAmbientSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentPlayerAmbientSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayerAmbientSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentPlayerAmbientSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultCurrentPlayerAmbientSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultCurrentPlayerAmbientSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultCurrentPlayerAmbientSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneralAmbientSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GeneralAmbientSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GeneralAmbientSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneralAmbientSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeneralAmbientSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultGeneralAmbientSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultGeneralAmbientSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultGeneralAmbientSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChanceToSpawnOnOverlapAttachParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChanceToSpawnOnOverlapAttachParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOverlapAttachParticleToActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnOverlapAttachParticleToActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultOnOverlapAttachParticleToActor_MetaData[];
#endif
		static void NewProp_DisableDefaultOnOverlapAttachParticleToActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultOnOverlapAttachParticleToActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOverlapEndRandomParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OnOverlapEndRandomParticles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnOverlapEndRandomParticles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultOnOverlapEndRandomParticles_MetaData[];
#endif
		static void NewProp_DisableDefaultOnOverlapEndRandomParticles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultOnOverlapEndRandomParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOverlapRandomParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OnOverlapRandomParticles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnOverlapRandomParticles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultOnOverlapRandomParticles_MetaData[];
#endif
		static void NewProp_DisableDefaultOnOverlapRandomParticles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultOnOverlapRandomParticles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesOtherEffects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnvironmentAreaPropertiesOtherEffects>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapEndSoundCueClass_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesOtherEffects" },
		{ "Comment", "// Specify a custom game runtime sound class for the on overlap end sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesOtherEffects.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the on overlap end sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapEndSoundCueClass = { "OnOverlapEndSoundCueClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesOtherEffects, OnOverlapEndSoundCueClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapEndSoundCueClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapEndSoundCueClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapEndSoundCueClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapEndSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesOtherEffects" },
		{ "Comment", "// Specify a custom sound to play when an overlap end occurs on this environment area. Leave empty for game runtime default.\n// * For example: for water, a splash sound effect.\n// * Another example: for lava, an explosion sound effect.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesOtherEffects.h" },
		{ "ToolTip", "Specify a custom sound to play when an overlap end occurs on this environment area. Leave empty for game runtime default.\n* For example: for water, a splash sound effect.\n* Another example: for lava, an explosion sound effect." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapEndSoundCue = { "OnOverlapEndSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesOtherEffects, OnOverlapEndSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapEndSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapEndSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapEndSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesOtherEffects" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesOtherEffects.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapEndSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitEnvironmentAreaPropertiesOtherEffects*)Obj)->DisableDefaultOnOverlapEndSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapEndSoundCue = { "DisableDefaultOnOverlapEndSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnvironmentAreaPropertiesOtherEffects), &Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapEndSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapEndSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapEndSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapSoundCueClass_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesOtherEffects" },
		{ "Comment", "// Specify a custom game runtime sound class for the on overlap sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesOtherEffects.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the on overlap sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapSoundCueClass = { "OnOverlapSoundCueClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesOtherEffects, OnOverlapSoundCueClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapSoundCueClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapSoundCueClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapSoundCueClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesOtherEffects" },
		{ "Comment", "// Specify a custom sound to play when an overlap occurs on this environment area. Leave empty for game runtime default.\n// * For example: for water, a splash sound effect.\n// * Another example: for lava, an explosion sound effect.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesOtherEffects.h" },
		{ "ToolTip", "Specify a custom sound to play when an overlap occurs on this environment area. Leave empty for game runtime default.\n* For example: for water, a splash sound effect.\n* Another example: for lava, an explosion sound effect." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapSoundCue = { "OnOverlapSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesOtherEffects, OnOverlapSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesOtherEffects" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesOtherEffects.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitEnvironmentAreaPropertiesOtherEffects*)Obj)->DisableDefaultOnOverlapSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapSoundCue = { "DisableDefaultOnOverlapSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnvironmentAreaPropertiesOtherEffects), &Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_CurrentPlayerAmbientSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesOtherEffects" },
		{ "Comment", "// Specify a custom game runtime sound class for the current player ambient sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesOtherEffects.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the current player ambient sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_CurrentPlayerAmbientSoundCueSoundClass = { "CurrentPlayerAmbientSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesOtherEffects, CurrentPlayerAmbientSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_CurrentPlayerAmbientSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_CurrentPlayerAmbientSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_CurrentPlayerAmbientSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_CurrentPlayerAmbientSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesOtherEffects" },
		{ "Comment", "// Specify a custom sound to play as an ambient effect for the environment area, but only played for the current player when they are inside the area. Leave empty for game runtime default.\n// * This is typically a looping sound effect which plays continuously, like a background sound effect, but only the current player.\n// * For example: for water, a low frequency constant noise ambient sound effect.\n// * Another example: for lava, hissing and bubbling ambient sound effects.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesOtherEffects.h" },
		{ "ToolTip", "Specify a custom sound to play as an ambient effect for the environment area, but only played for the current player when they are inside the area. Leave empty for game runtime default.\n* This is typically a looping sound effect which plays continuously, like a background sound effect, but only the current player.\n* For example: for water, a low frequency constant noise ambient sound effect.\n* Another example: for lava, hissing and bubbling ambient sound effects." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_CurrentPlayerAmbientSoundCue = { "CurrentPlayerAmbientSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesOtherEffects, CurrentPlayerAmbientSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_CurrentPlayerAmbientSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_CurrentPlayerAmbientSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultCurrentPlayerAmbientSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesOtherEffects" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesOtherEffects.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultCurrentPlayerAmbientSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitEnvironmentAreaPropertiesOtherEffects*)Obj)->DisableDefaultCurrentPlayerAmbientSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultCurrentPlayerAmbientSoundCue = { "DisableDefaultCurrentPlayerAmbientSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnvironmentAreaPropertiesOtherEffects), &Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultCurrentPlayerAmbientSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultCurrentPlayerAmbientSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultCurrentPlayerAmbientSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_GeneralAmbientSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesOtherEffects" },
		{ "Comment", "// Specify a custom game runtime sound class for the general ambient sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesOtherEffects.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the general ambient sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_GeneralAmbientSoundCueSoundClass = { "GeneralAmbientSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesOtherEffects, GeneralAmbientSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_GeneralAmbientSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_GeneralAmbientSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_GeneralAmbientSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_GeneralAmbientSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesOtherEffects" },
		{ "Comment", "// Specify a custom sound to play as a general ambient effect for the environment area. This is played for all players and extends beyond being inside the area. Leave empty for game runtime default.\n// * For example: a power station hum effect.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesOtherEffects.h" },
		{ "ToolTip", "Specify a custom sound to play as a general ambient effect for the environment area. This is played for all players and extends beyond being inside the area. Leave empty for game runtime default.\n* For example: a power station hum effect." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_GeneralAmbientSoundCue = { "GeneralAmbientSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesOtherEffects, GeneralAmbientSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_GeneralAmbientSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_GeneralAmbientSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultGeneralAmbientSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesOtherEffects" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesOtherEffects.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultGeneralAmbientSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitEnvironmentAreaPropertiesOtherEffects*)Obj)->DisableDefaultGeneralAmbientSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultGeneralAmbientSoundCue = { "DisableDefaultGeneralAmbientSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnvironmentAreaPropertiesOtherEffects), &Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultGeneralAmbientSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultGeneralAmbientSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultGeneralAmbientSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_ChanceToSpawnOnOverlapAttachParticle_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesOtherEffects" },
		{ "Comment", "// A percentage (0 to 100) chance for the \"On Overlap Attach Particle to Actor\" particle to execute when an overlap end occurs on this environment area.\n// * This could be useful for tweaking performance. If you do not want a lot of particles to spawn, lower the percentage value here.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesOtherEffects.h" },
		{ "ToolTip", "A percentage (0 to 100) chance for the \"On Overlap Attach Particle to Actor\" particle to execute when an overlap end occurs on this environment area.\n* This could be useful for tweaking performance. If you do not want a lot of particles to spawn, lower the percentage value here." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_ChanceToSpawnOnOverlapAttachParticle = { "ChanceToSpawnOnOverlapAttachParticle", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesOtherEffects, ChanceToSpawnOnOverlapAttachParticle), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_ChanceToSpawnOnOverlapAttachParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_ChanceToSpawnOnOverlapAttachParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapAttachParticleToActor_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesOtherEffects" },
		{ "Comment", "// Specify a particle to attach to the actor when an overlap occurs on this environment area. Leave empty for game runtime default.\n// * For example: bubbles as a water trail for a projectile.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesOtherEffects.h" },
		{ "ToolTip", "Specify a particle to attach to the actor when an overlap occurs on this environment area. Leave empty for game runtime default.\n* For example: bubbles as a water trail for a projectile." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapAttachParticleToActor = { "OnOverlapAttachParticleToActor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesOtherEffects, OnOverlapAttachParticleToActor), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapAttachParticleToActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapAttachParticleToActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapAttachParticleToActor_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesOtherEffects" },
		{ "Comment", "// If particles aren't provided, the default game assets will be used at runtime.\n// However, if you disable it here, then no particles will be used.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesOtherEffects.h" },
		{ "ToolTip", "If particles aren't provided, the default game assets will be used at runtime.\nHowever, if you disable it here, then no particles will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapAttachParticleToActor_SetBit(void* Obj)
	{
		((FAscMapKitEnvironmentAreaPropertiesOtherEffects*)Obj)->DisableDefaultOnOverlapAttachParticleToActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapAttachParticleToActor = { "DisableDefaultOnOverlapAttachParticleToActor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnvironmentAreaPropertiesOtherEffects), &Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapAttachParticleToActor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapAttachParticleToActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapAttachParticleToActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapEndRandomParticles_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesOtherEffects" },
		{ "Comment", "// Specify a collection of particles, which is selected randomly during game runtime, when an overlap end occurs on this environment area. Leave empty for game runtime default.\n// * If the collection is empty, it will be ignored.\n// * For example: a water splash upon actor (projectile, player, enemy) exit.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesOtherEffects.h" },
		{ "ToolTip", "Specify a collection of particles, which is selected randomly during game runtime, when an overlap end occurs on this environment area. Leave empty for game runtime default.\n* If the collection is empty, it will be ignored.\n* For example: a water splash upon actor (projectile, player, enemy) exit." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapEndRandomParticles = { "OnOverlapEndRandomParticles", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesOtherEffects, OnOverlapEndRandomParticles), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapEndRandomParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapEndRandomParticles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapEndRandomParticles_Inner = { "OnOverlapEndRandomParticles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapEndRandomParticles_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesOtherEffects" },
		{ "Comment", "// If particles aren't provided, the default game assets will be used at runtime.\n// However, if you disable it here, then no particles will be used.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesOtherEffects.h" },
		{ "ToolTip", "If particles aren't provided, the default game assets will be used at runtime.\nHowever, if you disable it here, then no particles will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapEndRandomParticles_SetBit(void* Obj)
	{
		((FAscMapKitEnvironmentAreaPropertiesOtherEffects*)Obj)->DisableDefaultOnOverlapEndRandomParticles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapEndRandomParticles = { "DisableDefaultOnOverlapEndRandomParticles", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnvironmentAreaPropertiesOtherEffects), &Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapEndRandomParticles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapEndRandomParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapEndRandomParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapRandomParticles_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesOtherEffects" },
		{ "Comment", "// Specify a collection of particles, which is selected randomly during game runtime, when an overlap occurs on this environment area. Leave empty for game runtime default.\n// * If the collection is empty, it will be ignored.\n// * For example: a water splash upon actor (projectile, player, enemy) entry.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesOtherEffects.h" },
		{ "ToolTip", "Specify a collection of particles, which is selected randomly during game runtime, when an overlap occurs on this environment area. Leave empty for game runtime default.\n* If the collection is empty, it will be ignored.\n* For example: a water splash upon actor (projectile, player, enemy) entry." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapRandomParticles = { "OnOverlapRandomParticles", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesOtherEffects, OnOverlapRandomParticles), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapRandomParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapRandomParticles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapRandomParticles_Inner = { "OnOverlapRandomParticles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapRandomParticles_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesOtherEffects" },
		{ "Comment", "// If particles aren't provided, the default game assets will be used at runtime.\n// However, if you disable it here, then no particles will be used.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesOtherEffects.h" },
		{ "ToolTip", "If particles aren't provided, the default game assets will be used at runtime.\nHowever, if you disable it here, then no particles will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapRandomParticles_SetBit(void* Obj)
	{
		((FAscMapKitEnvironmentAreaPropertiesOtherEffects*)Obj)->DisableDefaultOnOverlapRandomParticles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapRandomParticles = { "DisableDefaultOnOverlapRandomParticles", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnvironmentAreaPropertiesOtherEffects), &Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapRandomParticles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapRandomParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapRandomParticles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapEndSoundCueClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapEndSoundCueClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapEndSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapEndSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapSoundCueClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapSoundCueClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_CurrentPlayerAmbientSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_CurrentPlayerAmbientSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_CurrentPlayerAmbientSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultCurrentPlayerAmbientSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_GeneralAmbientSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_GeneralAmbientSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_GeneralAmbientSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultGeneralAmbientSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_ChanceToSpawnOnOverlapAttachParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapAttachParticleToActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapAttachParticleToActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapEndRandomParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapEndRandomParticles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapEndRandomParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapRandomParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_OnOverlapRandomParticles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::NewProp_DisableDefaultOnOverlapRandomParticles,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnvironmentAreaPropertiesOtherEffects",
		sizeof(FAscMapKitEnvironmentAreaPropertiesOtherEffects),
		alignof(FAscMapKitEnvironmentAreaPropertiesOtherEffects),
		Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnvironmentAreaPropertiesOtherEffects"), sizeof(FAscMapKitEnvironmentAreaPropertiesOtherEffects), Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects_Hash() { return 4283282726U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
