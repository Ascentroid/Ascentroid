// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesResetReusableTriggersRuleStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
class UScriptStruct* FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitTriggerPropertiesResetReusableTriggersRuleStruct"), sizeof(FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct), Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct>()
{
	return FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct(FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitTriggerPropertiesResetReusableTriggersRuleStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitTriggerPropertiesResetReusableTriggersRuleStruct")),new UScriptStruct::TCppStructOps<FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RuleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetToOriginalState_MetaData[];
#endif
		static void NewProp_ResetToOriginalState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ResetToOriginalState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TriggerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesResetReusableTriggersRuleStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_CustomHudMessage_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesResetReusableTriggersRuleStruct" },
		{ "Comment", "// If you want to provide a custom HUD message, use this field.\n// * If left empty, the game will generate a message at runtime.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesResetReusableTriggersRuleStruct.h" },
		{ "ToolTip", "If you want to provide a custom HUD message, use this field.\n* If left empty, the game will generate a message at runtime." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_CustomHudMessage = { "CustomHudMessage", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct, CustomHudMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_CustomHudMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_CustomHudMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_ShowHudMessage_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesResetReusableTriggersRuleStruct" },
		{ "Comment", "// Check this if you want to show a HUD message when the trigger is reset.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesResetReusableTriggersRuleStruct.h" },
		{ "ToolTip", "Check this if you want to show a HUD message when the trigger is reset." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_ShowHudMessage_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct*)Obj)->ShowHudMessage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_ShowHudMessage = { "ShowHudMessage", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_ShowHudMessage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_ShowHudMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_ShowHudMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_RuleId_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesResetReusableTriggersRuleStruct" },
		{ "Comment", "// The trigger rule ID to reset to.\n// * Any trigger rules after this rule will also be reset.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesResetReusableTriggersRuleStruct.h" },
		{ "ToolTip", "The trigger rule ID to reset to.\n* Any trigger rules after this rule will also be reset." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_RuleId = { "RuleId", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct, RuleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_RuleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_RuleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_ResetToOriginalState_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesResetReusableTriggersRuleStruct" },
		{ "Comment", "// If checked, the trigger will be reset to it's original state (all rules reset).\n// * The \"Rule ID\" entry will be ignored if this is checked, as well as any HUD message(s).\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesResetReusableTriggersRuleStruct.h" },
		{ "ToolTip", "If checked, the trigger will be reset to it's original state (all rules reset).\n* The \"Rule ID\" entry will be ignored if this is checked, as well as any HUD message(s)." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_ResetToOriginalState_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct*)Obj)->ResetToOriginalState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_ResetToOriginalState = { "ResetToOriginalState", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_ResetToOriginalState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_ResetToOriginalState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_ResetToOriginalState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_TriggerId_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesResetReusableTriggersRuleStruct" },
		{ "Comment", "// The trigger ID to reset.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesResetReusableTriggersRuleStruct.h" },
		{ "ToolTip", "The trigger ID to reset." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_TriggerId = { "TriggerId", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct, TriggerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_TriggerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_TriggerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_CustomHudMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_ShowHudMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_RuleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_ResetToOriginalState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::NewProp_TriggerId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitTriggerPropertiesResetReusableTriggersRuleStruct",
		sizeof(FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct),
		alignof(FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct),
		Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitTriggerPropertiesResetReusableTriggersRuleStruct"), sizeof(FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct), Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersRuleStruct_Hash() { return 2269458765U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
