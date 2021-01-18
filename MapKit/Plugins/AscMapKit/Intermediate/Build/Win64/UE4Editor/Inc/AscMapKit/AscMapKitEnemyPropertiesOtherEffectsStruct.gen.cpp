// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnemyPropertiesOtherEffectsStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
class UScriptStruct* FAscMapKitEnemyPropertiesOtherEffectsStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnemyPropertiesOtherEffectsStruct"), sizeof(FAscMapKitEnemyPropertiesOtherEffectsStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnemyPropertiesOtherEffectsStruct>()
{
	return FAscMapKitEnemyPropertiesOtherEffectsStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct(FAscMapKitEnemyPropertiesOtherEffectsStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnemyPropertiesOtherEffectsStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesOtherEffectsStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesOtherEffectsStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnemyPropertiesOtherEffectsStruct")),new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesOtherEffectsStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesOtherEffectsStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChanceToPlayVictorySoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChanceToPlayVictorySoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayVictorySoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayVictorySoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayVictorySoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayVictorySoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayVictorySoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayVictorySoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayVictorySoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayVictorySoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayDeathSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayDeathSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayDeathSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayDeathSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayDeathSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayDeathSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayDeathSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayDeathSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTalkSoundCueRepeatWaitMaximumSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayTalkSoundCueRepeatWaitMaximumSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTalkSoundCueRepeatWaitMinimumSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayTalkSoundCueRepeatWaitMinimumSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTalkSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayTalkSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayTalkSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTalkSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayTalkSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayTalkSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayTalkSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayTalkSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTakeDamageSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayTakeDamageSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayTakeDamageSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTakeDamageSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayTakeDamageSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayTakeDamageSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayTakeDamageSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayTakeDamageSoundCue;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHitRandomParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OnHitRandomParticles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnHitRandomParticles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultOnHitParticles_MetaData[];
#endif
		static void NewProp_DisableDefaultOnHitParticles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultOnHitParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplodeRandomParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExplodeRandomParticles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplodeRandomParticles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultExplodeParticles_MetaData[];
#endif
		static void NewProp_DisableDefaultExplodeParticles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultExplodeParticles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesOtherEffectsStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_ChanceToPlayVictorySoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// A percent value used to randomly play the victory sound when a player dies.\n// 0 to 100 (percent)\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "A percent value used to randomly play the victory sound when a player dies.\n0 to 100 (percent)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_ChanceToPlayVictorySoundCue = { "ChanceToPlayVictorySoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesOtherEffectsStruct, ChanceToPlayVictorySoundCue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_ChanceToPlayVictorySoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_ChanceToPlayVictorySoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayVictorySoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the victory sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the victory sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayVictorySoundCueSoundClass = { "PlayVictorySoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesOtherEffectsStruct, PlayVictorySoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayVictorySoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayVictorySoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayVictorySoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayVictorySoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom sound to play as a victory effect for this enemy. Leave empty for game runtime default.\n// This is played, randomly, when a player dies.\n// * For example: a mechanical, robotic or energy \"laugh\". Be creative.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as a victory effect for this enemy. Leave empty for game runtime default.\nThis is played, randomly, when a player dies.\n* For example: a mechanical, robotic or energy \"laugh\". Be creative." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayVictorySoundCue = { "PlayVictorySoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesOtherEffectsStruct, PlayVictorySoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayVictorySoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayVictorySoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayVictorySoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayVictorySoundCue_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesOtherEffectsStruct*)Obj)->DisableDefaultPlayVictorySoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayVictorySoundCue = { "DisableDefaultPlayVictorySoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayVictorySoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayVictorySoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayVictorySoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayDeathSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the death sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the death sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayDeathSoundCueSoundClass = { "PlayDeathSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesOtherEffectsStruct, PlayDeathSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayDeathSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayDeathSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayDeathSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayDeathSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom sound to play as a death effect for this enemy. Leave empty for game runtime default.\n// * For example: a mechanical, robotic or energy \"scream\". Be creative.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as a death effect for this enemy. Leave empty for game runtime default.\n* For example: a mechanical, robotic or energy \"scream\". Be creative." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayDeathSoundCue = { "PlayDeathSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesOtherEffectsStruct, PlayDeathSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayDeathSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayDeathSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayDeathSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayDeathSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesOtherEffectsStruct*)Obj)->DisableDefaultPlayDeathSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayDeathSoundCue = { "DisableDefaultPlayDeathSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayDeathSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayDeathSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayDeathSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTalkSoundCueRepeatWaitMaximumSeconds_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// A maximum value for how long to wait, in seconds, before the enemy will repeat their \"talk\" sound. The wait value is selected randomly between the minimum and maximum range after each play.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "A maximum value for how long to wait, in seconds, before the enemy will repeat their \"talk\" sound. The wait value is selected randomly between the minimum and maximum range after each play." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTalkSoundCueRepeatWaitMaximumSeconds = { "PlayTalkSoundCueRepeatWaitMaximumSeconds", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesOtherEffectsStruct, PlayTalkSoundCueRepeatWaitMaximumSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTalkSoundCueRepeatWaitMaximumSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTalkSoundCueRepeatWaitMaximumSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTalkSoundCueRepeatWaitMinimumSeconds_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// A minimum value for how long to wait, in seconds, before the enemy will repeat their \"talk\" sound. The wait value is selected randomly between the minimum and maximum range after each play.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "A minimum value for how long to wait, in seconds, before the enemy will repeat their \"talk\" sound. The wait value is selected randomly between the minimum and maximum range after each play." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTalkSoundCueRepeatWaitMinimumSeconds = { "PlayTalkSoundCueRepeatWaitMinimumSeconds", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesOtherEffectsStruct, PlayTalkSoundCueRepeatWaitMinimumSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTalkSoundCueRepeatWaitMinimumSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTalkSoundCueRepeatWaitMinimumSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTalkSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the talk sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the talk sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTalkSoundCueSoundClass = { "PlayTalkSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesOtherEffectsStruct, PlayTalkSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTalkSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTalkSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTalkSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTalkSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom sound to play as a talk effect for this enemy. Leave empty for game runtime default.\n// * For example: a mechanical or robotic saying, like \"Die\". Be creative.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as a talk effect for this enemy. Leave empty for game runtime default.\n* For example: a mechanical or robotic saying, like \"Die\". Be creative." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTalkSoundCue = { "PlayTalkSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesOtherEffectsStruct, PlayTalkSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTalkSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTalkSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayTalkSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayTalkSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesOtherEffectsStruct*)Obj)->DisableDefaultPlayTalkSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayTalkSoundCue = { "DisableDefaultPlayTalkSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayTalkSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayTalkSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayTalkSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTakeDamageSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the damage sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the damage sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTakeDamageSoundCueSoundClass = { "PlayTakeDamageSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesOtherEffectsStruct, PlayTakeDamageSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTakeDamageSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTakeDamageSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTakeDamageSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTakeDamageSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom sound to play as a damage effect for this enemy. Leave empty for game runtime default.\n// * For example: a mechanical scream, or anger sound.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as a damage effect for this enemy. Leave empty for game runtime default.\n* For example: a mechanical scream, or anger sound." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTakeDamageSoundCue = { "PlayTakeDamageSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesOtherEffectsStruct, PlayTakeDamageSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTakeDamageSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTakeDamageSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayTakeDamageSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayTakeDamageSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesOtherEffectsStruct*)Obj)->DisableDefaultPlayTakeDamageSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayTakeDamageSoundCue = { "DisableDefaultPlayTakeDamageSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayTakeDamageSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayTakeDamageSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayTakeDamageSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the on hit sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the on hit sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCueSoundClass = { "PlayOnHitSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesOtherEffectsStruct, PlayOnHitSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom sound to play as an on hit effect for this enemy. Leave empty for game runtime default.\n// * For example: an explosion, or shield hit sound.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as an on hit effect for this enemy. Leave empty for game runtime default.\n* For example: an explosion, or shield hit sound." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCue = { "PlayOnHitSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesOtherEffectsStruct, PlayOnHitSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnHitSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnHitSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesOtherEffectsStruct*)Obj)->DisableDefaultPlayOnHitSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnHitSoundCue = { "DisableDefaultPlayOnHitSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnHitSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnHitSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnHitSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the ambient sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the ambient sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCueSoundClass = { "PlayAmbientSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesOtherEffectsStruct, PlayAmbientSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom sound to play as an ambient effect for this enemy. Leave empty for game runtime default.\n// * For example: a repeating mechanical, engine and/or energy sound.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as an ambient effect for this enemy. Leave empty for game runtime default.\n* For example: a repeating mechanical, engine and/or energy sound." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCue = { "PlayAmbientSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesOtherEffectsStruct, PlayAmbientSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesOtherEffectsStruct*)Obj)->DisableDefaultPlayAmbientSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue = { "DisableDefaultPlayAmbientSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_OnHitRandomParticles_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a collection of particles, which is selected randomly during game runtime, when the enemy is hit by a projectile. Leave empty for game runtime default.\n// * If the collection is empty, it will be ignored.\n// * For example: an explosion, or a shield hit effect.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a collection of particles, which is selected randomly during game runtime, when the enemy is hit by a projectile. Leave empty for game runtime default.\n* If the collection is empty, it will be ignored.\n* For example: an explosion, or a shield hit effect." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_OnHitRandomParticles = { "OnHitRandomParticles", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesOtherEffectsStruct, OnHitRandomParticles), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_OnHitRandomParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_OnHitRandomParticles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_OnHitRandomParticles_Inner = { "OnHitRandomParticles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnHitParticles_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// If particles aren't provided, the default game assets will be used at runtime.\n// However, if you disable it here, then no particles will be used.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If particles aren't provided, the default game assets will be used at runtime.\nHowever, if you disable it here, then no particles will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnHitParticles_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesOtherEffectsStruct*)Obj)->DisableDefaultOnHitParticles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnHitParticles = { "DisableDefaultOnHitParticles", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnHitParticles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnHitParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnHitParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_ExplodeRandomParticles_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a collection of particles, which is selected randomly during game runtime, when the enemy is destroyed. Leave empty for game runtime default.\n// * If the collection is empty, it will be ignored.\n// * For example: a fiery explosion.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a collection of particles, which is selected randomly during game runtime, when the enemy is destroyed. Leave empty for game runtime default.\n* If the collection is empty, it will be ignored.\n* For example: a fiery explosion." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_ExplodeRandomParticles = { "ExplodeRandomParticles", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesOtherEffectsStruct, ExplodeRandomParticles), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_ExplodeRandomParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_ExplodeRandomParticles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_ExplodeRandomParticles_Inner = { "ExplodeRandomParticles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultExplodeParticles_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesOtherEffectsStruct" },
		{ "Comment", "// If particles aren't provided, the default game assets will be used at runtime.\n// However, if you disable it here, then no particles will be used.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If particles aren't provided, the default game assets will be used at runtime.\nHowever, if you disable it here, then no particles will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultExplodeParticles_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesOtherEffectsStruct*)Obj)->DisableDefaultExplodeParticles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultExplodeParticles = { "DisableDefaultExplodeParticles", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultExplodeParticles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultExplodeParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultExplodeParticles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_ChanceToPlayVictorySoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayVictorySoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayVictorySoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayVictorySoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayVictorySoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayDeathSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayDeathSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayDeathSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayDeathSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTalkSoundCueRepeatWaitMaximumSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTalkSoundCueRepeatWaitMinimumSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTalkSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTalkSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTalkSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayTalkSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTakeDamageSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTakeDamageSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayTakeDamageSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayTakeDamageSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayOnHitSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOnHitSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_PlayAmbientSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_OnHitRandomParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_OnHitRandomParticles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultOnHitParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_ExplodeRandomParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_ExplodeRandomParticles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultExplodeParticles,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnemyPropertiesOtherEffectsStruct",
		sizeof(FAscMapKitEnemyPropertiesOtherEffectsStruct),
		alignof(FAscMapKitEnemyPropertiesOtherEffectsStruct),
		Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnemyPropertiesOtherEffectsStruct"), sizeof(FAscMapKitEnemyPropertiesOtherEffectsStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct_Hash() { return 3211239791U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
