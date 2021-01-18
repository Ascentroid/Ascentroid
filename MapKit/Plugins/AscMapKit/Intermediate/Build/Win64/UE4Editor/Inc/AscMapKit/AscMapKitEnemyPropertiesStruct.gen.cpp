// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnemyPropertiesStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPursueStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitEnemyTypeEnum();
	ASCMAPKIT_API UClass* Z_Construct_UClass_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_NoRegister();
// End Cross Module References
class UScriptStruct* FAscMapKitEnemyPropertiesStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnemyPropertiesStruct"), sizeof(FAscMapKitEnemyPropertiesStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnemyPropertiesStruct>()
{
	return FAscMapKitEnemyPropertiesStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnemyPropertiesStruct(FAscMapKitEnemyPropertiesStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnemyPropertiesStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnemyPropertiesStruct")),new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Howlers_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Howlers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplashDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplashDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stun_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dodge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dodge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pursue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pursue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Targeting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Targeting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapons_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Weapons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Turret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Turret;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Melee_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Melee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Colors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnemyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnemyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGameRuntimeBoundingBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultGameRuntimeBoundingBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_OtherEffects_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_OtherEffects = { "OtherEffects", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesStruct, OtherEffects), Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesOtherEffectsStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_OtherEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_OtherEffects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Howlers_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Howlers = { "Howlers", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesStruct, Howlers), Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Howlers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Howlers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_SplashDamage_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_SplashDamage = { "SplashDamage", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesStruct, SplashDamage), Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_SplashDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_SplashDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Stun_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Stun = { "Stun", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesStruct, Stun), Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Stun_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Stun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Dodge_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Dodge = { "Dodge", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesStruct, Dodge), Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Dodge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Dodge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Pursue_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Pursue = { "Pursue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesStruct, Pursue), Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPursueStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Pursue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Pursue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Targeting_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Targeting = { "Targeting", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesStruct, Targeting), Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Targeting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Targeting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesStruct, Points), Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Points_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Weapons_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Weapons = { "Weapons", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesStruct, Weapons), Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Weapons_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Weapons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Turret_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Turret = { "Turret", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesStruct, Turret), Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTurretStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Turret_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Turret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Melee_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Melee = { "Melee", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesStruct, Melee), Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesMeleeStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Melee_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Melee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Colors_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesStruct, Colors), Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Colors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Colors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesStruct, Status), Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStruct" },
		{ "Comment", "// Used by the game runtime to display the enemy name.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStruct.h" },
		{ "ToolTip", "Used by the game runtime to display the enemy name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesStruct, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_EnemyType_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStruct" },
		{ "Comment", "// Used by the game runtime to identify the enemy type.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStruct.h" },
		{ "ToolTip", "Used by the game runtime to identify the enemy type." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_EnemyType = { "EnemyType", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesStruct, EnemyType), Z_Construct_UEnum_AscMapKit_EAscMapKitEnemyTypeEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_EnemyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_EnemyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_EnemyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_DefaultGameRuntimeBoundingBox_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStruct" },
		{ "Comment", "// The game runtime default collision size of this enemy. This is to give you an idea of the default enemy bounding box dimensions.\n// * We cannot distribute the 3D mesh data in the map kit because the majority of them are commercially licensed art assets.\n// * Manually changing these values will have no effect on the game runtime. This is purely for editor visual assistance.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStruct.h" },
		{ "ToolTip", "The game runtime default collision size of this enemy. This is to give you an idea of the default enemy bounding box dimensions.\n* We cannot distribute the 3D mesh data in the map kit because the majority of them are commercially licensed art assets.\n* Manually changing these values will have no effect on the game runtime. This is purely for editor visual assistance." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_DefaultGameRuntimeBoundingBox = { "DefaultGameRuntimeBoundingBox", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesStruct, DefaultGameRuntimeBoundingBox), Z_Construct_UClass_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_DefaultGameRuntimeBoundingBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_DefaultGameRuntimeBoundingBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_OtherEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Howlers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_SplashDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Stun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Dodge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Pursue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Targeting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Weapons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Turret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Melee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Colors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_EnemyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_EnemyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::NewProp_DefaultGameRuntimeBoundingBox,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnemyPropertiesStruct",
		sizeof(FAscMapKitEnemyPropertiesStruct),
		alignof(FAscMapKitEnemyPropertiesStruct),
		Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnemyPropertiesStruct"), sizeof(FAscMapKitEnemyPropertiesStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStruct_Hash() { return 2871679400U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
