// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Forcefield/AscMapKitForcefieldPropertiesPlayersStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitForcefieldPropertiesPlayersStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
class UScriptStruct* FAscMapKitForcefieldPropertiesPlayersStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitForcefieldPropertiesPlayersStruct"), sizeof(FAscMapKitForcefieldPropertiesPlayersStruct), Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitForcefieldPropertiesPlayersStruct>()
{
	return FAscMapKitForcefieldPropertiesPlayersStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct(FAscMapKitForcefieldPropertiesPlayersStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitForcefieldPropertiesPlayersStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitForcefieldPropertiesPlayersStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitForcefieldPropertiesPlayersStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitForcefieldPropertiesPlayersStruct")),new UScriptStruct::TCppStructOps<FAscMapKitForcefieldPropertiesPlayersStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitForcefieldPropertiesPlayersStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpulseStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpulseRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableImpulse_MetaData[];
#endif
		static void NewProp_EnableImpulse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectProjectiles_MetaData[];
#endif
		static void NewProp_ReflectProjectiles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReflectProjectiles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesPlayersStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitForcefieldPropertiesPlayersStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_ImpulseStrength_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesPlayersStruct" },
		{ "Comment", "// How much impulse is applied to the player when they collide with the forcefield.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesPlayersStruct.h" },
		{ "ToolTip", "How much impulse is applied to the player when they collide with the forcefield." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_ImpulseStrength = { "ImpulseStrength", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesPlayersStruct, ImpulseStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_ImpulseStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_ImpulseStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_ImpulseRadius_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesPlayersStruct" },
		{ "Comment", "// How large the impulse radius is when applied to the player when they collide with the forcefield.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesPlayersStruct.h" },
		{ "ToolTip", "How large the impulse radius is when applied to the player when they collide with the forcefield." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_ImpulseRadius = { "ImpulseRadius", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesPlayersStruct, ImpulseRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_ImpulseRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_ImpulseRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_EnableImpulse_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesPlayersStruct" },
		{ "Comment", "// If checked, an impulse radius will be applied to the player when they collide with the forcefield.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesPlayersStruct.h" },
		{ "ToolTip", "If checked, an impulse radius will be applied to the player when they collide with the forcefield." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_EnableImpulse_SetBit(void* Obj)
	{
		((FAscMapKitForcefieldPropertiesPlayersStruct*)Obj)->EnableImpulse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_EnableImpulse = { "EnableImpulse", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitForcefieldPropertiesPlayersStruct), &Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_EnableImpulse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_EnableImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_EnableImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_DamageDelay_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesPlayersStruct" },
		{ "Comment", "// Apply a delay, in seconds, before damaging the player after the initial time they run into a forcefield.\n// * This is helpful in case you don't want the player to get damaged repeatedly while they are continually running into the forcefield.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesPlayersStruct.h" },
		{ "ToolTip", "Apply a delay, in seconds, before damaging the player after the initial time they run into a forcefield.\n* This is helpful in case you don't want the player to get damaged repeatedly while they are continually running into the forcefield." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_DamageDelay = { "DamageDelay", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesPlayersStruct, DamageDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_DamageDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_DamageDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_DamageAmount_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesPlayersStruct" },
		{ "Comment", "// How much damage is applied to players when they collide with the forcefield.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesPlayersStruct.h" },
		{ "ToolTip", "How much damage is applied to players when they collide with the forcefield." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesPlayersStruct, DamageAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_DamageAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_DamageAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_ReflectProjectiles_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesPlayersStruct" },
		{ "Comment", "// If enabled, the forcefield will reflect player primary projectiles.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesPlayersStruct.h" },
		{ "ToolTip", "If enabled, the forcefield will reflect player primary projectiles." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_ReflectProjectiles_SetBit(void* Obj)
	{
		((FAscMapKitForcefieldPropertiesPlayersStruct*)Obj)->ReflectProjectiles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_ReflectProjectiles = { "ReflectProjectiles", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitForcefieldPropertiesPlayersStruct), &Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_ReflectProjectiles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_ReflectProjectiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_ReflectProjectiles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_ImpulseStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_ImpulseRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_EnableImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_DamageDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_DamageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::NewProp_ReflectProjectiles,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitForcefieldPropertiesPlayersStruct",
		sizeof(FAscMapKitForcefieldPropertiesPlayersStruct),
		alignof(FAscMapKitForcefieldPropertiesPlayersStruct),
		Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitForcefieldPropertiesPlayersStruct"), sizeof(FAscMapKitForcefieldPropertiesPlayersStruct), Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesPlayersStruct_Hash() { return 1388372034U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
