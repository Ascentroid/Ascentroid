// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesSplashDamageStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnvironmentAreaPropertiesSplashDamageStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
class UScriptStruct* FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnvironmentAreaPropertiesSplashDamageStruct"), sizeof(FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct>()
{
	return FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct(FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnvironmentAreaPropertiesSplashDamageStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesSplashDamageStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesSplashDamageStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnvironmentAreaPropertiesSplashDamageStruct")),new UScriptStruct::TCppStructOps<FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesSplashDamageStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Modifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesSplashDamageStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Modifier_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesSplashDamageStruct" },
		{ "Comment", "// Multiplies the strength by this amount.\n// * Optional: will default to 1 if set to 0 or less.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesSplashDamageStruct.h" },
		{ "ToolTip", "Multiplies the strength by this amount.\n* Optional: will default to 1 if set to 0 or less." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct, Modifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Modifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Modifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesSplashDamageStruct" },
		{ "Comment", "// The strength for the splash damage.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesSplashDamageStruct.h" },
		{ "ToolTip", "The strength for the splash damage." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct, Strength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesSplashDamageStruct" },
		{ "Comment", "// The radius for the splash damage.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesSplashDamageStruct.h" },
		{ "ToolTip", "The radius for the splash damage." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesSplashDamageStruct" },
		{ "Comment", "// The amount of damage the splash damage does.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesSplashDamageStruct.h" },
		{ "ToolTip", "The amount of damage the splash damage does." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Amount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Enable_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesSplashDamageStruct" },
		{ "Comment", "// If checked, projectiles will cause splash damage when they overlap the environment area.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesSplashDamageStruct.h" },
		{ "ToolTip", "If checked, projectiles will cause splash damage when they overlap the environment area." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct), &Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Modifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::NewProp_Enable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnvironmentAreaPropertiesSplashDamageStruct",
		sizeof(FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct),
		alignof(FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct),
		Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnvironmentAreaPropertiesSplashDamageStruct"), sizeof(FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesSplashDamageStruct_Hash() { return 2640962266U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
