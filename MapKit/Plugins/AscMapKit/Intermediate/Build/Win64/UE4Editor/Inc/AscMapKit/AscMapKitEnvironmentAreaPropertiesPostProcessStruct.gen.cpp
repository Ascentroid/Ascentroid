// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesPostProcessStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnvironmentAreaPropertiesPostProcessStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FAscMapKitEnvironmentAreaPropertiesPostProcessStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnvironmentAreaPropertiesPostProcessStruct"), sizeof(FAscMapKitEnvironmentAreaPropertiesPostProcessStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnvironmentAreaPropertiesPostProcessStruct>()
{
	return FAscMapKitEnvironmentAreaPropertiesPostProcessStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct(FAscMapKitEnvironmentAreaPropertiesPostProcessStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnvironmentAreaPropertiesPostProcessStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesPostProcessStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesPostProcessStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnvironmentAreaPropertiesPostProcessStruct")),new UScriptStruct::TCppStructOps<FAscMapKitEnvironmentAreaPropertiesPostProcessStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesPostProcessStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PostProcessComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableForPlayer_MetaData[];
#endif
		static void NewProp_EnableForPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableForPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesPostProcessStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnvironmentAreaPropertiesPostProcessStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Statics::NewProp_PostProcessComponent_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesPostProcessStruct" },
		{ "Comment", "// You can edit any post process effects you would like on the entire component here.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesPostProcessStruct.h" },
		{ "ToolTip", "You can edit any post process effects you would like on the entire component here." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Statics::NewProp_PostProcessComponent = { "PostProcessComponent", nullptr, (EPropertyFlags)0x001000000108000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesPostProcessStruct, PostProcessComponent), Z_Construct_UClass_UPostProcessComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Statics::NewProp_PostProcessComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Statics::NewProp_PostProcessComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Statics::NewProp_EnableForPlayer_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesPostProcessStruct" },
		{ "Comment", "// Check to enable post process effects for the current player.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesPostProcessStruct.h" },
		{ "ToolTip", "Check to enable post process effects for the current player." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Statics::NewProp_EnableForPlayer_SetBit(void* Obj)
	{
		((FAscMapKitEnvironmentAreaPropertiesPostProcessStruct*)Obj)->EnableForPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Statics::NewProp_EnableForPlayer = { "EnableForPlayer", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnvironmentAreaPropertiesPostProcessStruct), &Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Statics::NewProp_EnableForPlayer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Statics::NewProp_EnableForPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Statics::NewProp_EnableForPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Statics::NewProp_PostProcessComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Statics::NewProp_EnableForPlayer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnvironmentAreaPropertiesPostProcessStruct",
		sizeof(FAscMapKitEnvironmentAreaPropertiesPostProcessStruct),
		alignof(FAscMapKitEnvironmentAreaPropertiesPostProcessStruct),
		Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnvironmentAreaPropertiesPostProcessStruct"), sizeof(FAscMapKitEnvironmentAreaPropertiesPostProcessStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesPostProcessStruct_Hash() { return 3881176610U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
