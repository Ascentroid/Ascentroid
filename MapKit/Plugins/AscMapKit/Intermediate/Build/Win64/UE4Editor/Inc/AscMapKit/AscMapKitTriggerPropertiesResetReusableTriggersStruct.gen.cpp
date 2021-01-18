// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesResetReusableTriggersStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitTriggerPropertiesResetReusableTriggersStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct();
// End Cross Module References
class UScriptStruct* FAscMapKitTriggerPropertiesResetReusableTriggersStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitTriggerPropertiesResetReusableTriggersStruct"), sizeof(FAscMapKitTriggerPropertiesResetReusableTriggersStruct), Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitTriggerPropertiesResetReusableTriggersStruct>()
{
	return FAscMapKitTriggerPropertiesResetReusableTriggersStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct(FAscMapKitTriggerPropertiesResetReusableTriggersStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitTriggerPropertiesResetReusableTriggersStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesResetReusableTriggersStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesResetReusableTriggersStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitTriggerPropertiesResetReusableTriggersStruct")),new UScriptStruct::TCppStructOps<FAscMapKitTriggerPropertiesResetReusableTriggersStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesResetReusableTriggersStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomHudMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomHudMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowHudMessage_MetaData[];
#endif
		static void NewProp_ShowHudMessage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowHudMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetRules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResetRules;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResetRules_Inner;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesResetReusableTriggersStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitTriggerPropertiesResetReusableTriggersStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_CustomHudMessage_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesResetReusableTriggersStruct" },
		{ "Comment", "// If you want to provide a custom HUD message, use this field.\n// * If left empty, the game will generate a message at runtime.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesResetReusableTriggersStruct.h" },
		{ "ToolTip", "If you want to provide a custom HUD message, use this field.\n* If left empty, the game will generate a message at runtime." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_CustomHudMessage = { "CustomHudMessage", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesResetReusableTriggersStruct, CustomHudMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_CustomHudMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_CustomHudMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_ShowHudMessage_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesResetReusableTriggersStruct" },
		{ "Comment", "// Check this if you want to show a HUD message after all of the trigger rules are executed.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesResetReusableTriggersStruct.h" },
		{ "ToolTip", "Check this if you want to show a HUD message after all of the trigger rules are executed." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_ShowHudMessage_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesResetReusableTriggersStruct*)Obj)->ShowHudMessage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_ShowHudMessage = { "ShowHudMessage", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesResetReusableTriggersStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_ShowHudMessage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_ShowHudMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_ShowHudMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_ResetRules_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesResetReusableTriggersStruct" },
		{ "Comment", "// A list of reset rules when this operation executes.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesResetReusableTriggersStruct.h" },
		{ "ToolTip", "A list of reset rules when this operation executes." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_ResetRules = { "ResetRules", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesResetReusableTriggersStruct, ResetRules), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_ResetRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_ResetRules_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_ResetRules_Inner = { "ResetRules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_DelaySeconds_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesResetReusableTriggersStruct" },
		{ "Comment", "// A delay in seconds before the triggers are reset.\n// * This is helpful in case you have effects you want to execute before the operation is performed.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesResetReusableTriggersStruct.h" },
		{ "ToolTip", "A delay in seconds before the triggers are reset.\n* This is helpful in case you have effects you want to execute before the operation is performed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_DelaySeconds = { "DelaySeconds", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesResetReusableTriggersStruct, DelaySeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_DelaySeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_DelaySeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_Enable_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesResetReusableTriggersStruct" },
		{ "Comment", "// Check this if you want the trigger to reset triggers.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesResetReusableTriggersStruct.h" },
		{ "ToolTip", "Check this if you want the trigger to reset triggers." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesResetReusableTriggersStruct*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesResetReusableTriggersStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_CustomHudMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_ShowHudMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_ResetRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_ResetRules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_DelaySeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::NewProp_Enable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitTriggerPropertiesResetReusableTriggersStruct",
		sizeof(FAscMapKitTriggerPropertiesResetReusableTriggersStruct),
		alignof(FAscMapKitTriggerPropertiesResetReusableTriggersStruct),
		Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitTriggerPropertiesResetReusableTriggersStruct"), sizeof(FAscMapKitTriggerPropertiesResetReusableTriggersStruct), Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct_Hash() { return 3807039966U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
