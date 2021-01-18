// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
class UScriptStruct* FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct"), sizeof(FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct>()
{
	return FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct(FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct")),new UScriptStruct::TCppStructOps<FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoostFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoostFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::NewProp_RotationFactor_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct" },
		{ "Comment", "// A factor amount which is multiplied against the player's default rotation game runtime speed.\n// * For example: 0.5 would be half of the player's default rotation game runtime speed.\n// * Another example: 2.0 would double the player's default rotation game runtime speed.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct.h" },
		{ "ToolTip", "A factor amount which is multiplied against the player's default rotation game runtime speed.\n* For example: 0.5 would be half of the player's default rotation game runtime speed.\n* Another example: 2.0 would double the player's default rotation game runtime speed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::NewProp_RotationFactor = { "RotationFactor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct, RotationFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::NewProp_RotationFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::NewProp_RotationFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::NewProp_BoostFactor_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct" },
		{ "Comment", "// A factor amount which is multiplied against the player's default boost game runtime speed.\n// * For example: 0.5 would be half of the player's default boost game runtime speed.\n// * Another example: 2.0 would double the player's default boost game runtime speed.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct.h" },
		{ "ToolTip", "A factor amount which is multiplied against the player's default boost game runtime speed.\n* For example: 0.5 would be half of the player's default boost game runtime speed.\n* Another example: 2.0 would double the player's default boost game runtime speed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::NewProp_BoostFactor = { "BoostFactor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct, BoostFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::NewProp_BoostFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::NewProp_BoostFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::NewProp_VelocityFactor_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct" },
		{ "Comment", "// A factor amount which is multiplied against the player's default velocity game runtime speed.\n// * For example: 0.5 would be half of the player's default velocity game runtime speed.\n// * Another example: 2.0 would double the player's default velocity game runtime speed.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct.h" },
		{ "ToolTip", "A factor amount which is multiplied against the player's default velocity game runtime speed.\n* For example: 0.5 would be half of the player's default velocity game runtime speed.\n* Another example: 2.0 would double the player's default velocity game runtime speed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::NewProp_VelocityFactor = { "VelocityFactor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct, VelocityFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::NewProp_VelocityFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::NewProp_VelocityFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::NewProp_Enable_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct" },
		{ "Comment", "// Check to enable player movement modifiers (such as slowing down, or speeding up, players).\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct.h" },
		{ "ToolTip", "Check to enable player movement modifiers (such as slowing down, or speeding up, players)." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct), &Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::NewProp_RotationFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::NewProp_BoostFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::NewProp_VelocityFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::NewProp_Enable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct",
		sizeof(FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct),
		alignof(FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct),
		Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct"), sizeof(FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPlayerMovementModifierStruct_Hash() { return 2446124709U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
