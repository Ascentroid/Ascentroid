// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesHowlersStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnemyPropertiesHowlersStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
class UScriptStruct* FAscMapKitEnemyPropertiesHowlersStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnemyPropertiesHowlersStruct"), sizeof(FAscMapKitEnemyPropertiesHowlersStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnemyPropertiesHowlersStruct>()
{
	return FAscMapKitEnemyPropertiesHowlersStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct(FAscMapKitEnemyPropertiesHowlersStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnemyPropertiesHowlersStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesHowlersStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesHowlersStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnemyPropertiesHowlersStruct")),new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesHowlersStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesHowlersStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceLineOfSightRequiredRadiusCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceLineOfSightRequiredRadiusCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceLineOfSightNotRequiredRadiusCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceLineOfSightNotRequiredRadiusCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableAttraction_MetaData[];
#endif
		static void NewProp_EnableAttraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableAttraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesHowlersStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesHowlersStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::NewProp_DistanceLineOfSightRequiredRadiusCheck_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesHowlersStruct" },
		{ "Comment", "// The distance in which the enemy is attracted to a Howler, with the enemy being required to have a line of sight.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesHowlersStruct.h" },
		{ "ToolTip", "The distance in which the enemy is attracted to a Howler, with the enemy being required to have a line of sight." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::NewProp_DistanceLineOfSightRequiredRadiusCheck = { "DistanceLineOfSightRequiredRadiusCheck", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesHowlersStruct, DistanceLineOfSightRequiredRadiusCheck), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::NewProp_DistanceLineOfSightRequiredRadiusCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::NewProp_DistanceLineOfSightRequiredRadiusCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::NewProp_DistanceLineOfSightNotRequiredRadiusCheck_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesHowlersStruct" },
		{ "Comment", "// The distance in which the enemy is attracted to a Howler, without the enemy being required to have a line of sight.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesHowlersStruct.h" },
		{ "ToolTip", "The distance in which the enemy is attracted to a Howler, without the enemy being required to have a line of sight." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::NewProp_DistanceLineOfSightNotRequiredRadiusCheck = { "DistanceLineOfSightNotRequiredRadiusCheck", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesHowlersStruct, DistanceLineOfSightNotRequiredRadiusCheck), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::NewProp_DistanceLineOfSightNotRequiredRadiusCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::NewProp_DistanceLineOfSightNotRequiredRadiusCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::NewProp_EnableAttraction_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesHowlersStruct" },
		{ "Comment", "// If enabled, this enemy will be attracted to Howlers.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesHowlersStruct.h" },
		{ "ToolTip", "If enabled, this enemy will be attracted to Howlers." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::NewProp_EnableAttraction_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesHowlersStruct*)Obj)->EnableAttraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::NewProp_EnableAttraction = { "EnableAttraction", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesHowlersStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::NewProp_EnableAttraction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::NewProp_EnableAttraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::NewProp_EnableAttraction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::NewProp_DistanceLineOfSightRequiredRadiusCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::NewProp_DistanceLineOfSightNotRequiredRadiusCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::NewProp_EnableAttraction,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnemyPropertiesHowlersStruct",
		sizeof(FAscMapKitEnemyPropertiesHowlersStruct),
		alignof(FAscMapKitEnemyPropertiesHowlersStruct),
		Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnemyPropertiesHowlersStruct"), sizeof(FAscMapKitEnemyPropertiesHowlersStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesHowlersStruct_Hash() { return 4075198204U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
