// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesStunStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnemyPropertiesStunStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct();
// End Cross Module References
class UScriptStruct* FAscMapKitEnemyPropertiesStunStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnemyPropertiesStunStruct"), sizeof(FAscMapKitEnemyPropertiesStunStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnemyPropertiesStunStruct>()
{
	return FAscMapKitEnemyPropertiesStunStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct(FAscMapKitEnemyPropertiesStunStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnemyPropertiesStunStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesStunStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesStunStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnemyPropertiesStunStruct")),new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesStunStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesStunStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStunStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesStunStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStunStruct" },
		{ "Comment", "// A maximum speed rate for when the enemy is recovering from being stunned. This caps the speed scale value.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStunStruct.h" },
		{ "ToolTip", "A maximum speed rate for when the enemy is recovering from being stunned. This caps the speed scale value." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesStunStruct, MaxSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::NewProp_SpeedScale_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStunStruct" },
		{ "Comment", "// How quickly the enemy will recover from being stunned. You may need to tweak this value for the desired effect.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStunStruct.h" },
		{ "ToolTip", "How quickly the enemy will recover from being stunned. You may need to tweak this value for the desired effect." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::NewProp_SpeedScale = { "SpeedScale", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesStunStruct, SpeedScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::NewProp_SpeedScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::NewProp_SpeedScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::NewProp_ForSeconds_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStunStruct" },
		{ "Comment", "// How long, in seconds, the enemy will be stunned for when damaged.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStunStruct.h" },
		{ "ToolTip", "How long, in seconds, the enemy will be stunned for when damaged." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::NewProp_ForSeconds = { "ForSeconds", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesStunStruct, ForSeconds), Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::NewProp_ForSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::NewProp_ForSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::NewProp_Enable_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStunStruct" },
		{ "Comment", "// If enabled, the enemy will be stunned when damaged.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStunStruct.h" },
		{ "ToolTip", "If enabled, the enemy will be stunned when damaged." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesStunStruct*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesStunStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::NewProp_SpeedScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::NewProp_ForSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::NewProp_Enable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnemyPropertiesStunStruct",
		sizeof(FAscMapKitEnemyPropertiesStunStruct),
		alignof(FAscMapKitEnemyPropertiesStunStruct),
		Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnemyPropertiesStunStruct"), sizeof(FAscMapKitEnemyPropertiesStunStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStunStruct_Hash() { return 526971551U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
