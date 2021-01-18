// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
class UScriptStruct* FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct"), sizeof(FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct>()
{
	return FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct(FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct")),new UScriptStruct::TCppStructOps<FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaySoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlaySoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaySoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaySoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaySoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlaySoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlaySoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlaySoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleLocalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticleLocalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Particle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Particle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultParticle_MetaData[];
#endif
		static void NewProp_DisableDefaultParticle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RateSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_PlaySoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the custom damage sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the custom damage sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_PlaySoundCueSoundClass = { "PlaySoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct, PlaySoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_PlaySoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_PlaySoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_PlaySoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_PlaySoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct" },
		{ "Comment", "// Specify a custom sound to play when damage occurs. Leave empty for game runtime default.\n// For example: for electricity, a zapping sound effect.\n// Another example: for lava, a hissing, and/or bubbling effect.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct.h" },
		{ "ToolTip", "Specify a custom sound to play when damage occurs. Leave empty for game runtime default.\nFor example: for electricity, a zapping sound effect.\nAnother example: for lava, a hissing, and/or bubbling effect." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_PlaySoundCue = { "PlaySoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct, PlaySoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_PlaySoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_PlaySoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_DisableDefaultPlaySoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_DisableDefaultPlaySoundCue_SetBit(void* Obj)
	{
		((FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct*)Obj)->DisableDefaultPlaySoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_DisableDefaultPlaySoundCue = { "DisableDefaultPlaySoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct), &Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_DisableDefaultPlaySoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_DisableDefaultPlaySoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_DisableDefaultPlaySoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_ParticleLocalOffset_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct" },
		{ "Comment", "// Specify a local offset for the particle when it executes. This is helpful in case you want to relocate the particle relative to the actor.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct.h" },
		{ "ToolTip", "Specify a local offset for the particle when it executes. This is helpful in case you want to relocate the particle relative to the actor." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_ParticleLocalOffset = { "ParticleLocalOffset", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct, ParticleLocalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_ParticleLocalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_ParticleLocalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_Particle_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct" },
		{ "Comment", "// Specify a custom particle to execute when damage occurs. Leave empty for game runtime default.\n// * For example: for electricity, some kind of electrical effect.\n// * Another example: for lava, a fire effect.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct.h" },
		{ "ToolTip", "Specify a custom particle to execute when damage occurs. Leave empty for game runtime default.\n* For example: for electricity, some kind of electrical effect.\n* Another example: for lava, a fire effect." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct, Particle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_Particle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_Particle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_DisableDefaultParticle_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct" },
		{ "Comment", "// If a particle isn't provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no particles will be used.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct.h" },
		{ "ToolTip", "If a particle isn't provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no particles will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_DisableDefaultParticle_SetBit(void* Obj)
	{
		((FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct*)Obj)->DisableDefaultParticle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_DisableDefaultParticle = { "DisableDefaultParticle", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct), &Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_DisableDefaultParticle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_DisableDefaultParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_DisableDefaultParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_RateSeconds_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct" },
		{ "Comment", "// Specify how often (in seconds) to take away shields amount.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct.h" },
		{ "ToolTip", "Specify how often (in seconds) to take away shields amount." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_RateSeconds = { "RateSeconds", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct, RateSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_RateSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_RateSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct" },
		{ "Comment", "// Specify how much shields to take away during damage.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct.h" },
		{ "ToolTip", "Specify how much shields to take away during damage." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_Amount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_Enable_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct" },
		{ "Comment", "// Check to enable damage against enemies.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct.h" },
		{ "ToolTip", "Check to enable damage against enemies." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct), &Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_PlaySoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_PlaySoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_PlaySoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_DisableDefaultPlaySoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_ParticleLocalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_Particle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_DisableDefaultParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_RateSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::NewProp_Enable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct",
		sizeof(FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct),
		alignof(FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct),
		Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct"), sizeof(FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct_Hash() { return 2816718446U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
