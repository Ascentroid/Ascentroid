// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesTurretStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnemyPropertiesTurretStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
class UScriptStruct* FAscMapKitEnemyPropertiesTurretStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnemyPropertiesTurretStruct"), sizeof(FAscMapKitEnemyPropertiesTurretStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnemyPropertiesTurretStruct>()
{
	return FAscMapKitEnemyPropertiesTurretStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct(FAscMapKitEnemyPropertiesTurretStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnemyPropertiesTurretStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesTurretStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesTurretStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnemyPropertiesTurretStruct")),new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesTurretStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesTurretStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRotateStopSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayRotateStopSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayRotateStopSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRotateStopSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayRotateStopSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayRotateStopSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayRotateStopSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayRotateStopSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRotateStartSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayRotateStartSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayRotateStartSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRotateStartSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayRotateStartSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayRotateStartSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayRotateStartSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayRotateStartSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRotateSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayRotateSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayRotateSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRotateSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayRotateSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayRotateSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayRotateSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayRotateSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetExplosionAtRootComponent_MetaData[];
#endif
		static void NewProp_SetExplosionAtRootComponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SetExplosionAtRootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrackSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesTurretStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesTurretStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStopSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesTurretStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the turret stop rotate sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesTurretStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the turret stop rotate sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStopSoundCueSoundClass = { "PlayRotateStopSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesTurretStruct, PlayRotateStopSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStopSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStopSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStopSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStopSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesTurretStruct" },
		{ "Comment", "// Specify a custom sound to play when the turret stops rotating. Leave empty for game runtime default.\n// * For example: a mechanical \"wind down\" sound.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesTurretStruct.h" },
		{ "ToolTip", "Specify a custom sound to play when the turret stops rotating. Leave empty for game runtime default.\n* For example: a mechanical \"wind down\" sound." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStopSoundCue = { "PlayRotateStopSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesTurretStruct, PlayRotateStopSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStopSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStopSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_DisableDefaultPlayRotateStopSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesTurretStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesTurretStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_DisableDefaultPlayRotateStopSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesTurretStruct*)Obj)->DisableDefaultPlayRotateStopSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_DisableDefaultPlayRotateStopSoundCue = { "DisableDefaultPlayRotateStopSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesTurretStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_DisableDefaultPlayRotateStopSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_DisableDefaultPlayRotateStopSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_DisableDefaultPlayRotateStopSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStartSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesTurretStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the turret start rotate sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesTurretStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the turret start rotate sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStartSoundCueSoundClass = { "PlayRotateStartSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesTurretStruct, PlayRotateStartSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStartSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStartSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStartSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStartSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesTurretStruct" },
		{ "Comment", "// Specify a custom sound to play when the turret is begins to rotate. Leave empty for game runtime default.\n// * For example: a mechanical \"wind up\" sound.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesTurretStruct.h" },
		{ "ToolTip", "Specify a custom sound to play when the turret is begins to rotate. Leave empty for game runtime default.\n* For example: a mechanical \"wind up\" sound." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStartSoundCue = { "PlayRotateStartSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesTurretStruct, PlayRotateStartSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStartSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStartSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_DisableDefaultPlayRotateStartSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesTurretStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesTurretStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_DisableDefaultPlayRotateStartSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesTurretStruct*)Obj)->DisableDefaultPlayRotateStartSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_DisableDefaultPlayRotateStartSoundCue = { "DisableDefaultPlayRotateStartSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesTurretStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_DisableDefaultPlayRotateStartSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_DisableDefaultPlayRotateStartSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_DisableDefaultPlayRotateStartSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesTurretStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the turret rotate sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesTurretStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the turret rotate sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateSoundCueSoundClass = { "PlayRotateSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesTurretStruct, PlayRotateSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesTurretStruct" },
		{ "Comment", "// Specify a custom sound to play when the turret is rotating. Leave empty for game runtime default.\n// For example: a mechanical grinding/tracking sound.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesTurretStruct.h" },
		{ "ToolTip", "Specify a custom sound to play when the turret is rotating. Leave empty for game runtime default.\nFor example: a mechanical grinding/tracking sound." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateSoundCue = { "PlayRotateSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesTurretStruct, PlayRotateSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_DisableDefaultPlayRotateSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesTurretStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesTurretStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_DisableDefaultPlayRotateSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesTurretStruct*)Obj)->DisableDefaultPlayRotateSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_DisableDefaultPlayRotateSoundCue = { "DisableDefaultPlayRotateSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesTurretStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_DisableDefaultPlayRotateSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_DisableDefaultPlayRotateSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_DisableDefaultPlayRotateSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_SetExplosionAtRootComponent_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesTurretStruct" },
		{ "Comment", "// If set, the explosion particle will be spawned at the \"TurretRoot\" location.\n// If not set, the explosion particle will be spawned at the actor center location.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesTurretStruct.h" },
		{ "ToolTip", "If set, the explosion particle will be spawned at the \"TurretRoot\" location.\nIf not set, the explosion particle will be spawned at the actor center location." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_SetExplosionAtRootComponent_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesTurretStruct*)Obj)->SetExplosionAtRootComponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_SetExplosionAtRootComponent = { "SetExplosionAtRootComponent", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesTurretStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_SetExplosionAtRootComponent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_SetExplosionAtRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_SetExplosionAtRootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_TrackSpeed_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesTurretStruct" },
		{ "Comment", "// How quickly the turret will track a player.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesTurretStruct.h" },
		{ "ToolTip", "How quickly the turret will track a player." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_TrackSpeed = { "TrackSpeed", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesTurretStruct, TrackSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_TrackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_TrackSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_Enable_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesTurretStruct" },
		{ "Comment", "// If enabled, this enemy will behave like a turret. Negates melee configuration.\n// * Turrets must have three static mesh components configured with specific UE4 component names:\n// - \"TurretRoot\": the base of the turret. Acts as the component root. The part that touches the \"ground\" (such as legs).\n// - \"TurretPivot\": the pivot static mesh of the turret.\n// - \"TurretWeapon\": the static mesh with weapon sockets.\n// * Any other static meshes with different component names will still be visible, but their targeting movement will not be controlled by the game runtime.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesTurretStruct.h" },
		{ "ToolTip", "If enabled, this enemy will behave like a turret. Negates melee configuration.\n* Turrets must have three static mesh components configured with specific UE4 component names:\n- \"TurretRoot\": the base of the turret. Acts as the component root. The part that touches the \"ground\" (such as legs).\n- \"TurretPivot\": the pivot static mesh of the turret.\n- \"TurretWeapon\": the static mesh with weapon sockets.\n* Any other static meshes with different component names will still be visible, but their targeting movement will not be controlled by the game runtime." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesTurretStruct*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesTurretStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStopSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStopSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStopSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_DisableDefaultPlayRotateStopSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStartSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStartSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateStartSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_DisableDefaultPlayRotateStartSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_PlayRotateSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_DisableDefaultPlayRotateSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_SetExplosionAtRootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_TrackSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::NewProp_Enable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnemyPropertiesTurretStruct",
		sizeof(FAscMapKitEnemyPropertiesTurretStruct),
		alignof(FAscMapKitEnemyPropertiesTurretStruct),
		Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnemyPropertiesTurretStruct"), sizeof(FAscMapKitEnemyPropertiesTurretStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct_Hash() { return 2486502559U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
