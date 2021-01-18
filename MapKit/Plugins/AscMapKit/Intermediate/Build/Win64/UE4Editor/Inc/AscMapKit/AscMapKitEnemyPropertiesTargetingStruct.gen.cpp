// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesTargetingStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnemyPropertiesTargetingStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
class UScriptStruct* FAscMapKitEnemyPropertiesTargetingStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnemyPropertiesTargetingStruct"), sizeof(FAscMapKitEnemyPropertiesTargetingStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnemyPropertiesTargetingStruct>()
{
	return FAscMapKitEnemyPropertiesTargetingStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct(FAscMapKitEnemyPropertiesTargetingStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnemyPropertiesTargetingStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesTargetingStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesTargetingStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnemyPropertiesTargetingStruct")),new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesTargetingStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesTargetingStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackCheckMaxSearchRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackCheckMaxSearchRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackCheckConeAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackCheckConeAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChanceToAttackEnemyWhoHitUs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChanceToAttackEnemyWhoHitUs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesTargetingStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesTargetingStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::NewProp_AttackCheckMaxSearchRadius_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesTargetingStruct" },
		{ "Comment", "// The distance in front of the enemy, within scope of the cone angle, for the enemy to use for targeting/attacking. You may need to tweak this value depending on how aggressive, or passive, you want the enemy to be.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesTargetingStruct.h" },
		{ "ToolTip", "The distance in front of the enemy, within scope of the cone angle, for the enemy to use for targeting/attacking. You may need to tweak this value depending on how aggressive, or passive, you want the enemy to be." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::NewProp_AttackCheckMaxSearchRadius = { "AttackCheckMaxSearchRadius", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesTargetingStruct, AttackCheckMaxSearchRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::NewProp_AttackCheckMaxSearchRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::NewProp_AttackCheckMaxSearchRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::NewProp_AttackCheckConeAngle_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesTargetingStruct" },
		{ "Comment", "// The size of the cone for the enemy to use for target/attack checking. You may need to tweak this value depending on how aggressive, or passive, you want the enemy to be.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesTargetingStruct.h" },
		{ "ToolTip", "The size of the cone for the enemy to use for target/attack checking. You may need to tweak this value depending on how aggressive, or passive, you want the enemy to be." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::NewProp_AttackCheckConeAngle = { "AttackCheckConeAngle", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesTargetingStruct, AttackCheckConeAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::NewProp_AttackCheckConeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::NewProp_AttackCheckConeAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::NewProp_ChanceToAttackEnemyWhoHitUs_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesTargetingStruct" },
		{ "Comment", "// If the enemy is hit by another enemy, use this percent value as a chance for the enemy to target the attacking enemy.\n// * 0 to 100 (percent)\n// * This may change in the future as more behavior properties are added.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesTargetingStruct.h" },
		{ "ToolTip", "If the enemy is hit by another enemy, use this percent value as a chance for the enemy to target the attacking enemy.\n* 0 to 100 (percent)\n* This may change in the future as more behavior properties are added." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::NewProp_ChanceToAttackEnemyWhoHitUs = { "ChanceToAttackEnemyWhoHitUs", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesTargetingStruct, ChanceToAttackEnemyWhoHitUs), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::NewProp_ChanceToAttackEnemyWhoHitUs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::NewProp_ChanceToAttackEnemyWhoHitUs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::NewProp_AttackCheckMaxSearchRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::NewProp_AttackCheckConeAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::NewProp_ChanceToAttackEnemyWhoHitUs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnemyPropertiesTargetingStruct",
		sizeof(FAscMapKitEnemyPropertiesTargetingStruct),
		alignof(FAscMapKitEnemyPropertiesTargetingStruct),
		Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnemyPropertiesTargetingStruct"), sizeof(FAscMapKitEnemyPropertiesTargetingStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesTargetingStruct_Hash() { return 1421060390U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
