// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Door/AscMapKitDoorPropertiesCustomDestructibleStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitDoorPropertiesCustomDestructibleStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
class UScriptStruct* FAscMapKitDoorPropertiesCustomDestructibleStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitDoorPropertiesCustomDestructibleStruct"), sizeof(FAscMapKitDoorPropertiesCustomDestructibleStruct), Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitDoorPropertiesCustomDestructibleStruct>()
{
	return FAscMapKitDoorPropertiesCustomDestructibleStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct(FAscMapKitDoorPropertiesCustomDestructibleStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitDoorPropertiesCustomDestructibleStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesCustomDestructibleStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesCustomDestructibleStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitDoorPropertiesCustomDestructibleStruct")),new UScriptStruct::TCppStructOps<FAscMapKitDoorPropertiesCustomDestructibleStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesCustomDestructibleStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshDestroyedRelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMeshDestroyedRelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshDestroyed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshRelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMeshRelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesCustomDestructibleStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitDoorPropertiesCustomDestructibleStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::NewProp_StaticMeshDestroyedRelativeTransform_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesCustomDestructibleStruct" },
		{ "Comment", "// If you need to modify the static mesh destroyed state transform, you can do it here.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesCustomDestructibleStruct.h" },
		{ "ToolTip", "If you need to modify the static mesh destroyed state transform, you can do it here." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::NewProp_StaticMeshDestroyedRelativeTransform = { "StaticMeshDestroyedRelativeTransform", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesCustomDestructibleStruct, StaticMeshDestroyedRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::NewProp_StaticMeshDestroyedRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::NewProp_StaticMeshDestroyedRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::NewProp_StaticMeshDestroyed_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesCustomDestructibleStruct" },
		{ "Comment", "// The static mesh used for the destroyed state of the destructible door. \n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesCustomDestructibleStruct.h" },
		{ "ToolTip", "The static mesh used for the destroyed state of the destructible door." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::NewProp_StaticMeshDestroyed = { "StaticMeshDestroyed", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesCustomDestructibleStruct, StaticMeshDestroyed), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::NewProp_StaticMeshDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::NewProp_StaticMeshDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::NewProp_StaticMeshRelativeTransform_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesCustomDestructibleStruct" },
		{ "Comment", "// If you need to modify the static mesh transform, you can do it here.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesCustomDestructibleStruct.h" },
		{ "ToolTip", "If you need to modify the static mesh transform, you can do it here." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::NewProp_StaticMeshRelativeTransform = { "StaticMeshRelativeTransform", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesCustomDestructibleStruct, StaticMeshRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::NewProp_StaticMeshRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::NewProp_StaticMeshRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesCustomDestructibleStruct" },
		{ "Comment", "// The static mesh used for the non-destroyed state of the destructible door.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesCustomDestructibleStruct.h" },
		{ "ToolTip", "The static mesh used for the non-destroyed state of the destructible door." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesCustomDestructibleStruct, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::NewProp_StaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::NewProp_StaticMeshDestroyedRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::NewProp_StaticMeshDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::NewProp_StaticMeshRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::NewProp_StaticMesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitDoorPropertiesCustomDestructibleStruct",
		sizeof(FAscMapKitDoorPropertiesCustomDestructibleStruct),
		alignof(FAscMapKitDoorPropertiesCustomDestructibleStruct),
		Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitDoorPropertiesCustomDestructibleStruct"), sizeof(FAscMapKitDoorPropertiesCustomDestructibleStruct), Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesCustomDestructibleStruct_Hash() { return 2820984647U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
