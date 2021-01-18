// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Fan/AscMapKitFanPropertiesCustomStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitFanPropertiesCustomStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
class UScriptStruct* FAscMapKitFanPropertiesCustomStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitFanPropertiesCustomStruct"), sizeof(FAscMapKitFanPropertiesCustomStruct), Get_Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitFanPropertiesCustomStruct>()
{
	return FAscMapKitFanPropertiesCustomStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct(FAscMapKitFanPropertiesCustomStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitFanPropertiesCustomStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitFanPropertiesCustomStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitFanPropertiesCustomStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitFanPropertiesCustomStruct")),new UScriptStruct::TCppStructOps<FAscMapKitFanPropertiesCustomStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitFanPropertiesCustomStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshRelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshRelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Fan/AscMapKitFanPropertiesCustomStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitFanPropertiesCustomStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_SkeletalMeshRelativeTransform_MetaData[] = {
		{ "Category", "AscMapKitFanPropertiesCustomStruct" },
		{ "Comment", "// If you need to modify the skeletal mesh transform, you can do it here.\n" },
		{ "ModuleRelativePath", "Public/Fan/AscMapKitFanPropertiesCustomStruct.h" },
		{ "ToolTip", "If you need to modify the skeletal mesh transform, you can do it here." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_SkeletalMeshRelativeTransform = { "SkeletalMeshRelativeTransform", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitFanPropertiesCustomStruct, SkeletalMeshRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_SkeletalMeshRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_SkeletalMeshRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "AscMapKitFanPropertiesCustomStruct" },
		{ "Comment", "// The skeletal mesh for the fan. This must have a physics asset, otherwise collision will not work. This is your responsibility to setup. The scale must also be correct.\n// * todo: See online documentation for more details.\n" },
		{ "ModuleRelativePath", "Public/Fan/AscMapKitFanPropertiesCustomStruct.h" },
		{ "ToolTip", "The skeletal mesh for the fan. This must have a physics asset, otherwise collision will not work. This is your responsibility to setup. The scale must also be correct.\n* todo: See online documentation for more details." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitFanPropertiesCustomStruct, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_AnimationAsset_MetaData[] = {
		{ "Category", "AscMapKitFanPropertiesCustomStruct" },
		{ "Comment", "// The animation asset used for the fan.\n// * todo: See online documentation for more details.\n" },
		{ "ModuleRelativePath", "Public/Fan/AscMapKitFanPropertiesCustomStruct.h" },
		{ "ToolTip", "The animation asset used for the fan.\n* todo: See online documentation for more details." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_AnimationAsset = { "AnimationAsset", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitFanPropertiesCustomStruct, AnimationAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_AnimationAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_AnimationAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewMaterial_MetaData[] = {
		{ "Category", "AscMapKitFanPropertiesCustomStruct" },
		{ "Comment", "// An optional static mesh material, used only for previewing the fan in the map editor.\n" },
		{ "ModuleRelativePath", "Public/Fan/AscMapKitFanPropertiesCustomStruct.h" },
		{ "ToolTip", "An optional static mesh material, used only for previewing the fan in the map editor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewMaterial = { "StaticMeshPreviewMaterial", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitFanPropertiesCustomStruct, StaticMeshPreviewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewRelativeTransform_MetaData[] = {
		{ "Category", "AscMapKitFanPropertiesCustomStruct" },
		{ "Comment", "// If you need to modify the static mesh preview transform, you can do it here.\n" },
		{ "ModuleRelativePath", "Public/Fan/AscMapKitFanPropertiesCustomStruct.h" },
		{ "ToolTip", "If you need to modify the static mesh preview transform, you can do it here." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewRelativeTransform = { "StaticMeshPreviewRelativeTransform", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitFanPropertiesCustomStruct, StaticMeshPreviewRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_StaticMeshPreview_MetaData[] = {
		{ "Category", "AscMapKitFanPropertiesCustomStruct" },
		{ "Comment", "// An optional static mesh component, used only for previewing the fan in the map editor.\n" },
		{ "ModuleRelativePath", "Public/Fan/AscMapKitFanPropertiesCustomStruct.h" },
		{ "ToolTip", "An optional static mesh component, used only for previewing the fan in the map editor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_StaticMeshPreview = { "StaticMeshPreview", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitFanPropertiesCustomStruct, StaticMeshPreview), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_StaticMeshPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_StaticMeshPreview_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_SkeletalMeshRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_AnimationAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_StaticMeshPreviewRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::NewProp_StaticMeshPreview,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitFanPropertiesCustomStruct",
		sizeof(FAscMapKitFanPropertiesCustomStruct),
		alignof(FAscMapKitFanPropertiesCustomStruct),
		Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitFanPropertiesCustomStruct"), sizeof(FAscMapKitFanPropertiesCustomStruct), Get_Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct_Hash() { return 3863045759U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
