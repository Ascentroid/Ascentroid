// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
class UScriptStruct* FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct"), sizeof(FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct>()
{
	return FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct(FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct")),new UScriptStruct::TCppStructOps<FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Factor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Factor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Statics::NewProp_Factor_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct" },
		{ "Comment", "// A factor amount which is multiplied against the powerup's rotation game runtime speed.\n// * For example: 0.5 would be half of the powerup's default rotation game runtime speed.\n// * Another example: 2.0 would double the powerup's default rotation game runtime speed.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct.h" },
		{ "ToolTip", "A factor amount which is multiplied against the powerup's rotation game runtime speed.\n* For example: 0.5 would be half of the powerup's default rotation game runtime speed.\n* Another example: 2.0 would double the powerup's default rotation game runtime speed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Statics::NewProp_Factor = { "Factor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct, Factor), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Statics::NewProp_Factor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Statics::NewProp_Factor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Statics::NewProp_Enable_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct" },
		{ "Comment", "// Check to enable powerup movement modifiers (such as slowing down, or speeding up, powerups).\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct.h" },
		{ "ToolTip", "Check to enable powerup movement modifiers (such as slowing down, or speeding up, powerups)." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct), &Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Statics::NewProp_Factor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Statics::NewProp_Enable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct",
		sizeof(FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct),
		alignof(FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct),
		Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct"), sizeof(FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPowerupMovementModifierStruct_Hash() { return 2094881642U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
