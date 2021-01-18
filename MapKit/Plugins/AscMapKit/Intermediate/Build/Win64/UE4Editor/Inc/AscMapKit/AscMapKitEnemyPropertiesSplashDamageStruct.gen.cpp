// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesSplashDamageStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnemyPropertiesSplashDamageStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct();
// End Cross Module References
class UScriptStruct* FAscMapKitEnemyPropertiesSplashDamageStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnemyPropertiesSplashDamageStruct"), sizeof(FAscMapKitEnemyPropertiesSplashDamageStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnemyPropertiesSplashDamageStruct>()
{
	return FAscMapKitEnemyPropertiesSplashDamageStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct(FAscMapKitEnemyPropertiesSplashDamageStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnemyPropertiesSplashDamageStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesSplashDamageStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesSplashDamageStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnemyPropertiesSplashDamageStruct")),new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesSplashDamageStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesSplashDamageStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseInterpSpeedAgainstEnemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpulseInterpSpeedAgainstEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseStrengthAgainstEnemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpulseStrengthAgainstEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpulseModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpulseStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpulseRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FixedAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseFixedAmount_MetaData[];
#endif
		static void NewProp_UseFixedAmount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseFixedAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearFalloffAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearFalloffAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseLinearFalloffAmount_MetaData[];
#endif
		static void NewProp_UseLinearFalloffAmount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseLinearFalloffAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesSplashDamageStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesSplashDamageStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseInterpSpeedAgainstEnemy_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesSplashDamageStruct" },
		{ "Comment", "// If the actor affected by the splash damage is an enemy, use this interpolation rate while applying the impulse effect. \n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesSplashDamageStruct.h" },
		{ "ToolTip", "If the actor affected by the splash damage is an enemy, use this interpolation rate while applying the impulse effect." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseInterpSpeedAgainstEnemy = { "ImpulseInterpSpeedAgainstEnemy", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesSplashDamageStruct, ImpulseInterpSpeedAgainstEnemy), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseInterpSpeedAgainstEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseInterpSpeedAgainstEnemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseStrengthAgainstEnemy_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesSplashDamageStruct" },
		{ "Comment", "// If the actor affected by the splash damage is an enemy, use this impulse strength amount.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesSplashDamageStruct.h" },
		{ "ToolTip", "If the actor affected by the splash damage is an enemy, use this impulse strength amount." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseStrengthAgainstEnemy = { "ImpulseStrengthAgainstEnemy", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesSplashDamageStruct, ImpulseStrengthAgainstEnemy), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseStrengthAgainstEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseStrengthAgainstEnemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseModifier_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesSplashDamageStruct" },
		{ "Comment", "// This value is multiplied by the \"Impulse Strength\", in case there is a need for scaling.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesSplashDamageStruct.h" },
		{ "ToolTip", "This value is multiplied by the \"Impulse Strength\", in case there is a need for scaling." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseModifier = { "ImpulseModifier", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesSplashDamageStruct, ImpulseModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseStrength_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesSplashDamageStruct" },
		{ "Comment", "// How much impulse is applied to players during the splash damage effect.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesSplashDamageStruct.h" },
		{ "ToolTip", "How much impulse is applied to players during the splash damage effect." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseStrength = { "ImpulseStrength", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesSplashDamageStruct, ImpulseStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseRadius_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesSplashDamageStruct" },
		{ "Comment", "// The radius used to apply the splash damage.\n// * 2000 is the size of a cube.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesSplashDamageStruct.h" },
		{ "ToolTip", "The radius used to apply the splash damage.\n* 2000 is the size of a cube." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseRadius = { "ImpulseRadius", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesSplashDamageStruct, ImpulseRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_FixedAmount_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesSplashDamageStruct" },
		{ "Comment", "// The amount of damage for the fixed amount.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesSplashDamageStruct.h" },
		{ "ToolTip", "The amount of damage for the fixed amount." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_FixedAmount = { "FixedAmount", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesSplashDamageStruct, FixedAmount), Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_FixedAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_FixedAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_UseFixedAmount_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesSplashDamageStruct" },
		{ "Comment", "// If enabled, splash damage will use a fixed damage amount. This overrides \"Use Linear Falloff Amount\".\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesSplashDamageStruct.h" },
		{ "ToolTip", "If enabled, splash damage will use a fixed damage amount. This overrides \"Use Linear Falloff Amount\"." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_UseFixedAmount_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesSplashDamageStruct*)Obj)->UseFixedAmount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_UseFixedAmount = { "UseFixedAmount", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesSplashDamageStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_UseFixedAmount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_UseFixedAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_UseFixedAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_LinearFalloffAmount_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesSplashDamageStruct" },
		{ "Comment", "// The maximum amount of damage for the linear falloff calculation.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesSplashDamageStruct.h" },
		{ "ToolTip", "The maximum amount of damage for the linear falloff calculation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_LinearFalloffAmount = { "LinearFalloffAmount", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesSplashDamageStruct, LinearFalloffAmount), Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_LinearFalloffAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_LinearFalloffAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_UseLinearFalloffAmount_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesSplashDamageStruct" },
		{ "Comment", "// If enabled, splash damage will use a linear falloff calculation. This is negated if \"Use Fixed Amount\" is enabled.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesSplashDamageStruct.h" },
		{ "ToolTip", "If enabled, splash damage will use a linear falloff calculation. This is negated if \"Use Fixed Amount\" is enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_UseLinearFalloffAmount_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesSplashDamageStruct*)Obj)->UseLinearFalloffAmount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_UseLinearFalloffAmount = { "UseLinearFalloffAmount", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesSplashDamageStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_UseLinearFalloffAmount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_UseLinearFalloffAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_UseLinearFalloffAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseInterpSpeedAgainstEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseStrengthAgainstEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_ImpulseRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_FixedAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_UseFixedAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_LinearFalloffAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::NewProp_UseLinearFalloffAmount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnemyPropertiesSplashDamageStruct",
		sizeof(FAscMapKitEnemyPropertiesSplashDamageStruct),
		alignof(FAscMapKitEnemyPropertiesSplashDamageStruct),
		Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnemyPropertiesSplashDamageStruct"), sizeof(FAscMapKitEnemyPropertiesSplashDamageStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesSplashDamageStruct_Hash() { return 102842687U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
