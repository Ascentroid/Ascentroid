// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
class UScriptStruct* FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct"), sizeof(FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct>()
{
	return FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct(FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct")),new UScriptStruct::TCppStructOps<FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Statics::NewProp_Factor_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct" },
		{ "Comment", "// A factor amount which is multiplied against the projectile's velocity game runtime speed.\n// * For example: 0.5 would be half of the projectile's default velocity game runtime speed.\n// * Another example: 2.0 would double the projectile's default velocity game runtime speed.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct.h" },
		{ "ToolTip", "A factor amount which is multiplied against the projectile's velocity game runtime speed.\n* For example: 0.5 would be half of the projectile's default velocity game runtime speed.\n* Another example: 2.0 would double the projectile's default velocity game runtime speed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Statics::NewProp_Factor = { "Factor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct, Factor), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Statics::NewProp_Factor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Statics::NewProp_Factor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Statics::NewProp_Enable_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct" },
		{ "Comment", "// Check to enable projectile movement modifiers (such as slowing down, or speeding up, projectiles).\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct.h" },
		{ "ToolTip", "Check to enable projectile movement modifiers (such as slowing down, or speeding up, projectiles)." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct), &Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Statics::NewProp_Factor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Statics::NewProp_Enable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct",
		sizeof(FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct),
		alignof(FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct),
		Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct"), sizeof(FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesProjectileMovementModifierStruct_Hash() { return 2457435381U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
