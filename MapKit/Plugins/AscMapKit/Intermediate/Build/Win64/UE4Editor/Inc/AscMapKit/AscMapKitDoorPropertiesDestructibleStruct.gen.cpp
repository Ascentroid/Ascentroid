// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Door/AscMapKitDoorPropertiesDestructibleStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitDoorPropertiesDestructibleStruct() {}
// Cross Module References
	ASCMAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
class UScriptStruct* FAscMapKitDoorPropertiesDestructibleStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASCMAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct, Z_Construct_UPackage__Script_AscMapKit(), TEXT("AscMapKitDoorPropertiesDestructibleStruct"), sizeof(FAscMapKitDoorPropertiesDestructibleStruct), Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Hash());
	}
	return Singleton;
}
template<> ASCMAPKIT_API UScriptStruct* StaticStruct<FAscMapKitDoorPropertiesDestructibleStruct>()
{
	return FAscMapKitDoorPropertiesDestructibleStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct(FAscMapKitDoorPropertiesDestructibleStruct::StaticStruct, TEXT("/Script/AscMapKit"), TEXT("AscMapKitDoorPropertiesDestructibleStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesDestructibleStruct
{
	FScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesDestructibleStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AscMapKitDoorPropertiesDestructibleStruct")),new UScriptStruct::TCppStructOps<FAscMapKitDoorPropertiesDestructibleStruct>);
	}
} ScriptStruct_AscMapKit_StaticRegisterNativesFAscMapKitDoorPropertiesDestructibleStruct;
	struct Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableDefaultDestroyParticle_MetaData[];
#endif
		static void NewProp_DisableDefaultDestroyParticle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableDefaultDestroyParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAlreadyDestroyed_MetaData[];
#endif
		static void NewProp_IsAlreadyDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAlreadyDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHitImpulseStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OnHitImpulseStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHitRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OnHitRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionRecurringDamageInitialDelaySeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionRecurringDamageInitialDelaySeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionRecurringDamageSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionRecurringDamageSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamageInterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExplosionDamageInterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifetimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifetimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxShields_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxShields;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Indestructible_MetaData[];
#endif
		static void NewProp_Indestructible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Indestructible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesDestructibleStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAscMapKitDoorPropertiesDestructibleStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_DestroyParticle_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesDestructibleStruct" },
		{ "Comment", "// The particle to use when the door is destroyed. If empty, the game runtime default will be used.\n// * For example: an explosion effect.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesDestructibleStruct.h" },
		{ "ToolTip", "The particle to use when the door is destroyed. If empty, the game runtime default will be used.\n* For example: an explosion effect." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_DestroyParticle = { "DestroyParticle", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesDestructibleStruct, DestroyParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_DestroyParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_DestroyParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_DisableDefaultDestroyParticle_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesDestructibleStruct" },
		{ "Comment", "// If a particle is not provided, the default game asset will be used at runtime.\n// However, if you disable it here, then no particle will be used.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesDestructibleStruct.h" },
		{ "ToolTip", "If a particle is not provided, the default game asset will be used at runtime.\nHowever, if you disable it here, then no particle will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_DisableDefaultDestroyParticle_SetBit(void* Obj)
	{
		((FAscMapKitDoorPropertiesDestructibleStruct*)Obj)->DisableDefaultDestroyParticle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_DisableDefaultDestroyParticle = { "DisableDefaultDestroyParticle", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitDoorPropertiesDestructibleStruct), &Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_DisableDefaultDestroyParticle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_DisableDefaultDestroyParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_DisableDefaultDestroyParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_IsAlreadyDestroyed_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesDestructibleStruct" },
		{ "Comment", "// If checked, the door will already be destroyed when it is spawned at game runtime.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesDestructibleStruct.h" },
		{ "ToolTip", "If checked, the door will already be destroyed when it is spawned at game runtime." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_IsAlreadyDestroyed_SetBit(void* Obj)
	{
		((FAscMapKitDoorPropertiesDestructibleStruct*)Obj)->IsAlreadyDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_IsAlreadyDestroyed = { "IsAlreadyDestroyed", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitDoorPropertiesDestructibleStruct), &Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_IsAlreadyDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_IsAlreadyDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_IsAlreadyDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_OnHitImpulseStrength_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesDestructibleStruct" },
		{ "Comment", "// Every time the destructible door is hti, an impulse strength is applied to the door.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesDestructibleStruct.h" },
		{ "ToolTip", "Every time the destructible door is hti, an impulse strength is applied to the door." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_OnHitImpulseStrength = { "OnHitImpulseStrength", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesDestructibleStruct, OnHitImpulseStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_OnHitImpulseStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_OnHitImpulseStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_OnHitRadius_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesDestructibleStruct" },
		{ "Comment", "// Every time the destructible door is hit, a radius damage is applied to the door. This is the radius size.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesDestructibleStruct.h" },
		{ "ToolTip", "Every time the destructible door is hit, a radius damage is applied to the door. This is the radius size." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_OnHitRadius = { "OnHitRadius", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesDestructibleStruct, OnHitRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_OnHitRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_OnHitRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_ExplosionRecurringDamageInitialDelaySeconds_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesDestructibleStruct" },
		{ "Comment", "// How long in seconds to delay the iteration of recurring damage.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesDestructibleStruct.h" },
		{ "ToolTip", "How long in seconds to delay the iteration of recurring damage." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_ExplosionRecurringDamageInitialDelaySeconds = { "ExplosionRecurringDamageInitialDelaySeconds", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesDestructibleStruct, ExplosionRecurringDamageInitialDelaySeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_ExplosionRecurringDamageInitialDelaySeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_ExplosionRecurringDamageInitialDelaySeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_ExplosionRecurringDamageSeconds_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesDestructibleStruct" },
		{ "Comment", "// How long in seconds to apply a radius damage effect to the door while it is exploding.\n// * For example: a slow rate could be used for a rock wall that takes more time to crumble apart.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesDestructibleStruct.h" },
		{ "ToolTip", "How long in seconds to apply a radius damage effect to the door while it is exploding.\n* For example: a slow rate could be used for a rock wall that takes more time to crumble apart." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_ExplosionRecurringDamageSeconds = { "ExplosionRecurringDamageSeconds", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesDestructibleStruct, ExplosionRecurringDamageSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_ExplosionRecurringDamageSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_ExplosionRecurringDamageSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_ExplosionDamageInterations_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesDestructibleStruct" },
		{ "Comment", "// How many iterations to execute a \"damage\" application to a destructible door when it is blowing up.\n// * Larger destructible meshes may need more iterations to give a better effect. You may have to tweak this value depending on what you are trying to achive.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesDestructibleStruct.h" },
		{ "ToolTip", "How many iterations to execute a \"damage\" application to a destructible door when it is blowing up.\n* Larger destructible meshes may need more iterations to give a better effect. You may have to tweak this value depending on what you are trying to achive." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_ExplosionDamageInterations = { "ExplosionDamageInterations", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesDestructibleStruct, ExplosionDamageInterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_ExplosionDamageInterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_ExplosionDamageInterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_LifetimeSeconds_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesDestructibleStruct" },
		{ "Comment", "// How long in seconds to wait before swapping out the destructible door mesh with the static, permanent mesh which appears \"destroyed\".\n// * This gives the game time to break apart the destructible mesh, before swapping to a more performant static mesh.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesDestructibleStruct.h" },
		{ "ToolTip", "How long in seconds to wait before swapping out the destructible door mesh with the static, permanent mesh which appears \"destroyed\".\n* This gives the game time to break apart the destructible mesh, before swapping to a more performant static mesh." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_LifetimeSeconds = { "LifetimeSeconds", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesDestructibleStruct, LifetimeSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_LifetimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_LifetimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_MaxShields_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesDestructibleStruct" },
		{ "Comment", "// Sets the amount of \"shields\" the door is considered to have when spawned in the game runtime.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesDestructibleStruct.h" },
		{ "ToolTip", "Sets the amount of \"shields\" the door is considered to have when spawned in the game runtime." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_MaxShields = { "MaxShields", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAscMapKitDoorPropertiesDestructibleStruct, MaxShields), METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_MaxShields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_MaxShields_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_Indestructible_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesDestructibleStruct" },
		{ "Comment", "// If checked, the door will be indestructible and ignore all other properties.\n// * This is usually used in conjunction with triggers. You can use triggers to enable or disable this.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesDestructibleStruct.h" },
		{ "ToolTip", "If checked, the door will be indestructible and ignore all other properties.\n* This is usually used in conjunction with triggers. You can use triggers to enable or disable this." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_Indestructible_SetBit(void* Obj)
	{
		((FAscMapKitDoorPropertiesDestructibleStruct*)Obj)->Indestructible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_Indestructible = { "Indestructible", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitDoorPropertiesDestructibleStruct), &Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_Indestructible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_Indestructible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_Indestructible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_Enable_MetaData[] = {
		{ "Category", "AscMapKitDoorPropertiesDestructibleStruct" },
		{ "Comment", "// If enabled, this door will be treated as a destructible door.\n" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPropertiesDestructibleStruct.h" },
		{ "ToolTip", "If enabled, this door will be treated as a destructible door." },
	};
#endif
	void Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FAscMapKitDoorPropertiesDestructibleStruct*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAscMapKitDoorPropertiesDestructibleStruct), &Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_DestroyParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_DisableDefaultDestroyParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_IsAlreadyDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_OnHitImpulseStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_OnHitRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_ExplosionRecurringDamageInitialDelaySeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_ExplosionRecurringDamageSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_ExplosionDamageInterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_LifetimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_MaxShields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_Indestructible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::NewProp_Enable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
		nullptr,
		&NewStructOps,
		"AscMapKitDoorPropertiesDestructibleStruct",
		sizeof(FAscMapKitDoorPropertiesDestructibleStruct),
		alignof(FAscMapKitDoorPropertiesDestructibleStruct),
		Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AscMapKitDoorPropertiesDestructibleStruct"), sizeof(FAscMapKitDoorPropertiesDestructibleStruct), Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAscMapKitDoorPropertiesDestructibleStruct_Hash() { return 4108366878U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
