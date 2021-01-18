// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Forcefield/AscMapKitForcefieldPropertiesStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitForcefieldPropertiesStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPulseStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesEnemiesStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct();
// End Cross Module References
class UScriptStruct* FAscMapKitForcefieldPropertiesStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitForcefieldPropertiesStruct"), sizeof(FAscMapKitForcefieldPropertiesStruct), Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitForcefieldPropertiesStruct>()
{
	return FAscMapKitForcefieldPropertiesStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct(FAscMapKitForcefieldPropertiesStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitForcefieldPropertiesStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitForcefieldPropertiesStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitForcefieldPropertiesStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitForcefieldPropertiesStruct")),new UScriptStruct::TCppStructOps<FAscMapKitForcefieldPropertiesStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitForcefieldPropertiesStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemies_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Enemies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Players;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Animate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectAllProjectiles_MetaData[];
#endif
		static void NewProp_ReflectAllProjectiles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReflectAllProjectiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitForcefieldPropertiesStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_OtherEffects_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_OtherEffects = { "OtherEffects", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesStruct, OtherEffects), Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesOtherEffectsStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_OtherEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_OtherEffects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Pulse_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Pulse = { "Pulse", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesStruct, Pulse), Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPulseStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Pulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Pulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Enemies_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Enemies = { "Enemies", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesStruct, Enemies), Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesEnemiesStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Enemies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Enemies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Players_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesStruct, Players), Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Players_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Players_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Animate_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Animate = { "Animate", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesStruct, Animate), Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Animate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Animate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesStruct, StaticMesh), Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_ReflectAllProjectiles_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesStruct" },
		{ "Comment", "// If enabled, the forcefield will reflect all primary projectiles, regardless of who/what shot them.\n// * This will override the player and enemy \"Reflect Projectiles\" settings.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesStruct.h" },
		{ "ToolTip", "If enabled, the forcefield will reflect all primary projectiles, regardless of who/what shot them.\n* This will override the player and enemy \"Reflect Projectiles\" settings." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_ReflectAllProjectiles_SetBit(void* Obj)
	{
		((FAscMapKitForcefieldPropertiesStruct*)Obj)->ReflectAllProjectiles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_ReflectAllProjectiles = { "ReflectAllProjectiles", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitForcefieldPropertiesStruct), &Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_ReflectAllProjectiles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_ReflectAllProjectiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_ReflectAllProjectiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesStruct" },
		{ "Comment", "// Used by the game runtime to identify this forcefield. This is required and must be unique per forcefield.\n// * If forcefield IDs are not set, or not unique, the game logs should provide an error message.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesStruct.h" },
		{ "ToolTip", "Used by the game runtime to identify this forcefield. This is required and must be unique per forcefield.\n* If forcefield IDs are not set, or not unique, the game logs should provide an error message." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesStruct, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesStruct" },
		{ "Comment", "// Used by the game runtime to display the forcefield name. This is used for HUD messages.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesStruct.h" },
		{ "ToolTip", "Used by the game runtime to display the forcefield name. This is used for HUD messages." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesStruct, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Enable_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesStruct" },
		{ "Comment", "// If checked, this forcefield will be visible and enabled.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesStruct.h" },
		{ "ToolTip", "If checked, this forcefield will be visible and enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FAscMapKitForcefieldPropertiesStruct*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitForcefieldPropertiesStruct), &Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_OtherEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Pulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Enemies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Players,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Animate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_ReflectAllProjectiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::NewProp_Enable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitForcefieldPropertiesStruct",
		sizeof(FAscMapKitForcefieldPropertiesStruct),
		alignof(FAscMapKitForcefieldPropertiesStruct),
		Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitForcefieldPropertiesStruct"), sizeof(FAscMapKitForcefieldPropertiesStruct), Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStruct_Hash() { return 1217120440U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
