// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Door/AscMapKitDoorPropertiesCustomNonDestructibleStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitDoorPropertiesCustomNonDestructibleStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ASCMAPKIT_API UClass* Z_Construct_UClass_UAscMapKitDoorPlayerInteractBoundingBox_NoRegister();
// End Cross Module References
class UScriptStruct* FAscMapKitDoorPropertiesCustomNonDestructibleStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitDoorPropertiesCustomNonDestructibleStruct"), sizeof(FAscMapKitDoorPropertiesCustomNonDestructibleStruct), Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitDoorPropertiesCustomNonDestructibleStruct>()
{
	return FAscMapKitDoorPropertiesCustomNonDestructibleStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct(FAscMapKitDoorPropertiesCustomNonDestructibleStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitDoorPropertiesCustomNonDestructibleStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesCustomNonDestructibleStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesCustomNonDestructibleStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitDoorPropertiesCustomNonDestructibleStruct")),new UScriptStruct::TCppStructOps<FAscMapKitDoorPropertiesCustomNonDestructibleStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesCustomNonDestructibleStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationBlueprintClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AnimationBlueprintClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInteractBoundingBoxExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerInteractBoundingBoxExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInteractBoundingBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerInteractBoundingBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesCustomNonDestructibleStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitDoorPropertiesCustomNonDestructibleStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_SkeletalMeshRelativeTransform_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesCustomNonDestructibleStruct" },
		{ "Comment", "// If you need to modify the skeletal mesh transform, you can do it here.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesCustomNonDestructibleStruct.h" },
		{ "ToolTip", "If you need to modify the skeletal mesh transform, you can do it here." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_SkeletalMeshRelativeTransform = { "SkeletalMeshRelativeTransform", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesCustomNonDestructibleStruct, SkeletalMeshRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_SkeletalMeshRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_SkeletalMeshRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesCustomNonDestructibleStruct" },
		{ "Comment", "// The skeletal mesh for the door. This must have a physics asset, otherwise collision will not work. This is your responsibility to setup. The scale must also be correct.\n// * todo: See online documentation for more details.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesCustomNonDestructibleStruct.h" },
		{ "ToolTip", "The skeletal mesh for the door. This must have a physics asset, otherwise collision will not work. This is your responsibility to setup. The scale must also be correct.\n* todo: See online documentation for more details." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesCustomNonDestructibleStruct, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_AnimationBlueprintClass_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesCustomNonDestructibleStruct" },
		{ "Comment", "// The animation blueprint used for the door. The parent class must be UAscMapKitDoorAnimInstance.\n// * todo: See online documentation for more details.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesCustomNonDestructibleStruct.h" },
		{ "ToolTip", "The animation blueprint used for the door. The parent class must be UAscMapKitDoorAnimInstance.\n* todo: See online documentation for more details." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_AnimationBlueprintClass = { "AnimationBlueprintClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesCustomNonDestructibleStruct, AnimationBlueprintClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_AnimationBlueprintClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_AnimationBlueprintClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_PlayerInteractBoundingBoxExtent_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesCustomNonDestructibleStruct" },
		{ "Comment", "// The game runtime player interact collision size of this door.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesCustomNonDestructibleStruct.h" },
		{ "ToolTip", "The game runtime player interact collision size of this door." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_PlayerInteractBoundingBoxExtent = { "PlayerInteractBoundingBoxExtent", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesCustomNonDestructibleStruct, PlayerInteractBoundingBoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_PlayerInteractBoundingBoxExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_PlayerInteractBoundingBoxExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_PlayerInteractBoundingBox_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesCustomNonDestructibleStruct" },
		{ "Comment", "// The game runtime player interact collision size of this door. This is to give you an idea of the player interact bounding box dimensions.\n// * This is purely for editor visual assistance. To change the size, edit the \"Player Interact Bounding Box Extent\" (the next property).\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesCustomNonDestructibleStruct.h" },
		{ "ToolTip", "The game runtime player interact collision size of this door. This is to give you an idea of the player interact bounding box dimensions.\n* This is purely for editor visual assistance. To change the size, edit the \"Player Interact Bounding Box Extent\" (the next property)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_PlayerInteractBoundingBox = { "PlayerInteractBoundingBox", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesCustomNonDestructibleStruct, PlayerInteractBoundingBox), Z_Construct_UClass_UAscMapKitDoorPlayerInteractBoundingBox_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_PlayerInteractBoundingBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_PlayerInteractBoundingBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_SkeletalMeshRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_AnimationBlueprintClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_PlayerInteractBoundingBoxExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::NewProp_PlayerInteractBoundingBox,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitDoorPropertiesCustomNonDestructibleStruct",
		sizeof(FAscMapKitDoorPropertiesCustomNonDestructibleStruct),
		alignof(FAscMapKitDoorPropertiesCustomNonDestructibleStruct),
		Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitDoorPropertiesCustomNonDestructibleStruct"), sizeof(FAscMapKitDoorPropertiesCustomNonDestructibleStruct), Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomNonDestructibleStruct_Hash() { return 2787011177U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
