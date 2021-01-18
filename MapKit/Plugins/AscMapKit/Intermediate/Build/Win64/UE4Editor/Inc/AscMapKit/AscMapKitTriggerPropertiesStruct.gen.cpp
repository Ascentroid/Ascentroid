// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitTriggerPropertiesStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesMakeDoorIndestructibleStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesMakeDoorDestructibleStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnDestroyDoorStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnCloseDoorStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnOpenDoorStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnUnlockDoorStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnInactiveStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesInvisibleStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerTypeEnum();
	ASCMAPKIT_API UClass* Z_Construct_UClass_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_NoRegister();
// End Cross Module References
class UScriptStruct* FAscMapKitTriggerPropertiesStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitTriggerPropertiesStruct"), sizeof(FAscMapKitTriggerPropertiesStruct), Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitTriggerPropertiesStruct>()
{
	return FAscMapKitTriggerPropertiesStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitTriggerPropertiesStruct(FAscMapKitTriggerPropertiesStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitTriggerPropertiesStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitTriggerPropertiesStruct")),new UScriptStruct::TCppStructOps<FAscMapKitTriggerPropertiesStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitTriggerPropertiesStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Custom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Custom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherEffects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MakeDoorIndestructible_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MakeDoorIndestructible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MakeDoorDestructible_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MakeDoorDestructible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDestroyDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnDestroyDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCloseDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnCloseDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOpenDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnOpenDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUnlockDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnUnlockDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLockDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnLockDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnForcefieldChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnForcefieldChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInactive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnInactive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnExecute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnExecute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Invisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetReusableTriggers_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResetReusableTriggers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reusable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Reusable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TriggerType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TriggerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGameRuntimeBoundingBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultGameRuntimeBoundingBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitTriggerPropertiesStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_Custom_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_Custom = { "Custom", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesStruct, Custom), Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesCustomStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_Custom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_Custom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OtherEffects_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OtherEffects = { "OtherEffects", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesStruct, OtherEffects), Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOtherEffectsStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OtherEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OtherEffects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_MakeDoorIndestructible_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_MakeDoorIndestructible = { "MakeDoorIndestructible", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesStruct, MakeDoorIndestructible), Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesMakeDoorIndestructibleStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_MakeDoorIndestructible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_MakeDoorIndestructible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_MakeDoorDestructible_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_MakeDoorDestructible = { "MakeDoorDestructible", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesStruct, MakeDoorDestructible), Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesMakeDoorDestructibleStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_MakeDoorDestructible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_MakeDoorDestructible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnDestroyDoor_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnDestroyDoor = { "OnDestroyDoor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesStruct, OnDestroyDoor), Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnDestroyDoorStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnDestroyDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnDestroyDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnCloseDoor_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnCloseDoor = { "OnCloseDoor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesStruct, OnCloseDoor), Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnCloseDoorStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnCloseDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnCloseDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnOpenDoor_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnOpenDoor = { "OnOpenDoor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesStruct, OnOpenDoor), Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnOpenDoorStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnOpenDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnOpenDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnUnlockDoor_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnUnlockDoor = { "OnUnlockDoor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesStruct, OnUnlockDoor), Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnUnlockDoorStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnUnlockDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnUnlockDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnLockDoor_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnLockDoor = { "OnLockDoor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesStruct, OnLockDoor), Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnLockDoorStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnLockDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnLockDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnForcefieldChange_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnForcefieldChange = { "OnForcefieldChange", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesStruct, OnForcefieldChange), Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnForcefieldChangeStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnForcefieldChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnForcefieldChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnInactive_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnInactive = { "OnInactive", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesStruct, OnInactive), Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnInactiveStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnInactive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnInactive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnExecute_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnExecute = { "OnExecute", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesStruct, OnExecute), Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesOnExecuteStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnExecute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnExecute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_Invisible_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_Invisible = { "Invisible", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesStruct, Invisible), Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesInvisibleStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_Invisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_Invisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_ResetReusableTriggers_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_ResetReusableTriggers = { "ResetReusableTriggers", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesStruct, ResetReusableTriggers), Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesResetReusableTriggersStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_ResetReusableTriggers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_ResetReusableTriggers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_Reusable_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesStruct" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_Reusable = { "Reusable", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesStruct, Reusable), Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesReusableStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_Reusable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_Reusable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesStruct" },
		{ "Comment", "// Used by the game runtime to identify this trigger. This is required and must be unique per trigger.\n// * If trigger IDs are not set, or not unique, the game logs should provide an error message.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesStruct.h" },
		{ "ToolTip", "Used by the game runtime to identify this trigger. This is required and must be unique per trigger.\n* If trigger IDs are not set, or not unique, the game logs should provide an error message." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesStruct, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesStruct" },
		{ "Comment", "// Used by the game runtime to display the trigger name. This is used for HUD messages.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesStruct.h" },
		{ "ToolTip", "Used by the game runtime to display the trigger name. This is used for HUD messages." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesStruct, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_TriggerType_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesStruct" },
		{ "Comment", "// Used by the game runtime to identify the trigger type.\n" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesStruct.h" },
		{ "ToolTip", "Used by the game runtime to identify the trigger type." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_TriggerType = { "TriggerType", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesStruct, TriggerType), Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerTypeEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_TriggerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_TriggerType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_TriggerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_DefaultGameRuntimeBoundingBox_MetaData[] = {
		{ "Category", "AscMapKitTriggerPropertiesStruct" },
		{ "Comment", "// The game runtime default collision size of this trigger. This is to give you an idea of the default trigger bounding box dimensions.\n// * We cannot distribute the 3D mesh data in the map kit because the majority of them are commercially licensed art assets.\n// * Manually changing these values will have no effect on the game runtime. This is purely for editor visual assistance.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesStruct.h" },
		{ "ToolTip", "The game runtime default collision size of this trigger. This is to give you an idea of the default trigger bounding box dimensions.\n* We cannot distribute the 3D mesh data in the map kit because the majority of them are commercially licensed art assets.\n* Manually changing these values will have no effect on the game runtime. This is purely for editor visual assistance." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_DefaultGameRuntimeBoundingBox = { "DefaultGameRuntimeBoundingBox", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitTriggerPropertiesStruct, DefaultGameRuntimeBoundingBox), Z_Construct_UClass_UAscMapKitTriggerDefaultGameRuntimeBoundingBox_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_DefaultGameRuntimeBoundingBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_DefaultGameRuntimeBoundingBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_Custom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OtherEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_MakeDoorIndestructible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_MakeDoorDestructible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnDestroyDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnCloseDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnOpenDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnUnlockDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnLockDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnForcefieldChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnInactive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_OnExecute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_Invisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_ResetReusableTriggers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_Reusable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_TriggerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_TriggerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::NewProp_DefaultGameRuntimeBoundingBox,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitTriggerPropertiesStruct",
		sizeof(FAscMapKitTriggerPropertiesStruct),
		alignof(FAscMapKitTriggerPropertiesStruct),
		Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitTriggerPropertiesStruct"), sizeof(FAscMapKitTriggerPropertiesStruct), Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitTriggerPropertiesStruct_Hash() { return 543765262U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
