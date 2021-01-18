// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesOnExecuteStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitTriggerPropertiesOnExecuteStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
class UScriptStruct* FAscMapKitTriggerPropertiesOnExecuteStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitTriggerPropertiesOnExecuteStruct"), sizeof(FAscMapKitTriggerPropertiesOnExecuteStruct), Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitTriggerPropertiesOnExecuteStruct>()
{
	return FAscMapKitTriggerPropertiesOnExecuteStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct(FAscMapKitTriggerPropertiesOnExecuteStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitTriggerPropertiesOnExecuteStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesOnExecuteStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesOnExecuteStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitTriggerPropertiesOnExecuteStruct")),new UScriptStruct::TCppStructOps<FAscMapKitTriggerPropertiesOnExecuteStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesOnExecuteStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecuteMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExecuteMaxCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnExecuteStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitTriggerPropertiesOnExecuteStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::NewProp_CustomHudMessage_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOnExecuteStruct" },
		{ "Comment", "// If you want to provide a custom HUD message, use this field.\n// * If left empty, the game will generate a message at runtime.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnExecuteStruct.h" },
		{ "ToolTip", "If you want to provide a custom HUD message, use this field.\n* If left empty, the game will generate a message at runtime." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::NewProp_CustomHudMessage = { "CustomHudMessage", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesOnExecuteStruct, CustomHudMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::NewProp_CustomHudMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::NewProp_CustomHudMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::NewProp_ShowHudMessage_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOnExecuteStruct" },
		{ "Comment", "// Check this if you want to show a HUD message when the trigger is activated.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnExecuteStruct.h" },
		{ "ToolTip", "Check this if you want to show a HUD message when the trigger is activated." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::NewProp_ShowHudMessage_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesOnExecuteStruct*)Obj)->ShowHudMessage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::NewProp_ShowHudMessage = { "ShowHudMessage", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesOnExecuteStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::NewProp_ShowHudMessage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::NewProp_ShowHudMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::NewProp_ShowHudMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::NewProp_ExecuteMaxCount_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOnExecuteStruct" },
		{ "Comment", "// The number of times this trigger must be executed before it will activated and subsequently become inactive.\n// * Less than or equal to zero = infinite execution. Execution will run every time the trigger is activated.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnExecuteStruct.h" },
		{ "ToolTip", "The number of times this trigger must be executed before it will activated and subsequently become inactive.\n* Less than or equal to zero = infinite execution. Execution will run every time the trigger is activated." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::NewProp_ExecuteMaxCount = { "ExecuteMaxCount", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesOnExecuteStruct, ExecuteMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::NewProp_ExecuteMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::NewProp_ExecuteMaxCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::NewProp_CustomHudMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::NewProp_ShowHudMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::NewProp_ExecuteMaxCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitTriggerPropertiesOnExecuteStruct",
		sizeof(FAscMapKitTriggerPropertiesOnExecuteStruct),
		alignof(FAscMapKitTriggerPropertiesOnExecuteStruct),
		Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitTriggerPropertiesOnExecuteStruct"), sizeof(FAscMapKitTriggerPropertiesOnExecuteStruct), Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct_Hash() { return 249044076U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
