// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesWeaponsStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnemyPropertiesWeaponsStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDifficultyInt32Struct();
// End Cross Module References
class UScriptStruct* FAscMapKitEnemyPropertiesWeaponsStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnemyPropertiesWeaponsStruct"), sizeof(FAscMapKitEnemyPropertiesWeaponsStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnemyPropertiesWeaponsStruct>()
{
	return FAscMapKitEnemyPropertiesWeaponsStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct(FAscMapKitEnemyPropertiesWeaponsStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnemyPropertiesWeaponsStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesWeaponsStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesWeaponsStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnemyPropertiesWeaponsStruct")),new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesWeaponsStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesWeaponsStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sockets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sockets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sockets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfSockets_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfSockets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChanceToAttackWithMultipleWeapons_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChanceToAttackWithMultipleWeapons;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesWeaponsStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesWeaponsStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::NewProp_Sockets_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesWeaponsStruct" },
		{ "Comment", "// Depending on how many weapon sockets are configured for this enemy, designate the number of weapon sockets and the weapon type for each here.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesWeaponsStruct.h" },
		{ "ToolTip", "Depending on how many weapon sockets are configured for this enemy, designate the number of weapon sockets and the weapon type for each here." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::NewProp_Sockets = { "Sockets", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesWeaponsStruct, Sockets), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::NewProp_Sockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::NewProp_Sockets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::NewProp_Sockets_Inner = { "Sockets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::NewProp_NumberOfSockets_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesWeaponsStruct" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesWeaponsStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::NewProp_NumberOfSockets = { "NumberOfSockets", nullptr, (EPropertyFlags)0x0010000001020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesWeaponsStruct, NumberOfSockets), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::NewProp_NumberOfSockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::NewProp_NumberOfSockets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::NewProp_ChanceToAttackWithMultipleWeapons_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesWeaponsStruct" },
		{ "Comment", "// If the enemy has multiple weapon sockets, this percentage value will be used to determine the chance that the weapons fire simultaneously.\n// * 0 to 100 (percent)\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesWeaponsStruct.h" },
		{ "ToolTip", "If the enemy has multiple weapon sockets, this percentage value will be used to determine the chance that the weapons fire simultaneously.\n* 0 to 100 (percent)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::NewProp_ChanceToAttackWithMultipleWeapons = { "ChanceToAttackWithMultipleWeapons", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesWeaponsStruct, ChanceToAttackWithMultipleWeapons), Z_Construct_UScriptStruct_FAscMapKitDifficultyInt32Struct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::NewProp_ChanceToAttackWithMultipleWeapons_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::NewProp_ChanceToAttackWithMultipleWeapons_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::NewProp_Sockets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::NewProp_Sockets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::NewProp_NumberOfSockets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::NewProp_ChanceToAttackWithMultipleWeapons,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnemyPropertiesWeaponsStruct",
		sizeof(FAscMapKitEnemyPropertiesWeaponsStruct),
		alignof(FAscMapKitEnemyPropertiesWeaponsStruct),
		Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnemyPropertiesWeaponsStruct"), sizeof(FAscMapKitEnemyPropertiesWeaponsStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesWeaponsStruct_Hash() { return 2769807915U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
