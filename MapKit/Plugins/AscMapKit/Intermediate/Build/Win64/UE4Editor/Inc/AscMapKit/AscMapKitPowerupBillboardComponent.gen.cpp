// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Powerup/AscMapKitPowerupBillboardComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitPowerupBillboardComponent() {}
// Cross Module References
	ASCMAPKIT_API UClass* Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_NoRegister();
	ASCMAPKIT_API UClass* Z_Construct_UClass_UAscMapKitPowerupBillboardComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UFunction* Z_Construct_UFunction_UAscMapKitPowerupBillboardComponent_EditorUpdatePowerupType();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitPowerupTypeEnum();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UAscMapKitPowerupBillboardComponent::StaticRegisterNativesUAscMapKitPowerupBillboardComponent()
	{
#if WITH_EDITOR
		UClass* Class = UAscMapKitPowerupBillboardComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EditorUpdatePowerupType", &UAscMapKitPowerupBillboardComponent::execEditorUpdatePowerupType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAscMapKitPowerupBillboardComponent_EditorUpdatePowerupType_Statics
	{
		struct AscMapKitPowerupBillboardComponent_eventEditorUpdatePowerupType_Parms
		{
			EAscMapKitPowerupTypeEnum PowerupType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PowerupType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PowerupType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAscMapKitPowerupBillboardComponent_EditorUpdatePowerupType_Statics::NewProp_PowerupType = { "PowerupType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AscMapKitPowerupBillboardComponent_eventEditorUpdatePowerupType_Parms, PowerupType), Z_Construct_UEnum_AscMapKit_EAscMapKitPowerupTypeEnum, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAscMapKitPowerupBillboardComponent_EditorUpdatePowerupType_Statics::NewProp_PowerupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAscMapKitPowerupBillboardComponent_EditorUpdatePowerupType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAscMapKitPowerupBillboardComponent_EditorUpdatePowerupType_Statics::NewProp_PowerupType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAscMapKitPowerupBillboardComponent_EditorUpdatePowerupType_Statics::NewProp_PowerupType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAscMapKitPowerupBillboardComponent_EditorUpdatePowerupType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAscMapKitPowerupBillboardComponent_EditorUpdatePowerupType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAscMapKitPowerupBillboardComponent, nullptr, "EditorUpdatePowerupType", nullptr, nullptr, sizeof(AscMapKitPowerupBillboardComponent_eventEditorUpdatePowerupType_Parms), Z_Construct_UFunction_UAscMapKitPowerupBillboardComponent_EditorUpdatePowerupType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAscMapKitPowerupBillboardComponent_EditorUpdatePowerupType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAscMapKitPowerupBillboardComponent_EditorUpdatePowerupType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAscMapKitPowerupBillboardComponent_EditorUpdatePowerupType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAscMapKitPowerupBillboardComponent_EditorUpdatePowerupType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAscMapKitPowerupBillboardComponent_EditorUpdatePowerupType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	UClass* Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_NoRegister()
	{
		return UAscMapKitPowerupBillboardComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TetRadialPackTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TetRadialPackTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TetRadialTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TetRadialTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TetHowlerPackTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TetHowlerPackTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TetHowlerTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TetHowlerTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TetBioPackTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TetBioPackTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TetBioTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TetBioTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecAftershockTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecAftershockTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecVexTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecVexTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecDeadeyePackTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecDeadeyePackTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecDeadeyeTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecDeadeyeTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecRNATexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecRNATexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecProwlerPackTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecProwlerPackTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecProwlerTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecProwlerTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecAssaultPackTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecAssaultPackTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecAssaultTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecAssaultTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriNeutronTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PriNeutronTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriHydraTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PriHydraTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriPhaseTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PriPhaseTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriCoilTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PriCoilTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriToxTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PriToxTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriMechTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PriMechTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriShredTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PriShredTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriLaserTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PriLaserTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxShieldTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxShieldTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxPowerTransferTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxPowerTransferTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxPowerTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxPowerTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxLaserCouplerTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxLaserCouplerTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxInvincibleTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxInvincibleTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxConcealTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxConcealTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBoostTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxBoostTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxAmmoCacheTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxAmmoCacheTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxAmmoTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxAmmoTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBillboardComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAscMapKitPowerupBillboardComponent_EditorUpdatePowerupType, "EditorUpdatePowerupType" }, // 2950553238
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Physics Collision Lighting Mesh PhysicsVolume Mobility Trigger" },
		{ "IncludePath", "Powerup/AscMapKitPowerupBillboardComponent.h" },
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetRadialPackTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetRadialPackTexture = { "TetRadialPackTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, TetRadialPackTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetRadialPackTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetRadialPackTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetRadialTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetRadialTexture = { "TetRadialTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, TetRadialTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetRadialTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetRadialTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetHowlerPackTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetHowlerPackTexture = { "TetHowlerPackTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, TetHowlerPackTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetHowlerPackTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetHowlerPackTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetHowlerTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetHowlerTexture = { "TetHowlerTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, TetHowlerTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetHowlerTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetHowlerTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetBioPackTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetBioPackTexture = { "TetBioPackTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, TetBioPackTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetBioPackTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetBioPackTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetBioTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetBioTexture = { "TetBioTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, TetBioTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetBioTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetBioTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecAftershockTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecAftershockTexture = { "SecAftershockTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, SecAftershockTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecAftershockTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecAftershockTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecVexTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecVexTexture = { "SecVexTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, SecVexTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecVexTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecVexTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecDeadeyePackTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecDeadeyePackTexture = { "SecDeadeyePackTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, SecDeadeyePackTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecDeadeyePackTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecDeadeyePackTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecDeadeyeTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecDeadeyeTexture = { "SecDeadeyeTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, SecDeadeyeTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecDeadeyeTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecDeadeyeTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecRNATexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecRNATexture = { "SecRNATexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, SecRNATexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecRNATexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecRNATexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecProwlerPackTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecProwlerPackTexture = { "SecProwlerPackTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, SecProwlerPackTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecProwlerPackTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecProwlerPackTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecProwlerTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecProwlerTexture = { "SecProwlerTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, SecProwlerTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecProwlerTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecProwlerTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecAssaultPackTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecAssaultPackTexture = { "SecAssaultPackTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, SecAssaultPackTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecAssaultPackTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecAssaultPackTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecAssaultTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecAssaultTexture = { "SecAssaultTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, SecAssaultTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecAssaultTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecAssaultTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriNeutronTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriNeutronTexture = { "PriNeutronTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, PriNeutronTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriNeutronTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriNeutronTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriHydraTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriHydraTexture = { "PriHydraTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, PriHydraTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriHydraTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriHydraTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriPhaseTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriPhaseTexture = { "PriPhaseTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, PriPhaseTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriPhaseTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriPhaseTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriCoilTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriCoilTexture = { "PriCoilTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, PriCoilTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriCoilTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriCoilTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriToxTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriToxTexture = { "PriToxTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, PriToxTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriToxTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriToxTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriMechTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriMechTexture = { "PriMechTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, PriMechTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriMechTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriMechTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriShredTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriShredTexture = { "PriShredTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, PriShredTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriShredTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriShredTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriLaserTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriLaserTexture = { "PriLaserTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, PriLaserTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriLaserTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriLaserTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxShieldTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxShieldTexture = { "AuxShieldTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, AuxShieldTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxShieldTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxShieldTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxPowerTransferTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxPowerTransferTexture = { "AuxPowerTransferTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, AuxPowerTransferTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxPowerTransferTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxPowerTransferTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxPowerTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxPowerTexture = { "AuxPowerTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, AuxPowerTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxPowerTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxPowerTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxLaserCouplerTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxLaserCouplerTexture = { "AuxLaserCouplerTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, AuxLaserCouplerTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxLaserCouplerTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxLaserCouplerTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxInvincibleTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxInvincibleTexture = { "AuxInvincibleTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, AuxInvincibleTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxInvincibleTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxInvincibleTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxConcealTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxConcealTexture = { "AuxConcealTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, AuxConcealTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxConcealTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxConcealTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxBoostTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxBoostTexture = { "AuxBoostTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, AuxBoostTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxBoostTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxBoostTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxAmmoCacheTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxAmmoCacheTexture = { "AuxAmmoCacheTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, AuxAmmoCacheTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxAmmoCacheTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxAmmoCacheTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxAmmoTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxAmmoTexture = { "AuxAmmoTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, AuxAmmoTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxAmmoTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxAmmoTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_CurrentTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_CurrentTexture = { "CurrentTexture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitPowerupBillboardComponent, CurrentTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_CurrentTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_CurrentTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetRadialPackTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetRadialTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetHowlerPackTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetHowlerTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetBioPackTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_TetBioTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecAftershockTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecVexTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecDeadeyePackTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecDeadeyeTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecRNATexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecProwlerPackTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecProwlerTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecAssaultPackTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_SecAssaultTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriNeutronTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriHydraTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriPhaseTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriCoilTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriToxTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriMechTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriShredTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_PriLaserTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxShieldTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxPowerTransferTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxPowerTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxLaserCouplerTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxInvincibleTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxConcealTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxBoostTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxAmmoCacheTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_AuxAmmoTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::NewProp_CurrentTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAscMapKitPowerupBillboardComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::ClassParams = {
		&UAscMapKitPowerupBillboardComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::PropPointers),
		0,
		0x00B030A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAscMapKitPowerupBillboardComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAscMapKitPowerupBillboardComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAscMapKitPowerupBillboardComponent, 2174633133);
	template<> ASCMAPKIT_API UClass* StaticClass<UAscMapKitPowerupBillboardComponent>()
	{
		return UAscMapKitPowerupBillboardComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAscMapKitPowerupBillboardComponent(Z_Construct_UClass_UAscMapKitPowerupBillboardComponent, &UAscMapKitPowerupBillboardComponent::StaticClass, TEXT("/Script/AscMapKit"), TEXT("UAscMapKitPowerupBillboardComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAscMapKitPowerupBillboardComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
