// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Door/AscMapKitDoorPropertiesCustomStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitDoorPropertiesCustomStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
class UScriptStruct* FAscMapKitDoorPropertiesCustomStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitDoorPropertiesCustomStruct"), sizeof(FAscMapKitDoorPropertiesCustomStruct), Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitDoorPropertiesCustomStruct>()
{
	return FAscMapKitDoorPropertiesCustomStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct(FAscMapKitDoorPropertiesCustomStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitDoorPropertiesCustomStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesCustomStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesCustomStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitDoorPropertiesCustomStruct")),new UScriptStruct::TCppStructOps<FAscMapKitDoorPropertiesCustomStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesCustomStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Destructible_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Destructible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonDestructible_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NonDestructible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshPreviewMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshPreviewMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshPreviewRelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMeshPreviewRelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshPreview_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshPreview;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesCustomStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitDoorPropertiesCustomStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_Destructible_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesCustomStruct" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesCustomStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_Destructible = { "Destructible", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesCustomStruct, Destructible), Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_Destructible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_Destructible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_NonDestructible_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesCustomStruct" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesCustomStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_NonDestructible = { "NonDestructible", nullptr, (EPropertyFlags)0x0010008001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesCustomStruct, NonDestructible), Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_NonDestructible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_NonDestructible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewMaterial_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesCustomStruct" },
		{ "Comment", "// An optional static mesh material, used only for previewing the door in the map editor.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesCustomStruct.h" },
		{ "ToolTip", "An optional static mesh material, used only for previewing the door in the map editor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewMaterial = { "StaticMeshPreviewMaterial", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesCustomStruct, StaticMeshPreviewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewRelativeTransform_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesCustomStruct" },
		{ "Comment", "// If you need to modify the static mesh preview transform, you can do it here.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesCustomStruct.h" },
		{ "ToolTip", "If you need to modify the static mesh preview transform, you can do it here." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewRelativeTransform = { "StaticMeshPreviewRelativeTransform", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesCustomStruct, StaticMeshPreviewRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_StaticMeshPreview_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesCustomStruct" },
		{ "Comment", "// An optional static mesh component, used only for previewing the door in the map editor.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesCustomStruct.h" },
		{ "ToolTip", "An optional static mesh component, used only for previewing the door in the map editor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_StaticMeshPreview = { "StaticMeshPreview", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesCustomStruct, StaticMeshPreview), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_StaticMeshPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_StaticMeshPreview_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_Destructible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_NonDestructible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::NewProp_StaticMeshPreview,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitDoorPropertiesCustomStruct",
		sizeof(FAscMapKitDoorPropertiesCustomStruct),
		alignof(FAscMapKitDoorPropertiesCustomStruct),
		Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitDoorPropertiesCustomStruct"), sizeof(FAscMapKitDoorPropertiesCustomStruct), Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomStruct_Hash() { return 2931898371U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
