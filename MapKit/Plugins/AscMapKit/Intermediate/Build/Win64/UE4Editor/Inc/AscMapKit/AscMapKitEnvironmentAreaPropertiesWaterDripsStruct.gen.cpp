// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaPropertiesWaterDripsStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnvironmentAreaPropertiesWaterDripsStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnvironmentAreaPropertiesWaterDripsStruct"), sizeof(FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct>()
{
	return FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct(FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnvironmentAreaPropertiesWaterDripsStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesWaterDripsStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesWaterDripsStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnvironmentAreaPropertiesWaterDripsStruct")),new UScriptStruct::TCppStructOps<FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnvironmentAreaPropertiesWaterDripsStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutDelaySeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutDelaySeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostTintColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostTintColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostTintMaskPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostTintMaskPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostTintFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostTintFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreTintColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreTintColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreTintFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreTintFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecularLightDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpecularLightDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecularPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpecularPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecularScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpecularScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableForPlayerOnOverlapEnd_MetaData[];
#endif
		static void NewProp_EnableForPlayerOnOverlapEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableForPlayerOnOverlapEnd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesWaterDripsStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_FadeOutDelaySeconds_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesWaterDripsStruct" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesWaterDripsStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_FadeOutDelaySeconds = { "FadeOutDelaySeconds", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct, FadeOutDelaySeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_FadeOutDelaySeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_FadeOutDelaySeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PostTintColor_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesWaterDripsStruct" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesWaterDripsStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PostTintColor = { "PostTintColor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct, PostTintColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PostTintColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PostTintColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PostTintMaskPower_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesWaterDripsStruct" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesWaterDripsStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PostTintMaskPower = { "PostTintMaskPower", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct, PostTintMaskPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PostTintMaskPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PostTintMaskPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PostTintFactor_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesWaterDripsStruct" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesWaterDripsStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PostTintFactor = { "PostTintFactor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct, PostTintFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PostTintFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PostTintFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PreTintColor_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesWaterDripsStruct" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesWaterDripsStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PreTintColor = { "PreTintColor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct, PreTintColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PreTintColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PreTintColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PreTintFactor_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesWaterDripsStruct" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesWaterDripsStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PreTintFactor = { "PreTintFactor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct, PreTintFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PreTintFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PreTintFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_SpecularLightDirection_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesWaterDripsStruct" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesWaterDripsStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_SpecularLightDirection = { "SpecularLightDirection", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct, SpecularLightDirection), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_SpecularLightDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_SpecularLightDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_SpecularPower_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesWaterDripsStruct" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesWaterDripsStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_SpecularPower = { "SpecularPower", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct, SpecularPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_SpecularPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_SpecularPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_SpecularScale_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesWaterDripsStruct" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesWaterDripsStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_SpecularScale = { "SpecularScale", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct, SpecularScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_SpecularScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_SpecularScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_EnableForPlayerOnOverlapEnd_MetaData[] = {
		{ "Category", "AscMapKitEnvironmentAreaPropertiesWaterDripsStruct" },
		{ "Comment", "// Check to enable water drips when the player overlap ends.\n" },
		{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaPropertiesWaterDripsStruct.h" },
		{ "ToolTip", "Check to enable water drips when the player overlap ends." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_EnableForPlayerOnOverlapEnd_SetBit(void* Obj)
	{
		((FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct*)Obj)->EnableForPlayerOnOverlapEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_EnableForPlayerOnOverlapEnd = { "EnableForPlayerOnOverlapEnd", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct), &Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_EnableForPlayerOnOverlapEnd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_EnableForPlayerOnOverlapEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_EnableForPlayerOnOverlapEnd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_FadeOutDelaySeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PostTintColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PostTintMaskPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PostTintFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PreTintColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_PreTintFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_SpecularLightDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_SpecularPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_SpecularScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::NewProp_EnableForPlayerOnOverlapEnd,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnvironmentAreaPropertiesWaterDripsStruct",
		sizeof(FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct),
		alignof(FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct),
		Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnvironmentAreaPropertiesWaterDripsStruct"), sizeof(FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnvironmentAreaPropertiesWaterDripsStruct_Hash() { return 4231758104U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
