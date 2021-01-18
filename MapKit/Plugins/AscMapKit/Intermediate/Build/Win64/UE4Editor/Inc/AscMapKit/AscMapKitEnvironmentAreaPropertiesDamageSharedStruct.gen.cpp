// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesDamageSharedStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnvironmentAreaPropertiesDamageSharedStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitDamageEventTypeEnum();
// End Cross Module References
class UScriptStruct* FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnvironmentAreaPropertiesDamageSharedStruct"), sizeof(FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct>()
{
	return FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct(FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnvironmentAreaPropertiesDamageSharedStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesDamageSharedStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesDamageSharedStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnvironmentAreaPropertiesDamageSharedStruct")),new UScriptStruct::TCppStructOps<FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesDamageSharedStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayAmbientSoundCueClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayAmbientSoundCueClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayAmbientSoundCueClass_Underlying;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeginPlayActivateDamageDelaySeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BeginPlayActivateDamageDelaySeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoDestroyBombs_MetaData[];
#endif
		static void NewProp_AutoDestroyBombs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoDestroyBombs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamageEventType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamageEventType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesDamageSharedStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_PlayAmbientSoundCueClass_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesDamageSharedStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the ambient damage sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesDamageSharedStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the ambient damage sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_PlayAmbientSoundCueClass = { "PlayAmbientSoundCueClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct, PlayAmbientSoundCueClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_PlayAmbientSoundCueClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_PlayAmbientSoundCueClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_PlayAmbientSoundCueClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_PlayAmbientSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesDamageSharedStruct" },
		{ "Comment", "// Specify a custom sound to play as an ambient effect for the environment area. Leave empty for game runtime default.\n// * This is typically a looping sound effect which plays continuously, like a background sound effect.\n// * For example: an electric area could play a looping sound effect of zapping noises.\n// * Another example: an acid pool could play a looping sound effect of bubbly, hissing noises.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesDamageSharedStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as an ambient effect for the environment area. Leave empty for game runtime default.\n* This is typically a looping sound effect which plays continuously, like a background sound effect.\n* For example: an electric area could play a looping sound effect of zapping noises.\n* Another example: an acid pool could play a looping sound effect of bubbly, hissing noises." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_PlayAmbientSoundCue = { "PlayAmbientSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct, PlayAmbientSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_PlayAmbientSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_PlayAmbientSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesDamageSharedStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesDamageSharedStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct*)Obj)->DisableDefaultPlayAmbientSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue = { "DisableDefaultPlayAmbientSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct), &Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_BeginPlayActivateDamageDelaySeconds_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesDamageSharedStruct" },
		{ "Comment", "// When an actor (such as a player or enemy) spawns, apply a delay (in seconds) to the damage timer before it begins execution.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesDamageSharedStruct.h" },
		{ "ToolTip", "When an actor (such as a player or enemy) spawns, apply a delay (in seconds) to the damage timer before it begins execution." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_BeginPlayActivateDamageDelaySeconds = { "BeginPlayActivateDamageDelaySeconds", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct, BeginPlayActivateDamageDelaySeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_BeginPlayActivateDamageDelaySeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_BeginPlayActivateDamageDelaySeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_AutoDestroyBombs_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesDamageSharedStruct" },
		{ "Comment", "// If checked, when a bomb is dropped in this environment area, and it is configured to apply damage to players or enemies, it will auto destroy itself.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesDamageSharedStruct.h" },
		{ "ToolTip", "If checked, when a bomb is dropped in this environment area, and it is configured to apply damage to players or enemies, it will auto destroy itself." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_AutoDestroyBombs_SetBit(void* Obj)
	{
		((FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct*)Obj)->AutoDestroyBombs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_AutoDestroyBombs = { "AutoDestroyBombs", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct), &Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_AutoDestroyBombs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_AutoDestroyBombs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_AutoDestroyBombs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_DamageEventType_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesDamageSharedStruct" },
		{ "Comment", "// Used by the game runtime to implement the damage event type for this environment area. This value is used by the game runtime to indicate HUD and network messages. It is a separate type so you can customize it differently from the environment area type itself.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesDamageSharedStruct.h" },
		{ "ToolTip", "Used by the game runtime to implement the damage event type for this environment area. This value is used by the game runtime to indicate HUD and network messages. It is a separate type so you can customize it differently from the environment area type itself." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_DamageEventType = { "DamageEventType", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct, DamageEventType), Z_Construct_UEnum_AscMapKit_EAscMapKitDamageEventTypeEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_DamageEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_DamageEventType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_DamageEventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_PlayAmbientSoundCueClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_PlayAmbientSoundCueClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_PlayAmbientSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_BeginPlayActivateDamageDelaySeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_AutoDestroyBombs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_DamageEventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::NewProp_DamageEventType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnvironmentAreaPropertiesDamageSharedStruct",
		sizeof(FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct),
		alignof(FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct),
		Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnvironmentAreaPropertiesDamageSharedStruct"), sizeof(FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct_Hash() { return 217443640U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
