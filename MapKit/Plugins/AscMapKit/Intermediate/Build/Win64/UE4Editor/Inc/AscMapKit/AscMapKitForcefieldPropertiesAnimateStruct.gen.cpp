// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Forcefield/AscMapKitForcefieldPropertiesAnimateStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitForcefieldPropertiesAnimateStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitXYZEnum();
// End Cross Module References
class UScriptStruct* FAscMapKitForcefieldPropertiesAnimateStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitForcefieldPropertiesAnimateStruct"), sizeof(FAscMapKitForcefieldPropertiesAnimateStruct), Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitForcefieldPropertiesAnimateStruct>()
{
	return FAscMapKitForcefieldPropertiesAnimateStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct(FAscMapKitForcefieldPropertiesAnimateStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitForcefieldPropertiesAnimateStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitForcefieldPropertiesAnimateStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitForcefieldPropertiesAnimateStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitForcefieldPropertiesAnimateStruct")),new UScriptStruct::TCppStructOps<FAscMapKitForcefieldPropertiesAnimateStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitForcefieldPropertiesAnimateStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialDelaySeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialDelaySeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Threshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesAnimateStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitForcefieldPropertiesAnimateStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_InitialDelaySeconds_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesAnimateStruct" },
		{ "Comment", "// How long, in seconds, to wait before the initial animation begins.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesAnimateStruct.h" },
		{ "ToolTip", "How long, in seconds, to wait before the initial animation begins." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_InitialDelaySeconds = { "InitialDelaySeconds", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesAnimateStruct, InitialDelaySeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_InitialDelaySeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_InitialDelaySeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesAnimateStruct" },
		{ "Comment", "// The world axis threshold for the bob up and down animation.\n// * Must be greater than zero.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesAnimateStruct.h" },
		{ "ToolTip", "The world axis threshold for the bob up and down animation.\n* Must be greater than zero." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesAnimateStruct, Threshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Threshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesAnimateStruct" },
		{ "Comment", "// How fast to move the forcefield every tick.\n// * Must be greater than zero.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesAnimateStruct.h" },
		{ "ToolTip", "How fast to move the forcefield every tick.\n* Must be greater than zero." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesAnimateStruct, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesAnimateStruct" },
		{ "Comment", "// How far to move the forcefield every tick.\n// * Must be greater than zero.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesAnimateStruct.h" },
		{ "ToolTip", "How far to move the forcefield every tick.\n* Must be greater than zero." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesAnimateStruct, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Axis_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesAnimateStruct" },
		{ "Comment", "// Which world axis to animate bobbing on.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesAnimateStruct.h" },
		{ "ToolTip", "Which world axis to animate bobbing on." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitForcefieldPropertiesAnimateStruct, Axis), Z_Construct_UEnum_AscMapKit_EAscMapKitXYZEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Axis_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Enable_MetaData[] = {
		{ "Category", "AscMapKitForcefieldPropertiesAnimateStruct" },
		{ "Comment", "// If checked, the forcefield mesh will animate (bob up and down).\n// * This is currently a fixed animation that is baked into the game runtime.\n" },
		{ "ModuleRelativePath", "Public/Forcefield/AscMapKitForcefieldPropertiesAnimateStruct.h" },
		{ "ToolTip", "If checked, the forcefield mesh will animate (bob up and down).\n* This is currently a fixed animation that is baked into the game runtime." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FAscMapKitForcefieldPropertiesAnimateStruct*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitForcefieldPropertiesAnimateStruct), &Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_InitialDelaySeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Threshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Axis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::NewProp_Enable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitForcefieldPropertiesAnimateStruct",
		sizeof(FAscMapKitForcefieldPropertiesAnimateStruct),
		alignof(FAscMapKitForcefieldPropertiesAnimateStruct),
		Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitForcefieldPropertiesAnimateStruct"), sizeof(FAscMapKitForcefieldPropertiesAnimateStruct), Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitForcefieldPropertiesAnimateStruct_Hash() { return 2724265904U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
