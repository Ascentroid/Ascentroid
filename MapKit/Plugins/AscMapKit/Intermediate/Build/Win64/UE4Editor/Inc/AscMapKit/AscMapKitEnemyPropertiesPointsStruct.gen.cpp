// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesPointsStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnemyPropertiesPointsStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDifficultyInt32Struct();
// End Cross Module References
class UScriptStruct* FAscMapKitEnemyPropertiesPointsStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnemyPropertiesPointsStruct"), sizeof(FAscMapKitEnemyPropertiesPointsStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnemyPropertiesPointsStruct>()
{
	return FAscMapKitEnemyPropertiesPointsStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct(FAscMapKitEnemyPropertiesPointsStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnemyPropertiesPointsStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesPointsStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesPointsStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnemyPropertiesPointsStruct")),new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesPointsStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesPointsStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextAutoDestroySeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextAutoDestroySeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextCanvasSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextCanvasSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableTextAboveEnemy_MetaData[];
#endif
		static void NewProp_EnableTextAboveEnemy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableTextAboveEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesPointsStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesPointsStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextAutoDestroySeconds_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesPointsStruct" },
		{ "Comment", "// How long, in seconds, to display the text before is disappears (is destroyed).\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesPointsStruct.h" },
		{ "ToolTip", "How long, in seconds, to display the text before is disappears (is destroyed)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextAutoDestroySeconds = { "TextAutoDestroySeconds", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesPointsStruct, TextAutoDestroySeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextAutoDestroySeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextAutoDestroySeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextDensity_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesPointsStruct" },
		{ "Comment", "// Use to set the density of the text.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesPointsStruct.h" },
		{ "ToolTip", "Use to set the density of the text." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextDensity = { "TextDensity", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesPointsStruct, TextDensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextScale_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesPointsStruct" },
		{ "Comment", "// Use to increase or decrease the size of the text.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesPointsStruct.h" },
		{ "ToolTip", "Use to increase or decrease the size of the text." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextScale = { "TextScale", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesPointsStruct, TextScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextCanvasSize_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesPointsStruct" },
		{ "Comment", "// How large to make the text bounds. Useful in case the enemy bounds conflicts with the default text spawn location.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesPointsStruct.h" },
		{ "ToolTip", "How large to make the text bounds. Useful in case the enemy bounds conflicts with the default text spawn location." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextCanvasSize = { "TextCanvasSize", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesPointsStruct, TextCanvasSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextCanvasSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextCanvasSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextOffset_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesPointsStruct" },
		{ "Comment", "// How much to offset the text. Useful in case the enemy bounds conflicts with the default text spawn location.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesPointsStruct.h" },
		{ "ToolTip", "How much to offset the text. Useful in case the enemy bounds conflicts with the default text spawn location." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextOffset = { "TextOffset", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesPointsStruct, TextOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_EnableTextAboveEnemy_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesPointsStruct" },
		{ "Comment", "// If enabled, a text effect will display above the enemy when they are destroyed.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesPointsStruct.h" },
		{ "ToolTip", "If enabled, a text effect will display above the enemy when they are destroyed." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_EnableTextAboveEnemy_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesPointsStruct*)Obj)->EnableTextAboveEnemy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_EnableTextAboveEnemy = { "EnableTextAboveEnemy", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesPointsStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_EnableTextAboveEnemy_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_EnableTextAboveEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_EnableTextAboveEnemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_PointAmount_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesPointsStruct" },
		{ "Comment", "// The amount of points for this enemy.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesPointsStruct.h" },
		{ "ToolTip", "The amount of points for this enemy." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_PointAmount = { "PointAmount", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesPointsStruct, PointAmount), Z_Construct_UScriptStruct_FAscMapKitDifficultyInt32Struct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_PointAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_PointAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_Enable_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesPointsStruct" },
		{ "Comment", "// If enabled, this enemy will have points in single player and cooperative game modes.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesPointsStruct.h" },
		{ "ToolTip", "If enabled, this enemy will have points in single player and cooperative game modes." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesPointsStruct*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesPointsStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextAutoDestroySeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextCanvasSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_TextOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_EnableTextAboveEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_PointAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::NewProp_Enable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnemyPropertiesPointsStruct",
		sizeof(FAscMapKitEnemyPropertiesPointsStruct),
		alignof(FAscMapKitEnemyPropertiesPointsStruct),
		Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnemyPropertiesPointsStruct"), sizeof(FAscMapKitEnemyPropertiesPointsStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesPointsStruct_Hash() { return 4177237377U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
