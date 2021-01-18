// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyPropertiesStatusStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnemyPropertiesStatusStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct();
// End Cross Module References
class UScriptStruct* FAscMapKitEnemyPropertiesStatusStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitEnemyPropertiesStatusStruct"), sizeof(FAscMapKitEnemyPropertiesStatusStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitEnemyPropertiesStatusStruct>()
{
	return FAscMapKitEnemyPropertiesStatusStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct(FAscMapKitEnemyPropertiesStatusStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitEnemyPropertiesStatusStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesStatusStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesStatusStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitEnemyPropertiesStatusStruct")),new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesStatusStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitEnemyPropertiesStatusStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartShields_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartShields;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Concealed_MetaData[];
#endif
		static void NewProp_Concealed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Concealed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invincible_MetaData[];
#endif
		static void NewProp_Invincible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Invincible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableAttack_MetaData[];
#endif
		static void NewProp_DisableAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableCompletely_MetaData[];
#endif
		static void NewProp_DisableCompletely_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableCompletely;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStatusStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitEnemyPropertiesStatusStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStatusStruct" },
		{ "Comment", "// The enemy will be forced to a maximum movement speed.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStatusStruct.h" },
		{ "ToolTip", "The enemy will be forced to a maximum movement speed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesStatusStruct, MaxSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_StartShields_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStatusStruct" },
		{ "Comment", "// The enemy will start with this amount of shields.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStatusStruct.h" },
		{ "ToolTip", "The enemy will start with this amount of shields." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_StartShields = { "StartShields", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitEnemyPropertiesStatusStruct, StartShields), Z_Construct_UScriptStruct_FAscMapKitDifficultyFloatStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_StartShields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_StartShields_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_Concealed_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStatusStruct" },
		{ "Comment", "// The enemy will be permanently concealed. (todo: not implemented)\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStatusStruct.h" },
		{ "ToolTip", "The enemy will be permanently concealed. (todo: not implemented)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_Concealed_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesStatusStruct*)Obj)->Concealed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_Concealed = { "Concealed", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesStatusStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_Concealed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_Concealed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_Concealed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_Invincible_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStatusStruct" },
		{ "Comment", "// The enemy will be permanently invincible. (todo: not implemented)\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStatusStruct.h" },
		{ "ToolTip", "The enemy will be permanently invincible. (todo: not implemented)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_Invincible_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesStatusStruct*)Obj)->Invincible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_Invincible = { "Invincible", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesStatusStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_Invincible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_Invincible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_Invincible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_DisableAttack_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStatusStruct" },
		{ "Comment", "// The enemy will not attack, but will continue to perform all other functions.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStatusStruct.h" },
		{ "ToolTip", "The enemy will not attack, but will continue to perform all other functions." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_DisableAttack_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesStatusStruct*)Obj)->DisableAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_DisableAttack = { "DisableAttack", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesStatusStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_DisableAttack_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_DisableAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_DisableAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_DisableCompletely_MetaData[] = {
		{ "Category", "AscMapKitEnemyPropertiesStatusStruct" },
		{ "Comment", "// The enemy will not perform any functions. This includes movement, targeting, dodging; everything.\n" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyPropertiesStatusStruct.h" },
		{ "ToolTip", "The enemy will not perform any functions. This includes movement, targeting, dodging; everything." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_DisableCompletely_SetBit(void* Obj)
	{
		((FAscMapKitEnemyPropertiesStatusStruct*)Obj)->DisableCompletely = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_DisableCompletely = { "DisableCompletely", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitEnemyPropertiesStatusStruct), &Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_DisableCompletely_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_DisableCompletely_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_DisableCompletely_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_StartShields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_Concealed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_Invincible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_DisableAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::NewProp_DisableCompletely,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitEnemyPropertiesStatusStruct",
		sizeof(FAscMapKitEnemyPropertiesStatusStruct),
		alignof(FAscMapKitEnemyPropertiesStatusStruct),
		Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitEnemyPropertiesStatusStruct"), sizeof(FAscMapKitEnemyPropertiesStatusStruct), Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitEnemyPropertiesStatusStruct_Hash() { return 2765128772U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
