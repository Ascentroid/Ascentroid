// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyTypeEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnemyTypeEnum() {}
// Cross Module References
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitEnemyTypeEnum();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
	static UEnum* EAscMapKitEnemyTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AscMapKit_EAscMapKitEnemyTypeEnum, Z_Construct_UPackage__Script_AscMapKit(), TEXT("EAscMapKitEnemyTypeEnum"));
		}
		return Singleton;
	}
	template<> ASCMAPKIT_API UEnum* StaticEnum<EAscMapKitEnemyTypeEnum>()
	{
		return EAscMapKitEnemyTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAscMapKitEnemyTypeEnum(EAscMapKitEnemyTypeEnum_StaticEnum, TEXT("/Script/AscMapKit"), TEXT("EAscMapKitEnemyTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AscMapKit_EAscMapKitEnemyTypeEnum_Hash() { return 2605663114U; }
	UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitEnemyTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAscMapKitEnemyTypeEnum"), 0, Get_Z_Construct_UEnum_AscMapKit_EAscMapKitEnemyTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAscMapKitEnemyTypeEnum::PleaseSelect", (int64)EAscMapKitEnemyTypeEnum::PleaseSelect },
				{ "EAscMapKitEnemyTypeEnum::AlienCylon", (int64)EAscMapKitEnemyTypeEnum::AlienCylon },
				{ "EAscMapKitEnemyTypeEnum::AlienGrawn", (int64)EAscMapKitEnemyTypeEnum::AlienGrawn },
				{ "EAscMapKitEnemyTypeEnum::MachineAssaultCache", (int64)EAscMapKitEnemyTypeEnum::MachineAssaultCache },
				{ "EAscMapKitEnemyTypeEnum::MachineAssaultTank", (int64)EAscMapKitEnemyTypeEnum::MachineAssaultTank },
				{ "EAscMapKitEnemyTypeEnum::MachineGeminiTurret", (int64)EAscMapKitEnemyTypeEnum::MachineGeminiTurret },
				{ "EAscMapKitEnemyTypeEnum::MachineSarkTurret", (int64)EAscMapKitEnemyTypeEnum::MachineSarkTurret },
				{ "EAscMapKitEnemyTypeEnum::MachineSecureGage", (int64)EAscMapKitEnemyTypeEnum::MachineSecureGage },
				{ "EAscMapKitEnemyTypeEnum::MachineServasTurret", (int64)EAscMapKitEnemyTypeEnum::MachineServasTurret },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlienCylon.Name", "EAscMapKitEnemyTypeEnum::AlienCylon" },
				{ "AlienGrawn.Name", "EAscMapKitEnemyTypeEnum::AlienGrawn" },
				{ "MachineAssaultCache.Name", "EAscMapKitEnemyTypeEnum::MachineAssaultCache" },
				{ "MachineAssaultTank.Name", "EAscMapKitEnemyTypeEnum::MachineAssaultTank" },
				{ "MachineGeminiTurret.Name", "EAscMapKitEnemyTypeEnum::MachineGeminiTurret" },
				{ "MachineSarkTurret.Name", "EAscMapKitEnemyTypeEnum::MachineSarkTurret" },
				{ "MachineSecureGage.Name", "EAscMapKitEnemyTypeEnum::MachineSecureGage" },
				{ "MachineServasTurret.Name", "EAscMapKitEnemyTypeEnum::MachineServasTurret" },
				{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyTypeEnum.h" },
				{ "PleaseSelect.Name", "EAscMapKitEnemyTypeEnum::PleaseSelect" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AscMapKit,
				nullptr,
				"EAscMapKitEnemyTypeEnum",
				"EAscMapKitEnemyTypeEnum",
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
