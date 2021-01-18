// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Forcefield/AscMapKitForcefieldPropertiesStaticMeshStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitForcefieldPropertiesStaticMeshStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FAscMapKitForcefieldPropertiesStaticMeshStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitForcefieldPropertiesStaticMeshStruct"), sizeof(FAscMapKitForcefieldPropertiesStaticMeshStruct), Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitForcefieldPropertiesStaticMeshStruct>()
{
	return FAscMapKitForcefieldPropertiesStaticMeshStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct(FAscMapKitForcefieldPropertiesStaticMeshStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitForcefieldPropertiesStaticMeshStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitForcefieldPropertiesStaticMeshStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitForcefieldPropertiesStaticMeshStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitForcefieldPropertiesStaticMeshStruct")),new UScriptStruct::TCppStructOps<FAscMapKitForcefieldPropertiesStaticMeshStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitForcefieldPropertiesStaticMeshStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimaryMaterialInstance;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideColor_MetaData[];
#endif
		static void NewProp_OverrideColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverrideColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesStaticMeshStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitForcefieldPropertiesStaticMeshStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_PrimaryMaterialInstance_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesStaticMeshStruct" },
		{ "Comment", "// Read-only. Used for the material assigned to the forcefield.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesStaticMeshStruct.h" },
		{ "ToolTip", "Read-only. Used for the material assigned to the forcefield." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_PrimaryMaterialInstance = { "PrimaryMaterialInstance", nullptr, (EPropertyFlags)0x0010000001020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesStaticMeshStruct, PrimaryMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_PrimaryMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_PrimaryMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_EmitColorMultiplyBy_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesStaticMeshStruct" },
		{ "Comment", "// Use this to increase the emit color amount.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesStaticMeshStruct.h" },
		{ "ToolTip", "Use this to increase the emit color amount." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_EmitColorMultiplyBy = { "EmitColorMultiplyBy", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesStaticMeshStruct, EmitColorMultiplyBy), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_EmitColorMultiplyBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_EmitColorMultiplyBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_OverrideEmitColorMultiplyBy_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesStaticMeshStruct" },
		{ "Comment", "// Override this to increase the emit color amount.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesStaticMeshStruct.h" },
		{ "ToolTip", "Override this to increase the emit color amount." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_OverrideEmitColorMultiplyBy_SetBit(void* Obj)
	{
		((FAscMapKitForcefieldPropertiesStaticMeshStruct*)Obj)->OverrideEmitColorMultiplyBy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_OverrideEmitColorMultiplyBy = { "OverrideEmitColorMultiplyBy", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitForcefieldPropertiesStaticMeshStruct), &Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_OverrideEmitColorMultiplyBy_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_OverrideEmitColorMultiplyBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_OverrideEmitColorMultiplyBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesStaticMeshStruct" },
		{ "Comment", "// The color.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesStaticMeshStruct.h" },
		{ "ToolTip", "The color." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesStaticMeshStruct, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_OverrideColor_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesStaticMeshStruct" },
		{ "Comment", "// Override the color.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesStaticMeshStruct.h" },
		{ "ToolTip", "Override the color." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_OverrideColor_SetBit(void* Obj)
	{
		((FAscMapKitForcefieldPropertiesStaticMeshStruct*)Obj)->OverrideColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_OverrideColor = { "OverrideColor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitForcefieldPropertiesStaticMeshStruct), &Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_OverrideColor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_OverrideColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_OverrideColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesStaticMeshStruct" },
		{ "Comment", "// Scale used for the static mesh.\n// * If the scale doesn't work right, you may want to use multiple forcefield actors instead.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesStaticMeshStruct.h" },
		{ "ToolTip", "Scale used for the static mesh.\n* If the scale doesn't work right, you may want to use multiple forcefield actors instead." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesStaticMeshStruct, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_PrimaryMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_EmitColorMultiplyBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_OverrideEmitColorMultiplyBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_OverrideColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::NewProp_Scale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitForcefieldPropertiesStaticMeshStruct",
		sizeof(FAscMapKitForcefieldPropertiesStaticMeshStruct),
		alignof(FAscMapKitForcefieldPropertiesStaticMeshStruct),
		Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitForcefieldPropertiesStaticMeshStruct"), sizeof(FAscMapKitForcefieldPropertiesStaticMeshStruct), Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesStaticMeshStruct_Hash() { return 1294419962U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
