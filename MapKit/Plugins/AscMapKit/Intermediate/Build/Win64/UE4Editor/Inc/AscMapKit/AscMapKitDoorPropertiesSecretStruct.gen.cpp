// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Door/AscMapKitDoorPropertiesSecretStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitDoorPropertiesSecretStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
class UScriptStruct* FAscMapKitDoorPropertiesSecretStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitDoorPropertiesSecretStruct"), sizeof(FAscMapKitDoorPropertiesSecretStruct), Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitDoorPropertiesSecretStruct>()
{
	return FAscMapKitDoorPropertiesSecretStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct(FAscMapKitDoorPropertiesSecretStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitDoorPropertiesSecretStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesSecretStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesSecretStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitDoorPropertiesSecretStruct")),new UScriptStruct::TCppStructOps<FAscMapKitDoorPropertiesSecretStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesSecretStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AreaName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesSecretStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitDoorPropertiesSecretStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::NewProp_AreaName_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesSecretStruct" },
		{ "Comment", "// Optional. This is used for HUD messages.\n// * For example: if a trigger is blown, and is related to this secret door, this area name will be used in the HUD message.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesSecretStruct.h" },
		{ "ToolTip", "Optional. This is used for HUD messages.\n* For example: if a trigger is blown, and is related to this secret door, this area name will be used in the HUD message." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::NewProp_AreaName = { "AreaName", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesSecretStruct, AreaName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::NewProp_AreaName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::NewProp_AreaName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesSecretStruct" },
		{ "Comment", "// If enabled, this is required and must be unique per door.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesSecretStruct.h" },
		{ "ToolTip", "If enabled, this is required and must be unique per door." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesSecretStruct, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::NewProp_Enable_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesSecretStruct" },
		{ "Comment", "// If enabled, this door will be treated like a secret door.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesSecretStruct.h" },
		{ "ToolTip", "If enabled, this door will be treated like a secret door." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FAscMapKitDoorPropertiesSecretStruct*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitDoorPropertiesSecretStruct), &Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::NewProp_AreaName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::NewProp_Enable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitDoorPropertiesSecretStruct",
		sizeof(FAscMapKitDoorPropertiesSecretStruct),
		alignof(FAscMapKitDoorPropertiesSecretStruct),
		Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitDoorPropertiesSecretStruct"), sizeof(FAscMapKitDoorPropertiesSecretStruct), Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesSecretStruct_Hash() { return 1280107240U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
