// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Powerup/AscMapKitPowerupPropertiesStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitPowerupPropertiesStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitPowerupTypeEnum();
// End Cross Module References
class UScriptStruct* FAscMapKitPowerupPropertiesStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitPowerupPropertiesStruct"), sizeof(FAscMapKitPowerupPropertiesStruct), Get_Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitPowerupPropertiesStruct>()
{
	return FAscMapKitPowerupPropertiesStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitPowerupPropertiesStruct(FAscMapKitPowerupPropertiesStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitPowerupPropertiesStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitPowerupPropertiesStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitPowerupPropertiesStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitPowerupPropertiesStruct")),new UScriptStruct::TCppStructOps<FAscMapKitPowerupPropertiesStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitPowerupPropertiesStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerupType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PowerupType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PowerupType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupPropertiesStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitPowerupPropertiesStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct_Statics::NewProp_PowerupType_MetaData[] = {
		{ "Category", "AscMapKitPowerupPropertiesStruct" },
		{ "Comment", "// Used by the game runtime to identify the powerup type.\n" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupPropertiesStruct.h" },
		{ "ToolTip", "Used by the game runtime to identify the powerup type." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct_Statics::NewProp_PowerupType = { "PowerupType", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitPowerupPropertiesStruct, PowerupType), Z_Construct_UEnum_AscMapKit_EAscMapKitPowerupTypeEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct_Statics::NewProp_PowerupType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct_Statics::NewProp_PowerupType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct_Statics::NewProp_PowerupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct_Statics::NewProp_PowerupType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct_Statics::NewProp_PowerupType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitPowerupPropertiesStruct",
		sizeof(FAscMapKitPowerupPropertiesStruct),
		alignof(FAscMapKitPowerupPropertiesStruct),
		Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitPowerupPropertiesStruct"), sizeof(FAscMapKitPowerupPropertiesStruct), Get_Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitPowerupPropertiesStruct_Hash() { return 3367812414U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
