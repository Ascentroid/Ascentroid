// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesReusableMaterialsStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitTriggerPropertiesReusableMaterialsStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FAscMapKitTriggerPropertiesReusableMaterialsStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitTriggerPropertiesReusableMaterialsStruct"), sizeof(FAscMapKitTriggerPropertiesReusableMaterialsStruct), Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitTriggerPropertiesReusableMaterialsStruct>()
{
	return FAscMapKitTriggerPropertiesReusableMaterialsStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct(FAscMapKitTriggerPropertiesReusableMaterialsStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitTriggerPropertiesReusableMaterialsStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesReusableMaterialsStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesReusableMaterialsStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitTriggerPropertiesReusableMaterialsStruct")),new UScriptStruct::TCppStructOps<FAscMapKitTriggerPropertiesReusableMaterialsStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesReusableMaterialsStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inactive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inactive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Used_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Used;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotUsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NotUsed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableMaterialsStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitTriggerPropertiesReusableMaterialsStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::NewProp_Inactive_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesReusableMaterialsStruct" },
		{ "Comment", "// The material for the \"Inactive\" state.\n// * If you are using a custom static mesh, please name the material slot \"TriggerState\". This is the material that will be replaced.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableMaterialsStruct.h" },
		{ "ToolTip", "The material for the \"Inactive\" state.\n* If you are using a custom static mesh, please name the material slot \"TriggerState\". This is the material that will be replaced." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::NewProp_Inactive = { "Inactive", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesReusableMaterialsStruct, Inactive), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::NewProp_Inactive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::NewProp_Inactive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::NewProp_Used_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesReusableMaterialsStruct" },
		{ "Comment", "// The material for the \"Used\" state.\n// * If you are using a custom static mesh, please name the material slot \"TriggerState\". This is the material that will be replaced.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableMaterialsStruct.h" },
		{ "ToolTip", "The material for the \"Used\" state.\n* If you are using a custom static mesh, please name the material slot \"TriggerState\". This is the material that will be replaced." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::NewProp_Used = { "Used", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesReusableMaterialsStruct, Used), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::NewProp_Used_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::NewProp_Used_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::NewProp_NotUsed_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesReusableMaterialsStruct" },
		{ "Comment", "// The material for the \"Not Used\" state.\n// * If you are using a custom static mesh, please name the material slot \"TriggerState\". This is the material that will be replaced.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableMaterialsStruct.h" },
		{ "ToolTip", "The material for the \"Not Used\" state.\n* If you are using a custom static mesh, please name the material slot \"TriggerState\". This is the material that will be replaced." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::NewProp_NotUsed = { "NotUsed", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesReusableMaterialsStruct, NotUsed), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::NewProp_NotUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::NewProp_NotUsed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::NewProp_Inactive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::NewProp_Used,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::NewProp_NotUsed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitTriggerPropertiesReusableMaterialsStruct",
		sizeof(FAscMapKitTriggerPropertiesReusableMaterialsStruct),
		alignof(FAscMapKitTriggerPropertiesReusableMaterialsStruct),
		Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitTriggerPropertiesReusableMaterialsStruct"), sizeof(FAscMapKitTriggerPropertiesReusableMaterialsStruct), Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct_Hash() { return 369253131U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
