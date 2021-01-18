// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitDoorPropertiesOtherEffectsStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
class UScriptStruct* FAscMapKitDoorPropertiesOtherEffectsStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitDoorPropertiesOtherEffectsStruct"), sizeof(FAscMapKitDoorPropertiesOtherEffectsStruct), Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitDoorPropertiesOtherEffectsStruct>()
{
	return FAscMapKitDoorPropertiesOtherEffectsStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct(FAscMapKitDoorPropertiesOtherEffectsStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitDoorPropertiesOtherEffectsStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesOtherEffectsStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesOtherEffectsStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitDoorPropertiesOtherEffectsStruct")),new UScriptStruct::TCppStructOps<FAscMapKitDoorPropertiesOtherEffectsStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesOtherEffectsStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayDestroySoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayDestroySoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayDestroySoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayDestroySoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayDestroySoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayDestroySoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayDestroySoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayDestroySoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayUnlockFailedSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayUnlockFailedSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayUnlockFailedSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayUnlockFailedSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayUnlockFailedSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayUnlockFailedSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayUnlockFailedSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayUnlockFailedSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayLockedSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayLockedSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayLockedSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayLockedSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayLockedSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayLockedSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayLockedSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayLockedSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayUnlockSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayUnlockSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayUnlockSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayUnlockSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayUnlockSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayUnlockSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayUnlockSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayUnlockSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayCloseSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayCloseSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayCloseSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayCloseSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayCloseSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayCloseSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayCloseSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayCloseSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayOpenSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayOpenSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayOpenSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayOpenSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayOpenSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayOpenSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayOpenSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayOpenSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayImpactSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayImpactSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayImpactSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayImpactSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayImpactSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayImpactSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayImpactSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayImpactSoundCue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitDoorPropertiesOtherEffectsStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayDestroySoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the destroy sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the destroy sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayDestroySoundCueSoundClass = { "PlayDestroySoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesOtherEffectsStruct, PlayDestroySoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayDestroySoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayDestroySoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayDestroySoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayDestroySoundCue_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom sound to play as a destroyed effect for this door. Leave empty for game runtime default.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as a destroyed effect for this door. Leave empty for game runtime default." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayDestroySoundCue = { "PlayDestroySoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesOtherEffectsStruct, PlayDestroySoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayDestroySoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayDestroySoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayDestroySoundCue_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesOtherEffectsStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayDestroySoundCue_SetBit(void* Obj)
	{
		((FAscMapKitDoorPropertiesOtherEffectsStruct*)Obj)->DisableDefaultPlayDestroySoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayDestroySoundCue = { "DisableDefaultPlayDestroySoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitDoorPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayDestroySoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayDestroySoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayDestroySoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockFailedSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the unlock sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the unlock sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockFailedSoundCueSoundClass = { "PlayUnlockFailedSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesOtherEffectsStruct, PlayUnlockFailedSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockFailedSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockFailedSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockFailedSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockFailedSoundCue_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom sound to play as an \"unlock failed\" effect for this door. Leave empty for game runtime default.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as an \"unlock failed\" effect for this door. Leave empty for game runtime default." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockFailedSoundCue = { "PlayUnlockFailedSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesOtherEffectsStruct, PlayUnlockFailedSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockFailedSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockFailedSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayUnlockFailedSoundCue_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesOtherEffectsStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayUnlockFailedSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitDoorPropertiesOtherEffectsStruct*)Obj)->DisableDefaultPlayUnlockFailedSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayUnlockFailedSoundCue = { "DisableDefaultPlayUnlockFailedSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitDoorPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayUnlockFailedSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayUnlockFailedSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayUnlockFailedSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayLockedSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the locked sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the locked sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayLockedSoundCueSoundClass = { "PlayLockedSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesOtherEffectsStruct, PlayLockedSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayLockedSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayLockedSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayLockedSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayLockedSoundCue_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom sound to play as a lock effect for this door. Leave empty for game runtime default.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as a lock effect for this door. Leave empty for game runtime default." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayLockedSoundCue = { "PlayLockedSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesOtherEffectsStruct, PlayLockedSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayLockedSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayLockedSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayLockedSoundCue_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesOtherEffectsStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayLockedSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitDoorPropertiesOtherEffectsStruct*)Obj)->DisableDefaultPlayLockedSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayLockedSoundCue = { "DisableDefaultPlayLockedSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitDoorPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayLockedSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayLockedSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayLockedSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the unlock sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the unlock sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockSoundCueSoundClass = { "PlayUnlockSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesOtherEffectsStruct, PlayUnlockSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockSoundCue_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom sound to play as an unlock effect for this door. Leave empty for game runtime default.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as an unlock effect for this door. Leave empty for game runtime default." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockSoundCue = { "PlayUnlockSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesOtherEffectsStruct, PlayUnlockSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayUnlockSoundCue_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesOtherEffectsStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayUnlockSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitDoorPropertiesOtherEffectsStruct*)Obj)->DisableDefaultPlayUnlockSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayUnlockSoundCue = { "DisableDefaultPlayUnlockSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitDoorPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayUnlockSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayUnlockSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayUnlockSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayCloseSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the close sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the close sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayCloseSoundCueSoundClass = { "PlayCloseSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesOtherEffectsStruct, PlayCloseSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayCloseSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayCloseSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayCloseSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayCloseSoundCue_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom sound to play as an close effect for this door. Leave empty for game runtime default.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as an close effect for this door. Leave empty for game runtime default." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayCloseSoundCue = { "PlayCloseSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesOtherEffectsStruct, PlayCloseSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayCloseSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayCloseSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayCloseSoundCue_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesOtherEffectsStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayCloseSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitDoorPropertiesOtherEffectsStruct*)Obj)->DisableDefaultPlayCloseSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayCloseSoundCue = { "DisableDefaultPlayCloseSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitDoorPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayCloseSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayCloseSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayCloseSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayOpenSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the open sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the open sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayOpenSoundCueSoundClass = { "PlayOpenSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesOtherEffectsStruct, PlayOpenSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayOpenSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayOpenSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayOpenSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayOpenSoundCue_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom sound to play as an open effect for this door. Leave empty for game runtime default.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as an open effect for this door. Leave empty for game runtime default." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayOpenSoundCue = { "PlayOpenSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesOtherEffectsStruct, PlayOpenSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayOpenSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayOpenSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOpenSoundCue_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesOtherEffectsStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOpenSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitDoorPropertiesOtherEffectsStruct*)Obj)->DisableDefaultPlayOpenSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOpenSoundCue = { "DisableDefaultPlayOpenSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitDoorPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOpenSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOpenSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOpenSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayImpactSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the impact sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the impact sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayImpactSoundCueSoundClass = { "PlayImpactSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesOtherEffectsStruct, PlayImpactSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayImpactSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayImpactSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayImpactSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayImpactSoundCue_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesOtherEffectsStruct" },
		{ "Comment", "// Specify a custom sound to play as an impact effect for this door. Leave empty for game runtime default.\n// * For example: a \"crumble\" sound for a rock wall. Or, a \"ting\" sound for metal.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as an impact effect for this door. Leave empty for game runtime default.\n* For example: a \"crumble\" sound for a rock wall. Or, a \"ting\" sound for metal." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayImpactSoundCue = { "PlayImpactSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesOtherEffectsStruct, PlayImpactSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayImpactSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayImpactSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayImpactSoundCue_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesOtherEffectsStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesOtherEffectsStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayImpactSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitDoorPropertiesOtherEffectsStruct*)Obj)->DisableDefaultPlayImpactSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayImpactSoundCue = { "DisableDefaultPlayImpactSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitDoorPropertiesOtherEffectsStruct), &Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayImpactSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayImpactSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayImpactSoundCue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayDestroySoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayDestroySoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayDestroySoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayDestroySoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockFailedSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockFailedSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockFailedSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayUnlockFailedSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayLockedSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayLockedSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayLockedSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayLockedSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayUnlockSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayUnlockSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayCloseSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayCloseSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayCloseSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayCloseSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayOpenSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayOpenSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayOpenSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayOpenSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayImpactSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayImpactSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_PlayImpactSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::NewProp_DisableDefaultPlayImpactSoundCue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitDoorPropertiesOtherEffectsStruct",
		sizeof(FAscMapKitDoorPropertiesOtherEffectsStruct),
		alignof(FAscMapKitDoorPropertiesOtherEffectsStruct),
		Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitDoorPropertiesOtherEffectsStruct"), sizeof(FAscMapKitDoorPropertiesOtherEffectsStruct), Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesOtherEffectsStruct_Hash() { return 640380040U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
