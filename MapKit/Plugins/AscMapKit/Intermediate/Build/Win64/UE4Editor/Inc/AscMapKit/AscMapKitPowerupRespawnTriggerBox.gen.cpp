// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitPowerupRespawnTriggerBox() {}
// Cross Module References
	ASCMAPKIT_API UClass* Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_NoRegister();
	ASCMAPKIT_API UClass* Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UFunction* Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_GetRandomLocationWithinBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ASCMAPKIT_API UFunction* Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_OnConstruction();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ASCMAPKIT_API UFunction* Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_Supports();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitPowerupTypeEnum();
// End Cross Module References
	void AAscMapKitPowerupRespawnTriggerBox::StaticRegisterNativesAAscMapKitPowerupRespawnTriggerBox()
	{
		UClass* Class = AAscMapKitPowerupRespawnTriggerBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRandomLocationWithinBounds", &AAscMapKitPowerupRespawnTriggerBox::execGetRandomLocationWithinBounds },
			{ "OnConstruction", &AAscMapKitPowerupRespawnTriggerBox::execOnConstruction },
			{ "Supports", &AAscMapKitPowerupRespawnTriggerBox::execSupports },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_GetRandomLocationWithinBounds_Statics
	{
		struct AscMapKitPowerupRespawnTriggerBox_eventGetRandomLocationWithinBounds_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_GetRandomLocationWithinBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AscMapKitPowerupRespawnTriggerBox_eventGetRandomLocationWithinBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_GetRandomLocationWithinBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_GetRandomLocationWithinBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_GetRandomLocationWithinBounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_GetRandomLocationWithinBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox, nullptr, "GetRandomLocationWithinBounds", nullptr, nullptr, sizeof(AscMapKitPowerupRespawnTriggerBox_eventGetRandomLocationWithinBounds_Parms), Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_GetRandomLocationWithinBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_GetRandomLocationWithinBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_GetRandomLocationWithinBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_GetRandomLocationWithinBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_GetRandomLocationWithinBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_GetRandomLocationWithinBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_OnConstruction_Statics
	{
		struct AscMapKitPowerupRespawnTriggerBox_eventOnConstruction_Parms
		{
			FTransform Transform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_OnConstruction_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_OnConstruction_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AscMapKitPowerupRespawnTriggerBox_eventOnConstruction_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_OnConstruction_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_OnConstruction_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_OnConstruction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_OnConstruction_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_OnConstruction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_OnConstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox, nullptr, "OnConstruction", nullptr, nullptr, sizeof(AscMapKitPowerupRespawnTriggerBox_eventOnConstruction_Parms), Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_OnConstruction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_OnConstruction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_OnConstruction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_OnConstruction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_OnConstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_OnConstruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_Supports_Statics
	{
		struct AscMapKitPowerupRespawnTriggerBox_eventSupports_Parms
		{
			EAscMapKitPowerupTypeEnum PowerupType;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PowerupType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PowerupType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_Supports_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AscMapKitPowerupRespawnTriggerBox_eventSupports_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_Supports_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AscMapKitPowerupRespawnTriggerBox_eventSupports_Parms), &Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_Supports_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_Supports_Statics::NewProp_PowerupType = { "PowerupType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AscMapKitPowerupRespawnTriggerBox_eventSupports_Parms, PowerupType), Z_Construct_UEnum_AscMapKit_EAscMapKitPowerupTypeEnum, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_Supports_Statics::NewProp_PowerupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_Supports_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_Supports_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_Supports_Statics::NewProp_PowerupType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_Supports_Statics::NewProp_PowerupType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_Supports_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_Supports_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox, nullptr, "Supports", nullptr, nullptr, sizeof(AscMapKitPowerupRespawnTriggerBox_eventSupports_Parms), Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_Supports_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_Supports_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_Supports_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_Supports_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_Supports()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_Supports_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_NoRegister()
	{
		return AAscMapKitPowerupRespawnTriggerBox::StaticClass();
	}
	struct Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxPowerTransfer_MetaData[];
#endif
		static void NewProp_AuxPowerTransfer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AuxPowerTransfer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBoost_MetaData[];
#endif
		static void NewProp_AuxBoost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AuxBoost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxAmmoCache_MetaData[];
#endif
		static void NewProp_AuxAmmoCache_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AuxAmmoCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxAmmo_MetaData[];
#endif
		static void NewProp_AuxAmmo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AuxAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxLaserCoupler_MetaData[];
#endif
		static void NewProp_AuxLaserCoupler_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AuxLaserCoupler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxInvincible_MetaData[];
#endif
		static void NewProp_AuxInvincible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AuxInvincible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxConceal_MetaData[];
#endif
		static void NewProp_AuxConceal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AuxConceal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxShield_MetaData[];
#endif
		static void NewProp_AuxShield_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AuxShield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxPower_MetaData[];
#endif
		static void NewProp_AuxPower_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AuxPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponTetBioPack_MetaData[];
#endif
		static void NewProp_WeaponTetBioPack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponTetBioPack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponTetBio_MetaData[];
#endif
		static void NewProp_WeaponTetBio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponTetBio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponTetHowlerPack_MetaData[];
#endif
		static void NewProp_WeaponTetHowlerPack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponTetHowlerPack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponTetHowler_MetaData[];
#endif
		static void NewProp_WeaponTetHowler_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponTetHowler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponTetRadialPack_MetaData[];
#endif
		static void NewProp_WeaponTetRadialPack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponTetRadialPack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponTetRadial_MetaData[];
#endif
		static void NewProp_WeaponTetRadial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponTetRadial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSecAftershock_MetaData[];
#endif
		static void NewProp_WeaponSecAftershock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponSecAftershock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSecVex_MetaData[];
#endif
		static void NewProp_WeaponSecVex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponSecVex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSecDeadeyePack_MetaData[];
#endif
		static void NewProp_WeaponSecDeadeyePack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponSecDeadeyePack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSecDeadeye_MetaData[];
#endif
		static void NewProp_WeaponSecDeadeye_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponSecDeadeye;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSecRNA_MetaData[];
#endif
		static void NewProp_WeaponSecRNA_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponSecRNA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSecProwlerPack_MetaData[];
#endif
		static void NewProp_WeaponSecProwlerPack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponSecProwlerPack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSecProwler_MetaData[];
#endif
		static void NewProp_WeaponSecProwler_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponSecProwler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSecAssaultPack_MetaData[];
#endif
		static void NewProp_WeaponSecAssaultPack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponSecAssaultPack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSecAssault_MetaData[];
#endif
		static void NewProp_WeaponSecAssault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponSecAssault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPriHammer_MetaData[];
#endif
		static void NewProp_WeaponPriHammer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponPriHammer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPriNeutron_MetaData[];
#endif
		static void NewProp_WeaponPriNeutron_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponPriNeutron;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPriHydra_MetaData[];
#endif
		static void NewProp_WeaponPriHydra_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponPriHydra;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPriPhase_MetaData[];
#endif
		static void NewProp_WeaponPriPhase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponPriPhase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPriCoil_MetaData[];
#endif
		static void NewProp_WeaponPriCoil_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponPriCoil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPriTox_MetaData[];
#endif
		static void NewProp_WeaponPriTox_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponPriTox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPriMech_MetaData[];
#endif
		static void NewProp_WeaponPriMech_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponPriMech;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPriShred_MetaData[];
#endif
		static void NewProp_WeaponPriShred_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponPriShred;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPriLaser_MetaData[];
#endif
		static void NewProp_WeaponPriLaser_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponPriLaser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_GetRandomLocationWithinBounds, "GetRandomLocationWithinBounds" }, // 1021536208
		{ &Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_OnConstruction, "OnConstruction" }, // 3692267904
		{ &Z_Construct_UFunction_AAscMapKitPowerupRespawnTriggerBox_Supports, "Supports" }, // 811978086
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Activation Actor Asset User Data Collision Cooking HLOD Input LOD Lighting Mobile Physics Rendering Replication Sprite Tags Virtual Texture" },
		{ "IncludePath", "Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxPowerTransfer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Auxiliary Power Transfer" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxPowerTransfer_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->AuxPowerTransfer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxPowerTransfer = { "AuxPowerTransfer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxPowerTransfer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxPowerTransfer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxPowerTransfer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxBoost_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Auxiliary Boost" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxBoost_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->AuxBoost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxBoost = { "AuxBoost", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxBoost_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxBoost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxAmmoCache_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Auxiliary Ammo Cache" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxAmmoCache_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->AuxAmmoCache = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxAmmoCache = { "AuxAmmoCache", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxAmmoCache_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxAmmoCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxAmmoCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Auxiliary Ammo" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxAmmo_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->AuxAmmo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxAmmo = { "AuxAmmo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxAmmo_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxLaserCoupler_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Auxiliary Laser Coupler" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxLaserCoupler_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->AuxLaserCoupler = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxLaserCoupler = { "AuxLaserCoupler", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxLaserCoupler_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxLaserCoupler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxLaserCoupler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxInvincible_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Auxiliary Invincible" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxInvincible_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->AuxInvincible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxInvincible = { "AuxInvincible", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxInvincible_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxInvincible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxInvincible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxConceal_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Auxiliary Conceal" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxConceal_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->AuxConceal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxConceal = { "AuxConceal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxConceal_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxConceal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxConceal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxShield_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Auxiliary Shield" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxShield_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->AuxShield = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxShield = { "AuxShield", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxShield_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxShield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxShield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxPower_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Auxiliary Power" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxPower_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->AuxPower = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxPower = { "AuxPower", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxPower_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetBioPack_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Weapon Tertiary Bio" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetBioPack_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponTetBioPack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetBioPack = { "WeaponTetBioPack", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetBioPack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetBioPack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetBioPack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetBio_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Weapon Tertiary Bio" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetBio_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponTetBio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetBio = { "WeaponTetBio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetBio_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetBio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetBio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetHowlerPack_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Weapon Tertiary Howler" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetHowlerPack_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponTetHowlerPack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetHowlerPack = { "WeaponTetHowlerPack", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetHowlerPack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetHowlerPack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetHowlerPack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetHowler_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Weapon Tertiary Howler" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetHowler_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponTetHowler = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetHowler = { "WeaponTetHowler", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetHowler_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetHowler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetHowler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetRadialPack_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Weapon Tertiary Radial" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetRadialPack_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponTetRadialPack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetRadialPack = { "WeaponTetRadialPack", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetRadialPack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetRadialPack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetRadialPack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetRadial_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Weapon Tertiary Radial" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetRadial_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponTetRadial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetRadial = { "WeaponTetRadial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetRadial_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetRadial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetRadial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecAftershock_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Weapon Secondary Aftershock" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecAftershock_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponSecAftershock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecAftershock = { "WeaponSecAftershock", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecAftershock_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecAftershock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecAftershock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecVex_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Weapon Secondary Vex" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecVex_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponSecVex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecVex = { "WeaponSecVex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecVex_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecVex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecVex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecDeadeyePack_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Weapon Secondary Deadeye Pack" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecDeadeyePack_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponSecDeadeyePack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecDeadeyePack = { "WeaponSecDeadeyePack", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecDeadeyePack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecDeadeyePack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecDeadeyePack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecDeadeye_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Weapon Secondary Deadeye" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecDeadeye_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponSecDeadeye = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecDeadeye = { "WeaponSecDeadeye", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecDeadeye_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecDeadeye_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecDeadeye_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecRNA_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Weapon Secondary RNA" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecRNA_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponSecRNA = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecRNA = { "WeaponSecRNA", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecRNA_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecRNA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecRNA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecProwlerPack_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Weapon Secondary Prowler Pack" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecProwlerPack_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponSecProwlerPack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecProwlerPack = { "WeaponSecProwlerPack", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecProwlerPack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecProwlerPack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecProwlerPack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecProwler_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Weapon Secondary Prowler" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecProwler_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponSecProwler = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecProwler = { "WeaponSecProwler", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecProwler_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecProwler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecProwler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecAssaultPack_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Weapon Secondary Assault Pack" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecAssaultPack_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponSecAssaultPack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecAssaultPack = { "WeaponSecAssaultPack", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecAssaultPack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecAssaultPack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecAssaultPack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecAssault_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Weapon Secondary Assault" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecAssault_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponSecAssault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecAssault = { "WeaponSecAssault", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecAssault_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecAssault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecAssault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriHammer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Weapon Primary Hammer" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriHammer_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponPriHammer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriHammer = { "WeaponPriHammer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriHammer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriHammer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriHammer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriNeutron_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Weapon Primary Neutron" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriNeutron_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponPriNeutron = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriNeutron = { "WeaponPriNeutron", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriNeutron_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriNeutron_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriNeutron_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriHydra_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Weapon Primary Hydra" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriHydra_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponPriHydra = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriHydra = { "WeaponPriHydra", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriHydra_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriHydra_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriHydra_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriPhase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Weapon Primary Phase" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriPhase_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponPriPhase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriPhase = { "WeaponPriPhase", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriPhase_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriPhase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriPhase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriCoil_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Weapon Primary Coil" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriCoil_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponPriCoil = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriCoil = { "WeaponPriCoil", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriCoil_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriCoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriCoil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriTox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Weapon Primary Tox" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriTox_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponPriTox = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriTox = { "WeaponPriTox", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriTox_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriTox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriTox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriMech_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Weapon Primary Mech" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriMech_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponPriMech = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriMech = { "WeaponPriMech", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriMech_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriMech_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriMech_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriShred_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "DisplayName", "Weapon Primary Shred" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriShred_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponPriShred = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriShred = { "WeaponPriShred", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriShred_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriShred_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriShred_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriLaser_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Powerups" },
		{ "Comment", "// todo: @reminder: update as powerups change\n" },
		{ "DisplayName", "Weapon Primary Laser" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupRespawnTriggerBox.h" },
		{ "ToolTip", "todo: @reminder: update as powerups change" },
	};
#endif
	void Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriLaser_SetBit(void* Obj)
	{
		((AAscMapKitPowerupRespawnTriggerBox*)Obj)->WeaponPriLaser = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriLaser = { "WeaponPriLaser", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAscMapKitPowerupRespawnTriggerBox), &Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriLaser_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriLaser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriLaser_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxPowerTransfer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxBoost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxAmmoCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxLaserCoupler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxInvincible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxConceal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxShield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_AuxPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetBioPack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetBio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetHowlerPack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetHowler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetRadialPack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponTetRadial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecAftershock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecVex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecDeadeyePack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecDeadeye,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecRNA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecProwlerPack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecProwler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecAssaultPack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponSecAssault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriHammer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriNeutron,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriHydra,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriPhase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriCoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriTox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriMech,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriShred,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::NewProp_WeaponPriLaser,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAscMapKitPowerupRespawnTriggerBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::ClassParams = {
		&AAscMapKitPowerupRespawnTriggerBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAscMapKitPowerupRespawnTriggerBox, 3140102137);
	template<> ASCMAPKIT_API UClass* StaticClass<AAscMapKitPowerupRespawnTriggerBox>()
	{
		return AAscMapKitPowerupRespawnTriggerBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAscMapKitPowerupRespawnTriggerBox(Z_Construct_UClass_AAscMapKitPowerupRespawnTriggerBox, &AAscMapKitPowerupRespawnTriggerBox::StaticClass, TEXT("/Script/AscMapKit"), TEXT("AAscMapKitPowerupRespawnTriggerBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAscMapKitPowerupRespawnTriggerBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
