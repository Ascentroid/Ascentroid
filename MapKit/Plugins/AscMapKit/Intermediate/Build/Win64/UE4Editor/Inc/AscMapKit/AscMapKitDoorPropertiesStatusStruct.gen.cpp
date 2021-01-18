// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Door/AscMapKitDoorPropertiesStatusStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitDoorPropertiesStatusStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
class UScriptStruct* FAscMapKitDoorPropertiesStatusStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitDoorPropertiesStatusStruct"), sizeof(FAscMapKitDoorPropertiesStatusStruct), Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitDoorPropertiesStatusStruct>()
{
	return FAscMapKitDoorPropertiesStatusStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct(FAscMapKitDoorPropertiesStatusStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitDoorPropertiesStatusStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesStatusStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesStatusStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitDoorPropertiesStatusStruct")),new UScriptStruct::TCppStructOps<FAscMapKitDoorPropertiesStatusStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesStatusStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseTimeoutSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CloseTimeoutSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeepOpen_MetaData[];
#endif
		static void NewProp_KeepOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_KeepOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOpen_MetaData[];
#endif
		static void NewProp_IsOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesStatusStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitDoorPropertiesStatusStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::NewProp_CloseTimeoutSeconds_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesStatusStruct" },
		{ "Comment", "// Delay in seconds before an opened door will close itself.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesStatusStruct.h" },
		{ "ToolTip", "Delay in seconds before an opened door will close itself." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::NewProp_CloseTimeoutSeconds = { "CloseTimeoutSeconds", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesStatusStruct, CloseTimeoutSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::NewProp_CloseTimeoutSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::NewProp_CloseTimeoutSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::NewProp_KeepOpen_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesStatusStruct" },
		{ "Comment", "// If checked, once the door is opened, it will stay open.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesStatusStruct.h" },
		{ "ToolTip", "If checked, once the door is opened, it will stay open." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::NewProp_KeepOpen_SetBit(void* Obj)
	{
		((FAscMapKitDoorPropertiesStatusStruct*)Obj)->KeepOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::NewProp_KeepOpen = { "KeepOpen", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitDoorPropertiesStatusStruct), &Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::NewProp_KeepOpen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::NewProp_KeepOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::NewProp_KeepOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::NewProp_IsOpen_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesStatusStruct" },
		{ "Comment", "// If checked, the door will be open when spawned at game runtime.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesStatusStruct.h" },
		{ "ToolTip", "If checked, the door will be open when spawned at game runtime." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::NewProp_IsOpen_SetBit(void* Obj)
	{
		((FAscMapKitDoorPropertiesStatusStruct*)Obj)->IsOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::NewProp_IsOpen = { "IsOpen", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitDoorPropertiesStatusStruct), &Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::NewProp_IsOpen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::NewProp_IsOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::NewProp_IsOpen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::NewProp_CloseTimeoutSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::NewProp_KeepOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::NewProp_IsOpen,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitDoorPropertiesStatusStruct",
		sizeof(FAscMapKitDoorPropertiesStatusStruct),
		alignof(FAscMapKitDoorPropertiesStatusStruct),
		Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitDoorPropertiesStatusStruct"), sizeof(FAscMapKitDoorPropertiesStatusStruct), Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesStatusStruct_Hash() { return 1987701065U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
