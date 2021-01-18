// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesOnForcefieldChangeStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitTriggerPropertiesOnForcefieldChangeStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
class UScriptStruct* FAscMapKitTriggerPropertiesOnForcefieldChangeStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitTriggerPropertiesOnForcefieldChangeStruct"), sizeof(FAscMapKitTriggerPropertiesOnForcefieldChangeStruct), Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitTriggerPropertiesOnForcefieldChangeStruct>()
{
	return FAscMapKitTriggerPropertiesOnForcefieldChangeStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct(FAscMapKitTriggerPropertiesOnForcefieldChangeStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitTriggerPropertiesOnForcefieldChangeStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesOnForcefieldChangeStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesOnForcefieldChangeStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitTriggerPropertiesOnForcefieldChangeStruct")),new UScriptStruct::TCppStructOps<FAscMapKitTriggerPropertiesOnForcefieldChangeStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesOnForcefieldChangeStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomEnablePulseHudMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomEnablePulseHudMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowEnablePulseHudMessage_MetaData[];
#endif
		static void NewProp_ShowEnablePulseHudMessage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowEnablePulseHudMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcefieldIdsToEnablePulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ForcefieldIdsToEnablePulse;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ForcefieldIdsToEnablePulse_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDisablePulseHudMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomDisablePulseHudMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowDisablePulseHudMessage_MetaData[];
#endif
		static void NewProp_ShowDisablePulseHudMessage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowDisablePulseHudMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcefieldIdsToDisablePulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ForcefieldIdsToDisablePulse;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ForcefieldIdsToDisablePulse_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomEnableHudMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomEnableHudMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowEnableHudMessage_MetaData[];
#endif
		static void NewProp_ShowEnableHudMessage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowEnableHudMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcefieldIdsToEnable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ForcefieldIdsToEnable;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ForcefieldIdsToEnable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDisableHudMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomDisableHudMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowDisableHudMessage_MetaData[];
#endif
		static void NewProp_ShowDisableHudMessage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowDisableHudMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcefieldIdsToDisable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ForcefieldIdsToDisable;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ForcefieldIdsToDisable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelaySeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelaySeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnForcefieldChangeStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitTriggerPropertiesOnForcefieldChangeStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_CustomEnablePulseHudMessage_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOnForcefieldChangeStruct" },
		{ "Comment", "// If you want to provide a custom HUD message, use this field.\n// * If left empty, the game will generate a message at runtime.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnForcefieldChangeStruct.h" },
		{ "ToolTip", "If you want to provide a custom HUD message, use this field.\n* If left empty, the game will generate a message at runtime." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_CustomEnablePulseHudMessage = { "CustomEnablePulseHudMessage", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesOnForcefieldChangeStruct, CustomEnablePulseHudMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_CustomEnablePulseHudMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_CustomEnablePulseHudMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowEnablePulseHudMessage_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOnForcefieldChangeStruct" },
		{ "Comment", "// Check this if you want to show a HUD message when the trigger affects forcefield(s).\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnForcefieldChangeStruct.h" },
		{ "ToolTip", "Check this if you want to show a HUD message when the trigger affects forcefield(s)." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowEnablePulseHudMessage_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesOnForcefieldChangeStruct*)Obj)->ShowEnablePulseHudMessage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowEnablePulseHudMessage = { "ShowEnablePulseHudMessage", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesOnForcefieldChangeStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowEnablePulseHudMessage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowEnablePulseHudMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowEnablePulseHudMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToEnablePulse_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOnForcefieldChangeStruct" },
		{ "Comment", "// A list of forcefield IDs that should be enable pulse when this operation executes.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnForcefieldChangeStruct.h" },
		{ "ToolTip", "A list of forcefield IDs that should be enable pulse when this operation executes." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToEnablePulse = { "ForcefieldIdsToEnablePulse", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesOnForcefieldChangeStruct, ForcefieldIdsToEnablePulse), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToEnablePulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToEnablePulse_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToEnablePulse_Inner = { "ForcefieldIdsToEnablePulse", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_CustomDisablePulseHudMessage_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOnForcefieldChangeStruct" },
		{ "Comment", "// If you want to provide a custom HUD message, use this field.\n// * If left empty, the game will generate a message at runtime.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnForcefieldChangeStruct.h" },
		{ "ToolTip", "If you want to provide a custom HUD message, use this field.\n* If left empty, the game will generate a message at runtime." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_CustomDisablePulseHudMessage = { "CustomDisablePulseHudMessage", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesOnForcefieldChangeStruct, CustomDisablePulseHudMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_CustomDisablePulseHudMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_CustomDisablePulseHudMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowDisablePulseHudMessage_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOnForcefieldChangeStruct" },
		{ "Comment", "// Check this if you want to show a HUD message when the trigger affects forcefield(s).\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnForcefieldChangeStruct.h" },
		{ "ToolTip", "Check this if you want to show a HUD message when the trigger affects forcefield(s)." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowDisablePulseHudMessage_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesOnForcefieldChangeStruct*)Obj)->ShowDisablePulseHudMessage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowDisablePulseHudMessage = { "ShowDisablePulseHudMessage", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesOnForcefieldChangeStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowDisablePulseHudMessage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowDisablePulseHudMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowDisablePulseHudMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToDisablePulse_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOnForcefieldChangeStruct" },
		{ "Comment", "// A list of forcefield IDs that should be disable pulse when this operation executes.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnForcefieldChangeStruct.h" },
		{ "ToolTip", "A list of forcefield IDs that should be disable pulse when this operation executes." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToDisablePulse = { "ForcefieldIdsToDisablePulse", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesOnForcefieldChangeStruct, ForcefieldIdsToDisablePulse), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToDisablePulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToDisablePulse_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToDisablePulse_Inner = { "ForcefieldIdsToDisablePulse", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_CustomEnableHudMessage_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOnForcefieldChangeStruct" },
		{ "Comment", "// If you want to provide a custom HUD message, use this field.\n// * If left empty, the game will generate a message at runtime.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnForcefieldChangeStruct.h" },
		{ "ToolTip", "If you want to provide a custom HUD message, use this field.\n* If left empty, the game will generate a message at runtime." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_CustomEnableHudMessage = { "CustomEnableHudMessage", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesOnForcefieldChangeStruct, CustomEnableHudMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_CustomEnableHudMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_CustomEnableHudMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowEnableHudMessage_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOnForcefieldChangeStruct" },
		{ "Comment", "// Check this if you want to show a HUD message when the trigger affects forcefield(s).\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnForcefieldChangeStruct.h" },
		{ "ToolTip", "Check this if you want to show a HUD message when the trigger affects forcefield(s)." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowEnableHudMessage_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesOnForcefieldChangeStruct*)Obj)->ShowEnableHudMessage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowEnableHudMessage = { "ShowEnableHudMessage", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesOnForcefieldChangeStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowEnableHudMessage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowEnableHudMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowEnableHudMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToEnable_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOnForcefieldChangeStruct" },
		{ "Comment", "// A list of forcefield IDs that should be enabled when this operation executes.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnForcefieldChangeStruct.h" },
		{ "ToolTip", "A list of forcefield IDs that should be enabled when this operation executes." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToEnable = { "ForcefieldIdsToEnable", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesOnForcefieldChangeStruct, ForcefieldIdsToEnable), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToEnable_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToEnable_Inner = { "ForcefieldIdsToEnable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_CustomDisableHudMessage_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOnForcefieldChangeStruct" },
		{ "Comment", "// If you want to provide a custom HUD message, use this field.\n// * If left empty, the game will generate a message at runtime.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnForcefieldChangeStruct.h" },
		{ "ToolTip", "If you want to provide a custom HUD message, use this field.\n* If left empty, the game will generate a message at runtime." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_CustomDisableHudMessage = { "CustomDisableHudMessage", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesOnForcefieldChangeStruct, CustomDisableHudMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_CustomDisableHudMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_CustomDisableHudMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowDisableHudMessage_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOnForcefieldChangeStruct" },
		{ "Comment", "// Check this if you want to show a HUD message when the trigger affects forcefield(s).\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnForcefieldChangeStruct.h" },
		{ "ToolTip", "Check this if you want to show a HUD message when the trigger affects forcefield(s)." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowDisableHudMessage_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesOnForcefieldChangeStruct*)Obj)->ShowDisableHudMessage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowDisableHudMessage = { "ShowDisableHudMessage", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesOnForcefieldChangeStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowDisableHudMessage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowDisableHudMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowDisableHudMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToDisable_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOnForcefieldChangeStruct" },
		{ "Comment", "// A list of forcefield IDs that should be disabled when this operation executes.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnForcefieldChangeStruct.h" },
		{ "ToolTip", "A list of forcefield IDs that should be disabled when this operation executes." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToDisable = { "ForcefieldIdsToDisable", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesOnForcefieldChangeStruct, ForcefieldIdsToDisable), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToDisable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToDisable_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToDisable_Inner = { "ForcefieldIdsToDisable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_DelaySeconds_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOnForcefieldChangeStruct" },
		{ "Comment", "// A delay in seconds before the forcefield(s) are affected.\n// * This is helpful in case you have effects you want to execute before the operation is performed.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnForcefieldChangeStruct.h" },
		{ "ToolTip", "A delay in seconds before the forcefield(s) are affected.\n* This is helpful in case you have effects you want to execute before the operation is performed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_DelaySeconds = { "DelaySeconds", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesOnForcefieldChangeStruct, DelaySeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_DelaySeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_DelaySeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_Enable_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOnForcefieldChangeStruct" },
		{ "Comment", "// Check this if you want the trigger to affect forcefield(s).\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnForcefieldChangeStruct.h" },
		{ "ToolTip", "Check this if you want the trigger to affect forcefield(s)." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesOnForcefieldChangeStruct*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesOnForcefieldChangeStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_CustomEnablePulseHudMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowEnablePulseHudMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToEnablePulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToEnablePulse_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_CustomDisablePulseHudMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowDisablePulseHudMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToDisablePulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToDisablePulse_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_CustomEnableHudMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowEnableHudMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToEnable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_CustomDisableHudMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ShowDisableHudMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToDisable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_ForcefieldIdsToDisable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_DelaySeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::NewProp_Enable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitTriggerPropertiesOnForcefieldChangeStruct",
		sizeof(FAscMapKitTriggerPropertiesOnForcefieldChangeStruct),
		alignof(FAscMapKitTriggerPropertiesOnForcefieldChangeStruct),
		Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitTriggerPropertiesOnForcefieldChangeStruct"), sizeof(FAscMapKitTriggerPropertiesOnForcefieldChangeStruct), Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct_Hash() { return 2255932262U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
