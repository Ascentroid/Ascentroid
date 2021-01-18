// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesOnLockDoorStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitTriggerPropertiesOnLockDoorStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
class UScriptStruct* FAscMapKitTriggerPropertiesOnLockDoorStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitTriggerPropertiesOnLockDoorStruct"), sizeof(FAscMapKitTriggerPropertiesOnLockDoorStruct), Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitTriggerPropertiesOnLockDoorStruct>()
{
	return FAscMapKitTriggerPropertiesOnLockDoorStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct(FAscMapKitTriggerPropertiesOnLockDoorStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitTriggerPropertiesOnLockDoorStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesOnLockDoorStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesOnLockDoorStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitTriggerPropertiesOnLockDoorStruct")),new UScriptStruct::TCppStructOps<FAscMapKitTriggerPropertiesOnLockDoorStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesOnLockDoorStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseDoorWhenLocked_MetaData[];
#endif
		static void NewProp_CloseDoorWhenLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CloseDoorWhenLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorIdsToLock_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DoorIdsToLock;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DoorIdsToLock_Inner;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnLockDoorStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitTriggerPropertiesOnLockDoorStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_CustomHudMessage_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOnLockDoorStruct" },
		{ "Comment", "// If you want to provide a custom HUD message, use this field.\n// * If left empty, the game will generate a message at runtime.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnLockDoorStruct.h" },
		{ "ToolTip", "If you want to provide a custom HUD message, use this field.\n* If left empty, the game will generate a message at runtime." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_CustomHudMessage = { "CustomHudMessage", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesOnLockDoorStruct, CustomHudMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_CustomHudMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_CustomHudMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_ShowHudMessage_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOnLockDoorStruct" },
		{ "Comment", "// Check this if you want to show a HUD message when the trigger locks door(s).\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnLockDoorStruct.h" },
		{ "ToolTip", "Check this if you want to show a HUD message when the trigger locks door(s)." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_ShowHudMessage_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesOnLockDoorStruct*)Obj)->ShowHudMessage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_ShowHudMessage = { "ShowHudMessage", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesOnLockDoorStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_ShowHudMessage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_ShowHudMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_ShowHudMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_CloseDoorWhenLocked_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOnLockDoorStruct" },
		{ "Comment", "// If checked, the door will close immediately as it is locked.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnLockDoorStruct.h" },
		{ "ToolTip", "If checked, the door will close immediately as it is locked." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_CloseDoorWhenLocked_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesOnLockDoorStruct*)Obj)->CloseDoorWhenLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_CloseDoorWhenLocked = { "CloseDoorWhenLocked", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesOnLockDoorStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_CloseDoorWhenLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_CloseDoorWhenLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_CloseDoorWhenLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_DoorIdsToLock_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOnLockDoorStruct" },
		{ "Comment", "// A list of door IDs that should be locked when this operation executes.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnLockDoorStruct.h" },
		{ "ToolTip", "A list of door IDs that should be locked when this operation executes." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_DoorIdsToLock = { "DoorIdsToLock", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesOnLockDoorStruct, DoorIdsToLock), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_DoorIdsToLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_DoorIdsToLock_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_DoorIdsToLock_Inner = { "DoorIdsToLock", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_DelaySeconds_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOnLockDoorStruct" },
		{ "Comment", "// A delay in seconds before the door(s) are locked.\n// * This is helpful in case you have effects you want to execute before the operation is performed.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnLockDoorStruct.h" },
		{ "ToolTip", "A delay in seconds before the door(s) are locked.\n* This is helpful in case you have effects you want to execute before the operation is performed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_DelaySeconds = { "DelaySeconds", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesOnLockDoorStruct, DelaySeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_DelaySeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_DelaySeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_Enable_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesOnLockDoorStruct" },
		{ "Comment", "// Check this if you want the trigger to lock door(s).\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesOnLockDoorStruct.h" },
		{ "ToolTip", "Check this if you want the trigger to lock door(s)." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FAscMapKitTriggerPropertiesOnLockDoorStruct*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitTriggerPropertiesOnLockDoorStruct), &Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_CustomHudMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_ShowHudMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_CloseDoorWhenLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_DoorIdsToLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_DoorIdsToLock_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_DelaySeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::NewProp_Enable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitTriggerPropertiesOnLockDoorStruct",
		sizeof(FAscMapKitTriggerPropertiesOnLockDoorStruct),
		alignof(FAscMapKitTriggerPropertiesOnLockDoorStruct),
		Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitTriggerPropertiesOnLockDoorStruct"), sizeof(FAscMapKitTriggerPropertiesOnLockDoorStruct), Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct_Hash() { return 4241454049U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
