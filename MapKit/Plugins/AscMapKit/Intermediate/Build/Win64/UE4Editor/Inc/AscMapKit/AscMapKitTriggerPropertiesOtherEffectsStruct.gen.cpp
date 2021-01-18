// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesOtherEffectsStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitTriggerPropertiesOtherEffectsStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
class UScriptStruct* FAscMapKitTriggerPropertiesOtherEffectsStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitTriggerPropertiesOtherEffectsStruct"), sizeof(FAscMapKitTriggerPropertiesOtherEffectsStruct), Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitTriggerPropertiesOtherEffectsStruct>()
{
	return FAscMapKitTriggerPropertiesOtherEffectsStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct(FAscMapKitTriggerPropertiesOtherEffectsStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitTriggerPropertiesOtherEffectsStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesOtherEffectsStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesOtherEffectsStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitTriggerPropertiesOtherEffectsStruct")),new UScriptStruct::TCppStructOps<FAscMapKitTriggerPropertiesOtherEffectsStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesOtherEffectsStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayInactiveSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayInactiveSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayInactiveSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayInactiveSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayInactiveSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayInactiveSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayInactiveSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayInactiveSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayActiveMaxExecutionCountReachedSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayActiveMaxExecutionCountReachedSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayActiveMaxExecutionCountReachedSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayActiveMaxExecutionCountReachedSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayActiveMaxExecutionCountReachedSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayActiveMaxExecutionCountReachedSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayActiveMaxExecutionCountReachedSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayActiveMaxExecutionCountReachedSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayActiveOnHitSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayActiveOnHitSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayActiveOnHitSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayActiveOnHitSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayActiveOnHitSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayActiveOnHitSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayActiveOnHitSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayActiveOnHitSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InactiveParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultInactiveParticle_MetaData[];
#endif
		static void NewProp_DisableDefaultInactiveParticle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultInactiveParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveMaxExecutionCountReachedParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveMaxExecutionCountReachedParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultActiveMaxExecutionCountReachedParticle_MetaData[];
#endif
		static void NewProp_DisableDefaultActiveMaxExecutionCountReachedParticle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultActiveMaxExecutionCountReachedParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveOnHitParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveOnHitParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultActiveOnHitParticle_MetaData[];
#endif
		static void NewProp_DisableDefaultActiveOnHitParticle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultActiveOnHitParticle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOtherEffectsStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitTriggerPropertiesOtherEffectsStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayInactiveSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the ambient sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the ambient sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayInactiveSoundCueSoundClass = { "PlayInactiveSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesOtherEffectsStruct, PlayInactiveSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayInactiveSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayInactiveSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayInactiveSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayInactiveSoundCue_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom sound to play as an inactive effect for this trigger. Leave empty for game runtime default.\n// * For example: for a mechanical trigger, like a deactivated beep sound.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as an inactive effect for this trigger. Leave empty for game runtime default.\n* For example: for a mechanical trigger, like a deactivated beep sound." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayInactiveSoundCue = { "PlayInactiveSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesOtherEffectsStruct, PlayInactiveSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayInactiveSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayInactiveSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayInactiveSoundCue_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOtherEffectsStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayInactiveSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesOtherEffectsStruct*)Obj)->DisableDefaultPlayInactiveSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayInactiveSoundCue = { "DisableDefaultPlayInactiveSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayInactiveSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayInactiveSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayInactiveSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveMaxExecutionCountReachedSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the ambient sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the ambient sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveMaxExecutionCountReachedSoundCueSoundClass = { "PlayActiveMaxExecutionCountReachedSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesOtherEffectsStruct, PlayActiveMaxExecutionCountReachedSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveMaxExecutionCountReachedSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveMaxExecutionCountReachedSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveMaxExecutionCountReachedSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveMaxExecutionCountReachedSoundCue_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom sound to play as an activation effect for this trigger. Leave empty for game runtime default.\n// * For example: for a mechanical trigger, like an activated beep sound.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as an activation effect for this trigger. Leave empty for game runtime default.\n* For example: for a mechanical trigger, like an activated beep sound." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveMaxExecutionCountReachedSoundCue = { "PlayActiveMaxExecutionCountReachedSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesOtherEffectsStruct, PlayActiveMaxExecutionCountReachedSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveMaxExecutionCountReachedSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveMaxExecutionCountReachedSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayActiveMaxExecutionCountReachedSoundCue_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOtherEffectsStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayActiveMaxExecutionCountReachedSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesOtherEffectsStruct*)Obj)->DisableDefaultPlayActiveMaxExecutionCountReachedSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayActiveMaxExecutionCountReachedSoundCue = { "DisableDefaultPlayActiveMaxExecutionCountReachedSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayActiveMaxExecutionCountReachedSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayActiveMaxExecutionCountReachedSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayActiveMaxExecutionCountReachedSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveOnHitSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the on hit sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the on hit sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveOnHitSoundCueSoundClass = { "PlayActiveOnHitSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesOtherEffectsStruct, PlayActiveOnHitSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveOnHitSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveOnHitSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveOnHitSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveOnHitSoundCue_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom sound to play as an on hit effect for this trigger while it is in an active state. Leave empty for game runtime default.\n// * For example: for a mechanical trigger, like a metal/spark hit sound.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as an on hit effect for this trigger while it is in an active state. Leave empty for game runtime default.\n* For example: for a mechanical trigger, like a metal/spark hit sound." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveOnHitSoundCue = { "PlayActiveOnHitSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesOtherEffectsStruct, PlayActiveOnHitSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveOnHitSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveOnHitSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayActiveOnHitSoundCue_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOtherEffectsStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayActiveOnHitSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesOtherEffectsStruct*)Obj)->DisableDefaultPlayActiveOnHitSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayActiveOnHitSoundCue = { "DisableDefaultPlayActiveOnHitSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayActiveOnHitSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayActiveOnHitSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayActiveOnHitSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_InactiveParticle_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom particle to play as an inactive effect for this trigger. Leave empty for game runtime default.\n// * For example: for a mechanical trigger, perhaps smoke since it's no longer active (i.e. destroyed).\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom particle to play as an inactive effect for this trigger. Leave empty for game runtime default.\n* For example: for a mechanical trigger, perhaps smoke since it's no longer active (i.e. destroyed)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_InactiveParticle = { "InactiveParticle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesOtherEffectsStruct, InactiveParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_InactiveParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_InactiveParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultInactiveParticle_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOtherEffectsStruct" },
		{ "Comment", "// If particles aren't provided, the default game assets will be used at runtime.\n// However, if you disable it here, then no particles will be used.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If particles aren't provided, the default game assets will be used at runtime.\nHowever, if you disable it here, then no particles will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultInactiveParticle_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesOtherEffectsStruct*)Obj)->DisableDefaultInactiveParticle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultInactiveParticle = { "DisableDefaultInactiveParticle", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultInactiveParticle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultInactiveParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultInactiveParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_ActiveMaxExecutionCountReachedParticle_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom particle to play as an activation effect for this trigger. Leave empty for game runtime default.\n// * For example: for a mechanical trigger, like an electric explosion particle.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom particle to play as an activation effect for this trigger. Leave empty for game runtime default.\n* For example: for a mechanical trigger, like an electric explosion particle." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_ActiveMaxExecutionCountReachedParticle = { "ActiveMaxExecutionCountReachedParticle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesOtherEffectsStruct, ActiveMaxExecutionCountReachedParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_ActiveMaxExecutionCountReachedParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_ActiveMaxExecutionCountReachedParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultActiveMaxExecutionCountReachedParticle_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOtherEffectsStruct" },
		{ "Comment", "// If particles aren't provided, the default game assets will be used at runtime.\n// However, if you disable it here, then no particles will be used.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If particles aren't provided, the default game assets will be used at runtime.\nHowever, if you disable it here, then no particles will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultActiveMaxExecutionCountReachedParticle_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesOtherEffectsStruct*)Obj)->DisableDefaultActiveMaxExecutionCountReachedParticle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultActiveMaxExecutionCountReachedParticle = { "DisableDefaultActiveMaxExecutionCountReachedParticle", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultActiveMaxExecutionCountReachedParticle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultActiveMaxExecutionCountReachedParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultActiveMaxExecutionCountReachedParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_ActiveOnHitParticle_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom particle to play as an on hit effect for this trigger while it is in an active state. Leave empty for game runtime default.\n// * For example: for a mechanical trigger, like a metal/spark hit particle.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom particle to play as an on hit effect for this trigger while it is in an active state. Leave empty for game runtime default.\n* For example: for a mechanical trigger, like a metal/spark hit particle." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_ActiveOnHitParticle = { "ActiveOnHitParticle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesOtherEffectsStruct, ActiveOnHitParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_ActiveOnHitParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_ActiveOnHitParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultActiveOnHitParticle_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOtherEffectsStruct" },
		{ "Comment", "// If particles aren't provided, the default game assets will be used at runtime.\n// However, if you disable it here, then no particles will be used.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If particles aren't provided, the default game assets will be used at runtime.\nHowever, if you disable it here, then no particles will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultActiveOnHitParticle_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesOtherEffectsStruct*)Obj)->DisableDefaultActiveOnHitParticle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultActiveOnHitParticle = { "DisableDefaultActiveOnHitParticle", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultActiveOnHitParticle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultActiveOnHitParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultActiveOnHitParticle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayInactiveSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayInactiveSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayInactiveSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayInactiveSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveMaxExecutionCountReachedSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveMaxExecutionCountReachedSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveMaxExecutionCountReachedSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayActiveMaxExecutionCountReachedSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveOnHitSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveOnHitSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_PlayActiveOnHitSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayActiveOnHitSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_InactiveParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultInactiveParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_ActiveMaxExecutionCountReachedParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultActiveMaxExecutionCountReachedParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_ActiveOnHitParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultActiveOnHitParticle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitTriggerPropertiesOtherEffectsStruct",
		sizeof(FAscMapKitTriggerPropertiesOtherEffectsStruct),
		alignof(FAscMapKitTriggerPropertiesOtherEffectsStruct),
		Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitTriggerPropertiesOtherEffectsStruct"), sizeof(FAscMapKitTriggerPropertiesOtherEffectsStruct), Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct_Hash() { return 4262295928U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
