// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesReusableRuleStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitTriggerPropertiesReusableRuleStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerReusableStateEnum();
// End Cross Module References
class UScriptStruct* FAscMapKitTriggerPropertiesReusableRuleStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitTriggerPropertiesReusableRuleStruct"), sizeof(FAscMapKitTriggerPropertiesReusableRuleStruct), Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitTriggerPropertiesReusableRuleStruct>()
{
	return FAscMapKitTriggerPropertiesReusableRuleStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct(FAscMapKitTriggerPropertiesReusableRuleStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitTriggerPropertiesReusableRuleStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesReusableRuleStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesReusableRuleStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitTriggerPropertiesReusableRuleStruct")),new UScriptStruct::TCppStructOps<FAscMapKitTriggerPropertiesReusableRuleStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesReusableRuleStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentExecutionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentExecutionCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTransitionStateSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayTransitionStateSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayTransitionStateSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTransitionStateSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayTransitionStateSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayTransitionStateSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayTransitionStateSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayTransitionStateSoundCue;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ToState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ToState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionCountToNextState_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExecutionCountToNextState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FromState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FromState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RuleId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableRuleStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitTriggerPropertiesReusableRuleStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_CurrentExecutionCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableRuleStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_CurrentExecutionCount = { "CurrentExecutionCount", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesReusableRuleStruct, CurrentExecutionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_CurrentExecutionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_CurrentExecutionCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_PlayTransitionStateSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesReusableRuleStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the transition sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableRuleStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the transition sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_PlayTransitionStateSoundCueSoundClass = { "PlayTransitionStateSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesReusableRuleStruct, PlayTransitionStateSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_PlayTransitionStateSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_PlayTransitionStateSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_PlayTransitionStateSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_PlayTransitionStateSoundCue_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesReusableRuleStruct" },
		{ "Comment", "// Specify a custom sound to play as when this trigger rule transitions state. Leave empty for game runtime default.\n// * For example: for an electronic beep sound.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableRuleStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as when this trigger rule transitions state. Leave empty for game runtime default.\n* For example: for an electronic beep sound." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_PlayTransitionStateSoundCue = { "PlayTransitionStateSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesReusableRuleStruct, PlayTransitionStateSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_PlayTransitionStateSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_PlayTransitionStateSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_DisableDefaultPlayTransitionStateSoundCue_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesReusableRuleStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableRuleStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_DisableDefaultPlayTransitionStateSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesReusableRuleStruct*)Obj)->DisableDefaultPlayTransitionStateSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_DisableDefaultPlayTransitionStateSoundCue = { "DisableDefaultPlayTransitionStateSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesReusableRuleStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_DisableDefaultPlayTransitionStateSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_DisableDefaultPlayTransitionStateSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_DisableDefaultPlayTransitionStateSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_CustomHudMessage_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesReusableRuleStruct" },
		{ "Comment", "// If you want to provide a custom HUD message, use this field.\n// * If left empty, the game will generate a message at runtime.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableRuleStruct.h" },
		{ "ToolTip", "If you want to provide a custom HUD message, use this field.\n* If left empty, the game will generate a message at runtime." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_CustomHudMessage = { "CustomHudMessage", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesReusableRuleStruct, CustomHudMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_CustomHudMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_CustomHudMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_ShowHudMessage_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesReusableRuleStruct" },
		{ "Comment", "// Check this if you want to show a HUD message when the rule is match.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableRuleStruct.h" },
		{ "ToolTip", "Check this if you want to show a HUD message when the rule is match." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_ShowHudMessage_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesReusableRuleStruct*)Obj)->ShowHudMessage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_ShowHudMessage = { "ShowHudMessage", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesReusableRuleStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_ShowHudMessage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_ShowHudMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_ShowHudMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_ToState_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesReusableRuleStruct" },
		{ "Comment", "// When the state and execution count match, the state will be transitioned to this.\n// * If the state is set to Inactive, the activation process will execute for this trigger, then immediately transition to the Inactive state.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableRuleStruct.h" },
		{ "ToolTip", "When the state and execution count match, the state will be transitioned to this.\n* If the state is set to Inactive, the activation process will execute for this trigger, then immediately transition to the Inactive state." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_ToState = { "ToState", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesReusableRuleStruct, ToState), Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerReusableStateEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_ToState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_ToState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_ToState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_ExecutionCountToNextState_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesReusableRuleStruct" },
		{ "Comment", "// How many executions are required for this rule. Execution count is tracked internally and compared to this.\n// * Note: these rules will supercede the \"On Execute -> Execute Max Count\" setting (it will be ignored).\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableRuleStruct.h" },
		{ "ToolTip", "How many executions are required for this rule. Execution count is tracked internally and compared to this.\n* Note: these rules will supercede the \"On Execute -> Execute Max Count\" setting (it will be ignored)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_ExecutionCountToNextState = { "ExecutionCountToNextState", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesReusableRuleStruct, ExecutionCountToNextState), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_ExecutionCountToNextState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_ExecutionCountToNextState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_FromState_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesReusableRuleStruct" },
		{ "Comment", "// If the rule hasn't already been completed, and the current state is this.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableRuleStruct.h" },
		{ "ToolTip", "If the rule hasn't already been completed, and the current state is this." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_FromState = { "FromState", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesReusableRuleStruct, FromState), Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerReusableStateEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_FromState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_FromState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_FromState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_RuleId_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesReusableRuleStruct" },
		{ "Comment", "// This ID must be unique per rule, per trigger.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesReusableRuleStruct.h" },
		{ "ToolTip", "This ID must be unique per rule, per trigger." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_RuleId = { "RuleId", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesReusableRuleStruct, RuleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_RuleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_RuleId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_CurrentExecutionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_PlayTransitionStateSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_PlayTransitionStateSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_PlayTransitionStateSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_DisableDefaultPlayTransitionStateSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_CustomHudMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_ShowHudMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_ToState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_ToState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_ExecutionCountToNextState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_FromState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_FromState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::NewProp_RuleId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitTriggerPropertiesReusableRuleStruct",
		sizeof(FAscMapKitTriggerPropertiesReusableRuleStruct),
		alignof(FAscMapKitTriggerPropertiesReusableRuleStruct),
		Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitTriggerPropertiesReusableRuleStruct"), sizeof(FAscMapKitTriggerPropertiesReusableRuleStruct), Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableRuleStruct_Hash() { return 409464015U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
