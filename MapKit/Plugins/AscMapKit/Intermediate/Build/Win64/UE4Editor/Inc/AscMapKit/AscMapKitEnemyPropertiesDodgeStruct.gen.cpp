// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesDodgeStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnemyPropertiesDodgeStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
class UScriptStruct* FAscMapKitEnemyPropertiesDodgeStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnemyPropertiesDodgeStruct"), sizeof(FAscMapKitEnemyPropertiesDodgeStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnemyPropertiesDodgeStruct>()
{
	return FAscMapKitEnemyPropertiesDodgeStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct(FAscMapKitEnemyPropertiesDodgeStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnemyPropertiesDodgeStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesDodgeStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesDodgeStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnemyPropertiesDodgeStruct")),new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesDodgeStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesDodgeStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Chance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceRadiusCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceRadiusCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesDodgeStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesDodgeStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_DistanceMax_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesDodgeStruct" },
		{ "Comment", "// The maximum distance in which an incoming projectile could be for dodging to engage.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesDodgeStruct.h" },
		{ "ToolTip", "The maximum distance in which an incoming projectile could be for dodging to engage." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_DistanceMax = { "DistanceMax", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesDodgeStruct, DistanceMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_DistanceMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_DistanceMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_DistanceMin_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesDodgeStruct" },
		{ "Comment", "// The minimum distance in which an incoming projectile could be for dodging to engage.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesDodgeStruct.h" },
		{ "ToolTip", "The minimum distance in which an incoming projectile could be for dodging to engage." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_DistanceMin = { "DistanceMin", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesDodgeStruct, DistanceMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_DistanceMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_DistanceMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_Chance_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesDodgeStruct" },
		{ "Comment", "// A percent value in which the enemy may, or may not, dodge. The higher the value, the higher the chance the enemy will dodge.\n// 0 to 100 (percent)\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesDodgeStruct.h" },
		{ "ToolTip", "A percent value in which the enemy may, or may not, dodge. The higher the value, the higher the chance the enemy will dodge.\n0 to 100 (percent)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_Chance = { "Chance", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesDodgeStruct, Chance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_Chance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_Chance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_DistanceRadiusCheck_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesDodgeStruct" },
		{ "Comment", "// On tick, the radius in which the enemy will attempt to identify incoming player fire.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesDodgeStruct.h" },
		{ "ToolTip", "On tick, the radius in which the enemy will attempt to identify incoming player fire." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_DistanceRadiusCheck = { "DistanceRadiusCheck", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesDodgeStruct, DistanceRadiusCheck), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_DistanceRadiusCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_DistanceRadiusCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_Enable_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesDodgeStruct" },
		{ "Comment", "// If enabled, this enemy will attempt to dodge incoming player fire.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesDodgeStruct.h" },
		{ "ToolTip", "If enabled, this enemy will attempt to dodge incoming player fire." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesDodgeStruct*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesDodgeStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_DistanceMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_DistanceMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_Chance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_DistanceRadiusCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::NewProp_Enable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnemyPropertiesDodgeStruct",
		sizeof(FAscMapKitEnemyPropertiesDodgeStruct),
		alignof(FAscMapKitEnemyPropertiesDodgeStruct),
		Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnemyPropertiesDodgeStruct"), sizeof(FAscMapKitEnemyPropertiesDodgeStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesDodgeStruct_Hash() { return 248054824U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
