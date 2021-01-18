// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnvironmentAreaPropertiesStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamagePlayersStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerShakingStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerStationStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesCollisionStruct();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitEnvironmentAreaTypeEnum();
// End Cross Module References
class UScriptStruct* FAscMapKitEnvironmentAreaPropertiesStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnvironmentAreaPropertiesStruct"), sizeof(FAscMapKitEnvironmentAreaPropertiesStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnvironmentAreaPropertiesStruct>()
{
	return FAscMapKitEnvironmentAreaPropertiesStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct(FAscMapKitEnvironmentAreaPropertiesStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnvironmentAreaPropertiesStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnvironmentAreaPropertiesStruct")),new UScriptStruct::TCppStructOps<FAscMapKitEnvironmentAreaPropertiesStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherEffects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplashDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplashDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEnemies_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageEnemies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagePlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamagePlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageShared_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageShared;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyMovementModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnemyMovementModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerupMovementModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PowerupMovementModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectileMovementModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerMovementModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerMovementModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerShaking_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerShaking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaterDrips_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaterDrips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcess_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerStation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PowerStation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Collision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentAreaType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnvironmentAreaType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnvironmentAreaType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentAreaName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EnvironmentAreaName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnvironmentAreaPropertiesStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_OtherEffects_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_OtherEffects = { "OtherEffects", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesStruct, OtherEffects), Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesOtherEffects, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_OtherEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_OtherEffects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_SplashDamage_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_SplashDamage = { "SplashDamage", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesStruct, SplashDamage), Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_SplashDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_SplashDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_DamageEnemies_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_DamageEnemies = { "DamageEnemies", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesStruct, DamageEnemies), Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageEnemiesStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_DamageEnemies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_DamageEnemies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_DamagePlayers_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_DamagePlayers = { "DamagePlayers", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesStruct, DamagePlayers), Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamagePlayersStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_DamagePlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_DamagePlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_DamageShared_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_DamageShared = { "DamageShared", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesStruct, DamageShared), Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesDamageSharedStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_DamageShared_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_DamageShared_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_EnemyMovementModifier_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_EnemyMovementModifier = { "EnemyMovementModifier", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesStruct, EnemyMovementModifier), Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_EnemyMovementModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_EnemyMovementModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PowerupMovementModifier_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PowerupMovementModifier = { "PowerupMovementModifier", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesStruct, PowerupMovementModifier), Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PowerupMovementModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PowerupMovementModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_ProjectileMovementModifier_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_ProjectileMovementModifier = { "ProjectileMovementModifier", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesStruct, ProjectileMovementModifier), Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_ProjectileMovementModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_ProjectileMovementModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PlayerMovementModifier_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PlayerMovementModifier = { "PlayerMovementModifier", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesStruct, PlayerMovementModifier), Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PlayerMovementModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PlayerMovementModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PlayerShaking_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PlayerShaking = { "PlayerShaking", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesStruct, PlayerShaking), Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerShakingStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PlayerShaking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PlayerShaking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_WaterDrips_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_WaterDrips = { "WaterDrips", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesStruct, WaterDrips), Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_WaterDrips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_WaterDrips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PostProcess_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PostProcess = { "PostProcess", nullptr, (EPropertyFlags)0x0010008001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesStruct, PostProcess), Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PostProcess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PostProcess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PowerStation_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PowerStation = { "PowerStation", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesStruct, PowerStation), Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerStationStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PowerStation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PowerStation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_Collision_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesStruct, Collision), Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesCollisionStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_Collision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_Collision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_EnvironmentAreaType_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesStruct" },
		{ "Comment", "// Used by the game runtime to identify the environment area type.\n// * If you specify \"Power Station without Effects\", the game runtime will force the environment area to behave as a Power Station, and will ignore any custom effects specified from other map kit properties.\n// * If you specify \"Power Station with Effects\", the game runtime will force the environment area to behave as a Power Station, but you can also apply custom effects specified from other map kit properties.\n// * If you selected a Power Station type, the Power Station option will auto-enable at runtime.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesStruct.h" },
		{ "ToolTip", "Used by the game runtime to identify the environment area type.\n* If you specify \"Power Station without Effects\", the game runtime will force the environment area to behave as a Power Station, and will ignore any custom effects specified from other map kit properties.\n* If you specify \"Power Station with Effects\", the game runtime will force the environment area to behave as a Power Station, but you can also apply custom effects specified from other map kit properties.\n* If you selected a Power Station type, the Power Station option will auto-enable at runtime." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_EnvironmentAreaType = { "EnvironmentAreaType", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesStruct, EnvironmentAreaType), Z_Construct_UEnum_AscMapKit_EAscMapKitEnvironmentAreaTypeEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_EnvironmentAreaType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_EnvironmentAreaType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_EnvironmentAreaType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_EnvironmentAreaName_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesStruct" },
		{ "Comment", "// Optional. If you enter an environment area name here, it will be used for HUD messages.\n// This will also override the Damage Event Type (under Damage Shared) used for HUD messages.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesStruct.h" },
		{ "ToolTip", "Optional. If you enter an environment area name here, it will be used for HUD messages.\nThis will also override the Damage Event Type (under Damage Shared) used for HUD messages." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_EnvironmentAreaName = { "EnvironmentAreaName", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesStruct, EnvironmentAreaName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_EnvironmentAreaName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_EnvironmentAreaName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_OtherEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_SplashDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_DamageEnemies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_DamagePlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_DamageShared,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_EnemyMovementModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PowerupMovementModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_ProjectileMovementModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PlayerMovementModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PlayerShaking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_WaterDrips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PostProcess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_PowerStation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_Collision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_EnvironmentAreaType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_EnvironmentAreaType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::NewProp_EnvironmentAreaName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnvironmentAreaPropertiesStruct",
		sizeof(FAscMapKitEnvironmentAreaPropertiesStruct),
		alignof(FAscMapKitEnvironmentAreaPropertiesStruct),
		Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnvironmentAreaPropertiesStruct"), sizeof(FAscMapKitEnvironmentAreaPropertiesStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesStruct_Hash() { return 147418024U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
