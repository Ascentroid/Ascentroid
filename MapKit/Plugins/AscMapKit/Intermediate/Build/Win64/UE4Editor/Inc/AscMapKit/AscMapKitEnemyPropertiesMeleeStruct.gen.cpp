// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesMeleeStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnemyPropertiesMeleeStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct();
// End Cross Module References
class UScriptStruct* FAscMapKitEnemyPropertiesMeleeStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnemyPropertiesMeleeStruct"), sizeof(FAscMapKitEnemyPropertiesMeleeStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnemyPropertiesMeleeStruct>()
{
	return FAscMapKitEnemyPropertiesMeleeStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct(FAscMapKitEnemyPropertiesMeleeStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnemyPropertiesMeleeStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesMeleeStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesMeleeStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnemyPropertiesMeleeStruct")),new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesMeleeStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesMeleeStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayAttackSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayAttackSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayAttackSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayAttackSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayAttackSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayAttackSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayAttackSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayAttackSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesMeleeStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesMeleeStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_PlayAttackSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesMeleeStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the melee attack sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesMeleeStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the melee attack sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_PlayAttackSoundCueSoundClass = { "PlayAttackSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesMeleeStruct, PlayAttackSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_PlayAttackSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_PlayAttackSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_PlayAttackSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_PlayAttackSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesMeleeStruct" },
		{ "Comment", "// Specify a custom sound to play for the melee attack for this enemy. Leave empty for game runtime default.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesMeleeStruct.h" },
		{ "ToolTip", "Specify a custom sound to play for the melee attack for this enemy. Leave empty for game runtime default." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_PlayAttackSoundCue = { "PlayAttackSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesMeleeStruct, PlayAttackSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_PlayAttackSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_PlayAttackSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_DisableDefaultPlayAttackSoundCue_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesMeleeStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesMeleeStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_DisableDefaultPlayAttackSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesMeleeStruct*)Obj)->DisableDefaultPlayAttackSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_DisableDefaultPlayAttackSoundCue = { "DisableDefaultPlayAttackSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesMeleeStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_DisableDefaultPlayAttackSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_DisableDefaultPlayAttackSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_DisableDefaultPlayAttackSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_DamageAmount_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesMeleeStruct" },
		{ "Comment", "// How much damage is applied during a melee attack.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesMeleeStruct.h" },
		{ "ToolTip", "How much damage is applied during a melee attack." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesMeleeStruct, DamageAmount), Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_DamageAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_DamageAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_Enable_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesMeleeStruct" },
		{ "Comment", "// If enabled, this enemy will engage a melee attack. Negated if used with turrets. This will also disable all weapon attacks.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesMeleeStruct.h" },
		{ "ToolTip", "If enabled, this enemy will engage a melee attack. Negated if used with turrets. This will also disable all weapon attacks." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesMeleeStruct*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesMeleeStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_PlayAttackSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_PlayAttackSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_PlayAttackSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_DisableDefaultPlayAttackSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_DamageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::NewProp_Enable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnemyPropertiesMeleeStruct",
		sizeof(FAscMapKitEnemyPropertiesMeleeStruct),
		alignof(FAscMapKitEnemyPropertiesMeleeStruct),
		Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnemyPropertiesMeleeStruct"), sizeof(FAscMapKitEnemyPropertiesMeleeStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct_Hash() { return 988760029U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
