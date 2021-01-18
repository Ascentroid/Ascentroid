// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Door/AscMapKitDoorPropertiesLockStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitDoorPropertiesLockStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
class UScriptStruct* FAscMapKitDoorPropertiesLockStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitDoorPropertiesLockStruct"), sizeof(FAscMapKitDoorPropertiesLockStruct), Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitDoorPropertiesLockStruct>()
{
	return FAscMapKitDoorPropertiesLockStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct(FAscMapKitDoorPropertiesLockStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitDoorPropertiesLockStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesLockStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesLockStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitDoorPropertiesLockStruct")),new UScriptStruct::TCppStructOps<FAscMapKitDoorPropertiesLockStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesLockStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenLockedDoorDelaySeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpenLockedDoorDelaySeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Code;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomizeCode_MetaData[];
#endif
		static void NewProp_RandomizeCode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RandomizeCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasCode_MetaData[];
#endif
		static void NewProp_HasCode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLocked_MetaData[];
#endif
		static void NewProp_IsLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesLockStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitDoorPropertiesLockStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_OpenLockedDoorDelaySeconds_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesLockStruct" },
		{ "Comment", "// A delay in seconds before a door that is just unlocked actually becomes unlocked.\n// * For example: you may want to delay the unlock status in order for a long sound effect to finish playing.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesLockStruct.h" },
		{ "ToolTip", "A delay in seconds before a door that is just unlocked actually becomes unlocked.\n* For example: you may want to delay the unlock status in order for a long sound effect to finish playing." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_OpenLockedDoorDelaySeconds = { "OpenLockedDoorDelaySeconds", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesLockStruct, OpenLockedDoorDelaySeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_OpenLockedDoorDelaySeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_OpenLockedDoorDelaySeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_Code_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesLockStruct" },
		{ "Comment", "// If \"Randomize Code\" is not checked, this value is required. This will be a permanent value used for the door lock code.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesLockStruct.h" },
		{ "ToolTip", "If \"Randomize Code\" is not checked, this value is required. This will be a permanent value used for the door lock code." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesLockStruct, Code), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_Code_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_RandomizeCode_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesLockStruct" },
		{ "Comment", "// If checked, the door lock code will be randomized per campaign game start.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesLockStruct.h" },
		{ "ToolTip", "If checked, the door lock code will be randomized per campaign game start." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_RandomizeCode_SetBit(void* Obj)
	{
		((FAscMapKitDoorPropertiesLockStruct*)Obj)->RandomizeCode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_RandomizeCode = { "RandomizeCode", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitDoorPropertiesLockStruct), &Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_RandomizeCode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_RandomizeCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_RandomizeCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_HasCode_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesLockStruct" },
		{ "Comment", "// If checked, the door will allow the player to interact and enter a lock code.\n// * For example: if you have a trigger that unlocks a door without a code, you will want to uncheck this option.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesLockStruct.h" },
		{ "ToolTip", "If checked, the door will allow the player to interact and enter a lock code.\n* For example: if you have a trigger that unlocks a door without a code, you will want to uncheck this option." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_HasCode_SetBit(void* Obj)
	{
		((FAscMapKitDoorPropertiesLockStruct*)Obj)->HasCode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_HasCode = { "HasCode", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitDoorPropertiesLockStruct), &Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_HasCode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_HasCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_HasCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_IsLocked_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesLockStruct" },
		{ "Comment", "// If checked, this door will be locked.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesLockStruct.h" },
		{ "ToolTip", "If checked, this door will be locked." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_IsLocked_SetBit(void* Obj)
	{
		((FAscMapKitDoorPropertiesLockStruct*)Obj)->IsLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_IsLocked = { "IsLocked", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitDoorPropertiesLockStruct), &Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_IsLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_IsLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_IsLocked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_OpenLockedDoorDelaySeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_Code,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_RandomizeCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_HasCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::NewProp_IsLocked,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitDoorPropertiesLockStruct",
		sizeof(FAscMapKitDoorPropertiesLockStruct),
		alignof(FAscMapKitDoorPropertiesLockStruct),
		Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitDoorPropertiesLockStruct"), sizeof(FAscMapKitDoorPropertiesLockStruct), Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesLockStruct_Hash() { return 2499113874U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
