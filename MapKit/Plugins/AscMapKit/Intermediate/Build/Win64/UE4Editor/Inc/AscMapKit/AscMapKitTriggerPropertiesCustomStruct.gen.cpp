// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesCustomStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitTriggerPropertiesCustomStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FAscMapKitTriggerPropertiesCustomStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitTriggerPropertiesCustomStruct"), sizeof(FAscMapKitTriggerPropertiesCustomStruct), Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitTriggerPropertiesCustomStruct>()
{
	return FAscMapKitTriggerPropertiesCustomStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct(FAscMapKitTriggerPropertiesCustomStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitTriggerPropertiesCustomStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesCustomStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesCustomStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitTriggerPropertiesCustomStruct")),new UScriptStruct::TCppStructOps<FAscMapKitTriggerPropertiesCustomStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesCustomStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshInactiveRelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMeshInactiveRelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshInactive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshInactive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshActiveRelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMeshActiveRelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshActive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshActive;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesCustomStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitTriggerPropertiesCustomStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshInactiveRelativeTransform_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesCustomStruct" },
		{ "Comment", "// If you need to modify the static mesh inactive transform, you can do it here.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesCustomStruct.h" },
		{ "ToolTip", "If you need to modify the static mesh inactive transform, you can do it here." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshInactiveRelativeTransform = { "StaticMeshInactiveRelativeTransform", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesCustomStruct, StaticMeshInactiveRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshInactiveRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshInactiveRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshInactive_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesCustomStruct" },
		{ "Comment", "// The static mesh used by the game runtime when the trigger is inactive (can no longer be interacted with).\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesCustomStruct.h" },
		{ "ToolTip", "The static mesh used by the game runtime when the trigger is inactive (can no longer be interacted with)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshInactive = { "StaticMeshInactive", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesCustomStruct, StaticMeshInactive), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshInactive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshInactive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshActiveRelativeTransform_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesCustomStruct" },
		{ "Comment", "// If you need to modify the static mesh active transform, you can do it here.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesCustomStruct.h" },
		{ "ToolTip", "If you need to modify the static mesh active transform, you can do it here." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshActiveRelativeTransform = { "StaticMeshActiveRelativeTransform", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesCustomStruct, StaticMeshActiveRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshActiveRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshActiveRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshActive_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesCustomStruct" },
		{ "Comment", "// The static mesh used by the game runtime when the trigger is active (can be interacted with).\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesCustomStruct.h" },
		{ "ToolTip", "The static mesh used by the game runtime when the trigger is active (can be interacted with)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshActive = { "StaticMeshActive", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesCustomStruct, StaticMeshActive), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewMaterial_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesCustomStruct" },
		{ "Comment", "// An optional static mesh material, used only for previewing the door in the map editor.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesCustomStruct.h" },
		{ "ToolTip", "An optional static mesh material, used only for previewing the door in the map editor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewMaterial = { "StaticMeshPreviewMaterial", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesCustomStruct, StaticMeshPreviewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewRelativeTransform_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesCustomStruct" },
		{ "Comment", "// If you need to modify the static mesh preview transform, you can do it here.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesCustomStruct.h" },
		{ "ToolTip", "If you need to modify the static mesh preview transform, you can do it here." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewRelativeTransform = { "StaticMeshPreviewRelativeTransform", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesCustomStruct, StaticMeshPreviewRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshPreview_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesCustomStruct" },
		{ "Comment", "// An optional static mesh, used only for previewing the door in the map editor.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesCustomStruct.h" },
		{ "ToolTip", "An optional static mesh, used only for previewing the door in the map editor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshPreview = { "StaticMeshPreview", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesCustomStruct, StaticMeshPreview), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshPreview_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshInactiveRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshInactive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshActiveRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::NewProp_StaticMeshPreview,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitTriggerPropertiesCustomStruct",
		sizeof(FAscMapKitTriggerPropertiesCustomStruct),
		alignof(FAscMapKitTriggerPropertiesCustomStruct),
		Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitTriggerPropertiesCustomStruct"), sizeof(FAscMapKitTriggerPropertiesCustomStruct), Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct_Hash() { return 1829377351U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
