// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesReusableStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitTriggerPropertiesReusableStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerReusableStateEnum();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct();
// End Cross Module References
class UScriptStruct* FAscMapKitTriggerPropertiesReusableStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitTriggerPropertiesReusableStruct"), sizeof(FAscMapKitTriggerPropertiesReusableStruct), Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitTriggerPropertiesReusableStruct>()
{
	return FAscMapKitTriggerPropertiesReusableStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct(FAscMapKitTriggerPropertiesReusableStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitTriggerPropertiesReusableStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesReusableStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesReusableStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitTriggerPropertiesReusableStruct")),new UScriptStruct::TCppStructOps<FAscMapKitTriggerPropertiesReusableStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesReusableStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllRulesComplete_MetaData[];
#endif
		static void NewProp_AllRulesComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllRulesComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OriginalState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OriginalState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomHudMessageWhenAllRulesComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomHudMessageWhenAllRulesComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowHudMessageWhenAllRulesComplete_MetaData[];
#endif
		static void NewProp_ShowHudMessageWhenAllRulesComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowHudMessageWhenAllRulesComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInactivePlayMessageSound_MetaData[];
#endif
		static void NewProp_OnInactivePlayMessageSound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OnInactivePlayMessageSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInactivePlayDeactivateSound_MetaData[];
#endif
		static void NewProp_OnInactivePlayDeactivateSound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OnInactivePlayDeactivateSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInactiveUseStaticMesh_MetaData[];
#endif
		static void NewProp_OnInactiveUseStaticMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OnInactiveUseStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Materials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Rules;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitTriggerPropertiesReusableStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_AllRulesComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableStruct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_AllRulesComplete_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesReusableStruct*)Obj)->AllRulesComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_AllRulesComplete = { "AllRulesComplete", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesReusableStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_AllRulesComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_AllRulesComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_AllRulesComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OriginalState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OriginalState = { "OriginalState", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesReusableStruct, OriginalState), Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerReusableStateEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OriginalState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OriginalState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OriginalState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_CustomHudMessageWhenAllRulesComplete_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesReusableStruct" },
		{ "Comment", "// If you want to provide a custom HUD message, use this field.\n// * If left empty, the game will generate a message at runtime.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableStruct.h" },
		{ "ToolTip", "If you want to provide a custom HUD message, use this field.\n* If left empty, the game will generate a message at runtime." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_CustomHudMessageWhenAllRulesComplete = { "CustomHudMessageWhenAllRulesComplete", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesReusableStruct, CustomHudMessageWhenAllRulesComplete), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_CustomHudMessageWhenAllRulesComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_CustomHudMessageWhenAllRulesComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_ShowHudMessageWhenAllRulesComplete_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesReusableStruct" },
		{ "Comment", "// Check this if you want to show a HUD message when all rules are complete.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableStruct.h" },
		{ "ToolTip", "Check this if you want to show a HUD message when all rules are complete." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_ShowHudMessageWhenAllRulesComplete_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesReusableStruct*)Obj)->ShowHudMessageWhenAllRulesComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_ShowHudMessageWhenAllRulesComplete = { "ShowHudMessageWhenAllRulesComplete", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesReusableStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_ShowHudMessageWhenAllRulesComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_ShowHudMessageWhenAllRulesComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_ShowHudMessageWhenAllRulesComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OnInactivePlayMessageSound_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesReusableStruct" },
		{ "Comment", "// If enabled, the deactivated sound will be played when this trigger is used while in an inactive state.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableStruct.h" },
		{ "ToolTip", "If enabled, the deactivated sound will be played when this trigger is used while in an inactive state." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OnInactivePlayMessageSound_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesReusableStruct*)Obj)->OnInactivePlayMessageSound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OnInactivePlayMessageSound = { "OnInactivePlayMessageSound", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesReusableStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OnInactivePlayMessageSound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OnInactivePlayMessageSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OnInactivePlayMessageSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OnInactivePlayDeactivateSound_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesReusableStruct" },
		{ "Comment", "// If enabled, the deactivate sound will be played when this trigger state is transitioned to inactive.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableStruct.h" },
		{ "ToolTip", "If enabled, the deactivate sound will be played when this trigger state is transitioned to inactive." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OnInactivePlayDeactivateSound_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesReusableStruct*)Obj)->OnInactivePlayDeactivateSound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OnInactivePlayDeactivateSound = { "OnInactivePlayDeactivateSound", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesReusableStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OnInactivePlayDeactivateSound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OnInactivePlayDeactivateSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OnInactivePlayDeactivateSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OnInactiveUseStaticMesh_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesReusableStruct" },
		{ "Comment", "// If enabled, the inactive static mesh will be used when the trigger state changes to Inactive. It will also use the associated material.\n// If not enabled, only the associated material will be applied. The active static mesh will remain visible.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableStruct.h" },
		{ "ToolTip", "If enabled, the inactive static mesh will be used when the trigger state changes to Inactive. It will also use the associated material.\nIf not enabled, only the associated material will be applied. The active static mesh will remain visible." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OnInactiveUseStaticMesh_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesReusableStruct*)Obj)->OnInactiveUseStaticMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OnInactiveUseStaticMesh = { "OnInactiveUseStaticMesh", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesReusableStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OnInactiveUseStaticMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OnInactiveUseStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OnInactiveUseStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesReusableStruct" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesReusableStruct, Materials), Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableMaterialsStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_Materials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_Rules_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesReusableStruct" },
		{ "Comment", "// The execution rules for this reusable trigger.\n// * You should set this up in the order they are expected to perform a state transition.\n// * For example: 1) Unused -> 2) Used -> 3) Inactive\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableStruct.h" },
		{ "ToolTip", "The execution rules for this reusable trigger.\n* You should set this up in the order they are expected to perform a state transition.\n* For example: 1) Unused -> 2) Used -> 3) Inactive" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesReusableStruct, Rules), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_Rules_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_Rules_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_Rules_Inner = { "Rules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesReusableStruct" },
		{ "Comment", "// The current state of the reusable trigger.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableStruct.h" },
		{ "ToolTip", "The current state of the reusable trigger." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesReusableStruct, CurrentState), Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerReusableStateEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_CurrentState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_Enable_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesReusableStruct" },
		{ "Comment", "// Check this if you want the trigger to reusable.\n// * If enabled, only active static mesh components will be used. Inactive mesh components will only be used if a trigger is not reusable.\n// todo: confirm if this is how we want to handle this, though\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableStruct.h" },
		{ "ToolTip", "Check this if you want the trigger to reusable.\n* If enabled, only active static mesh components will be used. Inactive mesh components will only be used if a trigger is not reusable.\ntodo: confirm if this is how we want to handle this, though" },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesReusableStruct*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesReusableStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_AllRulesComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OriginalState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OriginalState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_CustomHudMessageWhenAllRulesComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_ShowHudMessageWhenAllRulesComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OnInactivePlayMessageSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OnInactivePlayDeactivateSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_OnInactiveUseStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_Rules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_Rules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_CurrentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_CurrentState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::NewProp_Enable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitTriggerPropertiesReusableStruct",
		sizeof(FAscMapKitTriggerPropertiesReusableStruct),
		alignof(FAscMapKitTriggerPropertiesReusableStruct),
		Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitTriggerPropertiesReusableStruct"), sizeof(FAscMapKitTriggerPropertiesReusableStruct), Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct_Hash() { return 3761749380U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
