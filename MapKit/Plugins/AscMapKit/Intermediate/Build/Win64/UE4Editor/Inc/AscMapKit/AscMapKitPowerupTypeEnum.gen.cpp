// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Powerup/AscMapKitPowerupTypeEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitPowerupTypeEnum() {}
// Cross Module References
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitPowerupTypeEnum();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
	static UEnum* EAscMapKitPowerupTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AscMapKit_EAscMapKitPowerupTypeEnum, Z_Construct_UPackage__Script_AscMapKit(), TEXT("EAscMapKitPowerupTypeEnum"));
		}
		return Singleton;
	}
	template<> ASCMAPKIT_API UEnum* StaticEnum<EAscMapKitPowerupTypeEnum>()
	{
		return EAscMapKitPowerupTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAscMapKitPowerupTypeEnum(EAscMapKitPowerupTypeEnum_StaticEnum, TEXT("/Script/AscMapKit"), TEXT("EAscMapKitPowerupTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AscMapKit_EAscMapKitPowerupTypeEnum_Hash() { return 3541720964U; }
	UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitPowerupTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAscMapKitPowerupTypeEnum"), 0, Get_Z_Construct_UEnum_AscMapKit_EAscMapKitPowerupTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAscMapKitPowerupTypeEnum::PleaseSelect", (int64)EAscMapKitPowerupTypeEnum::PleaseSelect },
				{ "EAscMapKitPowerupTypeEnum::PriLaser", (int64)EAscMapKitPowerupTypeEnum::PriLaser },
				{ "EAscMapKitPowerupTypeEnum::PriShred", (int64)EAscMapKitPowerupTypeEnum::PriShred },
				{ "EAscMapKitPowerupTypeEnum::PriMech", (int64)EAscMapKitPowerupTypeEnum::PriMech },
				{ "EAscMapKitPowerupTypeEnum::PriTox", (int64)EAscMapKitPowerupTypeEnum::PriTox },
				{ "EAscMapKitPowerupTypeEnum::PriCoil", (int64)EAscMapKitPowerupTypeEnum::PriCoil },
				{ "EAscMapKitPowerupTypeEnum::PriPhase", (int64)EAscMapKitPowerupTypeEnum::PriPhase },
				{ "EAscMapKitPowerupTypeEnum::PriHydra", (int64)EAscMapKitPowerupTypeEnum::PriHydra },
				{ "EAscMapKitPowerupTypeEnum::PriNeutron", (int64)EAscMapKitPowerupTypeEnum::PriNeutron },
				{ "EAscMapKitPowerupTypeEnum::SecAssault", (int64)EAscMapKitPowerupTypeEnum::SecAssault },
				{ "EAscMapKitPowerupTypeEnum::SecAssaultPack", (int64)EAscMapKitPowerupTypeEnum::SecAssaultPack },
				{ "EAscMapKitPowerupTypeEnum::SecProwler", (int64)EAscMapKitPowerupTypeEnum::SecProwler },
				{ "EAscMapKitPowerupTypeEnum::SecProwlerPack", (int64)EAscMapKitPowerupTypeEnum::SecProwlerPack },
				{ "EAscMapKitPowerupTypeEnum::SecRNA", (int64)EAscMapKitPowerupTypeEnum::SecRNA },
				{ "EAscMapKitPowerupTypeEnum::SecDeadeye", (int64)EAscMapKitPowerupTypeEnum::SecDeadeye },
				{ "EAscMapKitPowerupTypeEnum::SecDeadeyePack", (int64)EAscMapKitPowerupTypeEnum::SecDeadeyePack },
				{ "EAscMapKitPowerupTypeEnum::SecVex", (int64)EAscMapKitPowerupTypeEnum::SecVex },
				{ "EAscMapKitPowerupTypeEnum::SecAftershock", (int64)EAscMapKitPowerupTypeEnum::SecAftershock },
				{ "EAscMapKitPowerupTypeEnum::TetBio", (int64)EAscMapKitPowerupTypeEnum::TetBio },
				{ "EAscMapKitPowerupTypeEnum::TetBioPack", (int64)EAscMapKitPowerupTypeEnum::TetBioPack },
				{ "EAscMapKitPowerupTypeEnum::TetHowler", (int64)EAscMapKitPowerupTypeEnum::TetHowler },
				{ "EAscMapKitPowerupTypeEnum::TetHowlerPack", (int64)EAscMapKitPowerupTypeEnum::TetHowlerPack },
				{ "EAscMapKitPowerupTypeEnum::TetRadial", (int64)EAscMapKitPowerupTypeEnum::TetRadial },
				{ "EAscMapKitPowerupTypeEnum::TetRadialPack", (int64)EAscMapKitPowerupTypeEnum::TetRadialPack },
				{ "EAscMapKitPowerupTypeEnum::AuxAmmo", (int64)EAscMapKitPowerupTypeEnum::AuxAmmo },
				{ "EAscMapKitPowerupTypeEnum::AuxAmmoCache", (int64)EAscMapKitPowerupTypeEnum::AuxAmmoCache },
				{ "EAscMapKitPowerupTypeEnum::AuxBoost", (int64)EAscMapKitPowerupTypeEnum::AuxBoost },
				{ "EAscMapKitPowerupTypeEnum::AuxConceal", (int64)EAscMapKitPowerupTypeEnum::AuxConceal },
				{ "EAscMapKitPowerupTypeEnum::AuxInvincible", (int64)EAscMapKitPowerupTypeEnum::AuxInvincible },
				{ "EAscMapKitPowerupTypeEnum::AuxLaserCoupler", (int64)EAscMapKitPowerupTypeEnum::AuxLaserCoupler },
				{ "EAscMapKitPowerupTypeEnum::AuxPower", (int64)EAscMapKitPowerupTypeEnum::AuxPower },
				{ "EAscMapKitPowerupTypeEnum::AuxPowerTransfer", (int64)EAscMapKitPowerupTypeEnum::AuxPowerTransfer },
				{ "EAscMapKitPowerupTypeEnum::AuxShield", (int64)EAscMapKitPowerupTypeEnum::AuxShield },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AuxAmmo.Name", "EAscMapKitPowerupTypeEnum::AuxAmmo" },
				{ "AuxAmmoCache.Name", "EAscMapKitPowerupTypeEnum::AuxAmmoCache" },
				{ "AuxBoost.Name", "EAscMapKitPowerupTypeEnum::AuxBoost" },
				{ "AuxConceal.Name", "EAscMapKitPowerupTypeEnum::AuxConceal" },
				{ "AuxInvincible.Name", "EAscMapKitPowerupTypeEnum::AuxInvincible" },
				{ "AuxLaserCoupler.Name", "EAscMapKitPowerupTypeEnum::AuxLaserCoupler" },
				{ "AuxPower.Name", "EAscMapKitPowerupTypeEnum::AuxPower" },
				{ "AuxPowerTransfer.Name", "EAscMapKitPowerupTypeEnum::AuxPowerTransfer" },
				{ "AuxShield.Name", "EAscMapKitPowerupTypeEnum::AuxShield" },
				{ "ModuleRelativePath", "Public/Powerup/AscMapKitPowerupTypeEnum.h" },
				{ "PleaseSelect.Name", "EAscMapKitPowerupTypeEnum::PleaseSelect" },
				{ "PriCoil.Name", "EAscMapKitPowerupTypeEnum::PriCoil" },
				{ "PriHydra.Name", "EAscMapKitPowerupTypeEnum::PriHydra" },
				{ "PriLaser.Name", "EAscMapKitPowerupTypeEnum::PriLaser" },
				{ "PriMech.Name", "EAscMapKitPowerupTypeEnum::PriMech" },
				{ "PriNeutron.Name", "EAscMapKitPowerupTypeEnum::PriNeutron" },
				{ "PriPhase.Name", "EAscMapKitPowerupTypeEnum::PriPhase" },
				{ "PriShred.Name", "EAscMapKitPowerupTypeEnum::PriShred" },
				{ "PriTox.Name", "EAscMapKitPowerupTypeEnum::PriTox" },
				{ "SecAftershock.Name", "EAscMapKitPowerupTypeEnum::SecAftershock" },
				{ "SecAssault.Comment", "// todo: @future, @hammer\n" },
				{ "SecAssault.Name", "EAscMapKitPowerupTypeEnum::SecAssault" },
				{ "SecAssault.ToolTip", "todo: @future, @hammer" },
				{ "SecAssaultPack.Name", "EAscMapKitPowerupTypeEnum::SecAssaultPack" },
				{ "SecDeadeye.Name", "EAscMapKitPowerupTypeEnum::SecDeadeye" },
				{ "SecDeadeyePack.Name", "EAscMapKitPowerupTypeEnum::SecDeadeyePack" },
				{ "SecProwler.Name", "EAscMapKitPowerupTypeEnum::SecProwler" },
				{ "SecProwlerPack.Name", "EAscMapKitPowerupTypeEnum::SecProwlerPack" },
				{ "SecRNA.Name", "EAscMapKitPowerupTypeEnum::SecRNA" },
				{ "SecVex.Name", "EAscMapKitPowerupTypeEnum::SecVex" },
				{ "TetBio.Name", "EAscMapKitPowerupTypeEnum::TetBio" },
				{ "TetBioPack.Name", "EAscMapKitPowerupTypeEnum::TetBioPack" },
				{ "TetHowler.Name", "EAscMapKitPowerupTypeEnum::TetHowler" },
				{ "TetHowlerPack.Name", "EAscMapKitPowerupTypeEnum::TetHowlerPack" },
				{ "TetRadial.Name", "EAscMapKitPowerupTypeEnum::TetRadial" },
				{ "TetRadialPack.Name", "EAscMapKitPowerupTypeEnum::TetRadialPack" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AscMapKit,
				nullptr,
				"EAscMapKitPowerupTypeEnum",
				"EAscMapKitPowerupTypeEnum",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
