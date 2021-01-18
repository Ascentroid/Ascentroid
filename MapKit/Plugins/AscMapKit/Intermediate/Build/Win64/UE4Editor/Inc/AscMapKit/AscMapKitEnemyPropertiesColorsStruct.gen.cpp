// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesColorsStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnemyPropertiesColorsStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FAscMapKitEnemyPropertiesColorsStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnemyPropertiesColorsStruct"), sizeof(FAscMapKitEnemyPropertiesColorsStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnemyPropertiesColorsStruct>()
{
	return FAscMapKitEnemyPropertiesColorsStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct(FAscMapKitEnemyPropertiesColorsStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnemyPropertiesColorsStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesColorsStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesColorsStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnemyPropertiesColorsStruct")),new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesColorsStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesColorsStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitMaterialInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_EmitMaterialInstances;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmitMaterialInstances_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmitMaterialInstances_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryMaterialInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PrimaryMaterialInstances;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrimaryMaterialInstances_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimaryMaterialInstances_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitColorMultiplyBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmitColorMultiplyBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideEmitColorMultiplyBy_MetaData[];
#endif
		static void NewProp_OverrideEmitColorMultiplyBy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverrideEmitColorMultiplyBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmitColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideEmitColor_MetaData[];
#endif
		static void NewProp_OverrideEmitColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverrideEmitColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridePrimaryColor_MetaData[];
#endif
		static void NewProp_OverridePrimaryColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverridePrimaryColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesColorsStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesColorsStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_EmitMaterialInstances_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesColorsStruct" },
		{ "Comment", "// Read-only. Used for the material assigned to the enemy.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesColorsStruct.h" },
		{ "ToolTip", "Read-only. Used for the material assigned to the enemy." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_EmitMaterialInstances = { "EmitMaterialInstances", nullptr, (EPropertyFlags)0x0010000001020015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesColorsStruct, EmitMaterialInstances), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_EmitMaterialInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_EmitMaterialInstances_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_EmitMaterialInstances_Key_KeyProp = { "EmitMaterialInstances_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_EmitMaterialInstances_ValueProp = { "EmitMaterialInstances", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_PrimaryMaterialInstances_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesColorsStruct" },
		{ "Comment", "// Read-only. Used for the material assigned to the enemy.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesColorsStruct.h" },
		{ "ToolTip", "Read-only. Used for the material assigned to the enemy." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_PrimaryMaterialInstances = { "PrimaryMaterialInstances", nullptr, (EPropertyFlags)0x0010000001020015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesColorsStruct, PrimaryMaterialInstances), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_PrimaryMaterialInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_PrimaryMaterialInstances_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_PrimaryMaterialInstances_Key_KeyProp = { "PrimaryMaterialInstances_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_PrimaryMaterialInstances_ValueProp = { "PrimaryMaterialInstances", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_EmitColorMultiplyBy_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesColorsStruct" },
		{ "Comment", "// Use this to increase the emit color amount.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesColorsStruct.h" },
		{ "ToolTip", "Use this to increase the emit color amount." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_EmitColorMultiplyBy = { "EmitColorMultiplyBy", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesColorsStruct, EmitColorMultiplyBy), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_EmitColorMultiplyBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_EmitColorMultiplyBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_OverrideEmitColorMultiplyBy_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesColorsStruct" },
		{ "Comment", "// Override this to increase the emit color amount.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesColorsStruct.h" },
		{ "ToolTip", "Override this to increase the emit color amount." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_OverrideEmitColorMultiplyBy_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesColorsStruct*)Obj)->OverrideEmitColorMultiplyBy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_OverrideEmitColorMultiplyBy = { "OverrideEmitColorMultiplyBy", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesColorsStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_OverrideEmitColorMultiplyBy_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_OverrideEmitColorMultiplyBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_OverrideEmitColorMultiplyBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_EmitColor_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesColorsStruct" },
		{ "Comment", "// The enemy emit color.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesColorsStruct.h" },
		{ "ToolTip", "The enemy emit color." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_EmitColor = { "EmitColor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesColorsStruct, EmitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_EmitColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_EmitColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_OverrideEmitColor_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesColorsStruct" },
		{ "Comment", "// Override the enemy emit color.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesColorsStruct.h" },
		{ "ToolTip", "Override the enemy emit color." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_OverrideEmitColor_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesColorsStruct*)Obj)->OverrideEmitColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_OverrideEmitColor = { "OverrideEmitColor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesColorsStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_OverrideEmitColor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_OverrideEmitColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_OverrideEmitColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_PrimaryColor_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesColorsStruct" },
		{ "Comment", "// The enemy primary color.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesColorsStruct.h" },
		{ "ToolTip", "The enemy primary color." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_PrimaryColor = { "PrimaryColor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesColorsStruct, PrimaryColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_PrimaryColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_PrimaryColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_OverridePrimaryColor_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesColorsStruct" },
		{ "Comment", "// Override the enemy primary color.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesColorsStruct.h" },
		{ "ToolTip", "Override the enemy primary color." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_OverridePrimaryColor_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesColorsStruct*)Obj)->OverridePrimaryColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_OverridePrimaryColor = { "OverridePrimaryColor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesColorsStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_OverridePrimaryColor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_OverridePrimaryColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_OverridePrimaryColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_EmitMaterialInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_EmitMaterialInstances_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_EmitMaterialInstances_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_PrimaryMaterialInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_PrimaryMaterialInstances_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_PrimaryMaterialInstances_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_EmitColorMultiplyBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_OverrideEmitColorMultiplyBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_EmitColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_OverrideEmitColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_PrimaryColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::NewProp_OverridePrimaryColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnemyPropertiesColorsStruct",
		sizeof(FAscMapKitEnemyPropertiesColorsStruct),
		alignof(FAscMapKitEnemyPropertiesColorsStruct),
		Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnemyPropertiesColorsStruct"), sizeof(FAscMapKitEnemyPropertiesColorsStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesColorsStruct_Hash() { return 3912556517U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
