// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
class UScriptStruct* FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct"), sizeof(FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct>()
{
	return FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct(FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct")),new UScriptStruct::TCppStructOps<FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Statics::NewProp_MaxSpeedFactor_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct" },
		{ "Comment", "// A factor amount which is multiplied against the enemy's maximum game runtime speed.\n// * For example: 0.5 would be half of the enemy's default maximum game runtime speed.\n// * Another example: 2.0 would double the enemy's default maximum game runtime speed.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct.h" },
		{ "ToolTip", "A factor amount which is multiplied against the enemy's maximum game runtime speed.\n* For example: 0.5 would be half of the enemy's default maximum game runtime speed.\n* Another example: 2.0 would double the enemy's default maximum game runtime speed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Statics::NewProp_MaxSpeedFactor = { "MaxSpeedFactor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct, MaxSpeedFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Statics::NewProp_MaxSpeedFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Statics::NewProp_MaxSpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Statics::NewProp_Enable_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct" },
		{ "Comment", "// Check to enable enemy movement modifiers (such as slowing down, or speeding up, enemies).\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct.h" },
		{ "ToolTip", "Check to enable enemy movement modifiers (such as slowing down, or speeding up, enemies)." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct), &Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Statics::NewProp_MaxSpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Statics::NewProp_Enable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct",
		sizeof(FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct),
		alignof(FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct),
		Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct"), sizeof(FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesEnemyMovementModifierStruct_Hash() { return 1853021344U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
