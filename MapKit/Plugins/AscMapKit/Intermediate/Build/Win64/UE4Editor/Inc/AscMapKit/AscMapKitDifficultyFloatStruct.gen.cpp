// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Core/Constant/AscMapKitDifficultyFloatStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitDifficultyFloatStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
class UScriptStruct* FAscMapKitDifficultyFloatStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitDifficultyFloatStruct"), sizeof(FAscMapKitDifficultyFloatStruct), Get_Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitDifficultyFloatStruct>()
{
	return FAscMapKitDifficultyFloatStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitDifficultyFloatStruct(FAscMapKitDifficultyFloatStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitDifficultyFloatStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDifficultyFloatStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDifficultyFloatStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitDifficultyFloatStruct")),new UScriptStruct::TCppStructOps<FAscMapKitDifficultyFloatStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDifficultyFloatStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Impossible_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Impossible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hard_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Hard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Moderate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Moderate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Easy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Easy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Constant/AscMapKitDifficultyFloatStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitDifficultyFloatStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Impossible_MetaData[] = {
		{ "Category", "AscMapKitDifficultyFloatStruct" },
		{ "Comment", "// The value for game difficulty \"Impossible\".\n" },
		{ "ModuleRelativePath", "Public/Core/Constant/AscMapKitDifficultyFloatStruct.h" },
		{ "ToolTip", "The value for game difficulty \"Impossible\"." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Impossible = { "Impossible", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDifficultyFloatStruct, Impossible), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Impossible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Impossible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Hard_MetaData[] = {
		{ "Category", "AscMapKitDifficultyFloatStruct" },
		{ "Comment", "// The value for game difficulty \"Hard\".\n" },
		{ "ModuleRelativePath", "Public/Core/Constant/AscMapKitDifficultyFloatStruct.h" },
		{ "ToolTip", "The value for game difficulty \"Hard\"." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Hard = { "Hard", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDifficultyFloatStruct, Hard), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Hard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Hard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "AscMapKitDifficultyFloatStruct" },
		{ "Comment", "// The value for game difficulty \"Normal\".\n" },
		{ "ModuleRelativePath", "Public/Core/Constant/AscMapKitDifficultyFloatStruct.h" },
		{ "ToolTip", "The value for game difficulty \"Normal\"." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDifficultyFloatStruct, Normal), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Moderate_MetaData[] = {
		{ "Category", "AscMapKitDifficultyFloatStruct" },
		{ "Comment", "// The value for game difficulty \"Moderate\".\n" },
		{ "ModuleRelativePath", "Public/Core/Constant/AscMapKitDifficultyFloatStruct.h" },
		{ "ToolTip", "The value for game difficulty \"Moderate\"." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Moderate = { "Moderate", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDifficultyFloatStruct, Moderate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Moderate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Moderate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Easy_MetaData[] = {
		{ "Category", "AscMapKitDifficultyFloatStruct" },
		{ "Comment", "// The value for game difficulty \"Easy\".\n" },
		{ "ModuleRelativePath", "Public/Core/Constant/AscMapKitDifficultyFloatStruct.h" },
		{ "ToolTip", "The value for game difficulty \"Easy\"." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Easy = { "Easy", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDifficultyFloatStruct, Easy), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Easy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Easy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Impossible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Hard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Moderate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::NewProp_Easy,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitDifficultyFloatStruct",
		sizeof(FAscMapKitDifficultyFloatStruct),
		alignof(FAscMapKitDifficultyFloatStruct),
		Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitDifficultyFloatStruct"), sizeof(FAscMapKitDifficultyFloatStruct), Get_Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct_Hash() { return 1404743308U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
