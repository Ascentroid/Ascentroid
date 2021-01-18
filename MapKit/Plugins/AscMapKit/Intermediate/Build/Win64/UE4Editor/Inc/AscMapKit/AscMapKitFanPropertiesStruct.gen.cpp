// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Fan/AscMapKitFanPropertiesStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitFanPropertiesStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitFanTypeEnum();
// End Cross Module References
class UScriptStruct* FAscMapKitFanPropertiesStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitFanPropertiesStruct"), sizeof(FAscMapKitFanPropertiesStruct), Get_Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitFanPropertiesStruct>()
{
	return FAscMapKitFanPropertiesStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitFanPropertiesStruct(FAscMapKitFanPropertiesStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitFanPropertiesStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitFanPropertiesStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitFanPropertiesStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitFanPropertiesStruct")),new UScriptStruct::TCppStructOps<FAscMapKitFanPropertiesStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitFanPropertiesStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayAmbientSoundCueSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayAmbientSoundCueSoundClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayAmbientSoundCueSoundClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayAmbientSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayAmbientSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultPlayAmbientSoundCue_MetaData[];
#endif
		static void NewProp_DisableDefaultPlayAmbientSoundCue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultPlayAmbientSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FanType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FanType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FanType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Fan/AscMapKitFanPropertiesStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitFanPropertiesStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_Custom_MetaData[] = {
		{ "Category", "AscMapKitFanPropertiesStruct" },
		{ "Comment", "// todo: @pak: @consideration: expose an array of material structs TArray<SlotName, UMaterialInstance> with a list of hard-coded slot names\n// todo: @pak: @consideration: so people can customize the materials on existing pre-built assets\n" },
		{ "ModuleRelativePath", "Public/Fan/AscMapKitFanPropertiesStruct.h" },
		{ "ToolTip", "todo: @pak: @consideration: expose an array of material structs TArray<SlotName, UMaterialInstance> with a list of hard-coded slot names\ntodo: @pak: @consideration: so people can customize the materials on existing pre-built assets" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_Custom = { "Custom", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitFanPropertiesStruct, Custom), Z_Construct_UScriptStruct_FAscMapKitFanPropertiesCustomStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_Custom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_Custom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_PlayAmbientSoundCueSoundClass_MetaData[] = {
		{ "Category", "AscMapKitFanPropertiesStruct" },
		{ "Comment", "// Specify a custom game runtime sound class for the ambient sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\").\n" },
		{ "ModuleRelativePath", "Public/Fan/AscMapKitFanPropertiesStruct.h" },
		{ "ToolTip", "Specify a custom game runtime sound class for the ambient sound. If set to \"Default\", it will use the game runtime default (sound class \"SFX\")." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_PlayAmbientSoundCueSoundClass = { "PlayAmbientSoundCueSoundClass", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitFanPropertiesStruct, PlayAmbientSoundCueSoundClass), Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_PlayAmbientSoundCueSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_PlayAmbientSoundCueSoundClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_PlayAmbientSoundCueSoundClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_PlayAmbientSoundCue_MetaData[] = {
		{ "Category", "AscMapKitFanPropertiesStruct" },
		{ "Comment", "// Specify a custom sound to play as an ambient effect for this fan. Leave empty for game runtime default.\n" },
		{ "ModuleRelativePath", "Public/Fan/AscMapKitFanPropertiesStruct.h" },
		{ "ToolTip", "Specify a custom sound to play as an ambient effect for this fan. Leave empty for game runtime default." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_PlayAmbientSoundCue = { "PlayAmbientSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitFanPropertiesStruct, PlayAmbientSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_PlayAmbientSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_PlayAmbientSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue_MetaData[] = {
		{ "Category", "AscMapKitFanPropertiesStruct" },
		{ "Comment", "// If a sound cue is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no sound cue will be used.\n" },
		{ "ModuleRelativePath", "Public/Fan/AscMapKitFanPropertiesStruct.h" },
		{ "ToolTip", "If a sound cue is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no sound cue will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue_SetBit(void* Obj)
	{
		((FAscMapKitFanPropertiesStruct*)Obj)->DisableDefaultPlayAmbientSoundCue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue = { "DisableDefaultPlayAmbientSoundCue", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitFanPropertiesStruct), &Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_AnimationSpeed_MetaData[] = {
		{ "Category", "AscMapKitFanPropertiesStruct" },
		{ "Comment", "// Controls the animation speed for the skeletal mesh. A custom skeletal mesh will override this (setup what you want in your custom skeletal mesh).\n" },
		{ "ModuleRelativePath", "Public/Fan/AscMapKitFanPropertiesStruct.h" },
		{ "ToolTip", "Controls the animation speed for the skeletal mesh. A custom skeletal mesh will override this (setup what you want in your custom skeletal mesh)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_AnimationSpeed = { "AnimationSpeed", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitFanPropertiesStruct, AnimationSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_AnimationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_AnimationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "AscMapKitFanPropertiesStruct" },
		{ "Comment", "// Used by the game runtime to display the fan name. This is used for HUD messages.\n" },
		{ "ModuleRelativePath", "Public/Fan/AscMapKitFanPropertiesStruct.h" },
		{ "ToolTip", "Used by the game runtime to display the fan name. This is used for HUD messages." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitFanPropertiesStruct, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_FanType_MetaData[] = {
		{ "Category", "AscMapKitFanPropertiesStruct" },
		{ "Comment", "// Used by the game runtime to identify the fan type.\n" },
		{ "ModuleRelativePath", "Public/Fan/AscMapKitFanPropertiesStruct.h" },
		{ "ToolTip", "Used by the game runtime to identify the fan type." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_FanType = { "FanType", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitFanPropertiesStruct, FanType), Z_Construct_UEnum_AscMapKit_EAscMapKitFanTypeEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_FanType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_FanType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_FanType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_Custom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_PlayAmbientSoundCueSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_PlayAmbientSoundCueSoundClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_PlayAmbientSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_DisableDefaultPlayAmbientSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_AnimationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_FanType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::NewProp_FanType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitFanPropertiesStruct",
		sizeof(FAscMapKitFanPropertiesStruct),
		alignof(FAscMapKitFanPropertiesStruct),
		Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitFanPropertiesStruct"), sizeof(FAscMapKitFanPropertiesStruct), Get_Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitFanPropertiesStruct_Hash() { return 1862733639U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
