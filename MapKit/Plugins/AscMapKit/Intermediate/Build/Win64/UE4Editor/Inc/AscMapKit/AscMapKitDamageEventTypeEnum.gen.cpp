// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Core/Constant/AscMapKitDamageEventTypeEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitDamageEventTypeEnum() {}
// Cross Module References
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitDamageEventTypeEnum();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
	static UEnum* EAscMapKitDamageEventTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AscMapKit_EAscMapKitDamageEventTypeEnum, Z_Construct_UPackage__Script_AscMapKit(), TEXT("EAscMapKitDamageEventTypeEnum"));
		}
		return Singleton;
	}
	template<> ASCMAPKIT_API UEnum* StaticEnum<EAscMapKitDamageEventTypeEnum>()
	{
		return EAscMapKitDamageEventTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAscMapKitDamageEventTypeEnum(EAscMapKitDamageEventTypeEnum_StaticEnum, TEXT("/Script/AscMapKit"), TEXT("EAscMapKitDamageEventTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AscMapKit_EAscMapKitDamageEventTypeEnum_Hash() { return 1396163010U; }
	UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitDamageEventTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAscMapKitDamageEventTypeEnum"), 0, Get_Z_Construct_UEnum_AscMapKit_EAscMapKitDamageEventTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAscMapKitDamageEventTypeEnum::Unknown", (int64)EAscMapKitDamageEventTypeEnum::Unknown },
				{ "EAscMapKitDamageEventTypeEnum::PlayerShipEnvironmentCollision", (int64)EAscMapKitDamageEventTypeEnum::PlayerShipEnvironmentCollision },
				{ "EAscMapKitDamageEventTypeEnum::Acid", (int64)EAscMapKitDamageEventTypeEnum::Acid },
				{ "EAscMapKitDamageEventTypeEnum::Bomb", (int64)EAscMapKitDamageEventTypeEnum::Bomb },
				{ "EAscMapKitDamageEventTypeEnum::Debris", (int64)EAscMapKitDamageEventTypeEnum::Debris },
				{ "EAscMapKitDamageEventTypeEnum::Electricity", (int64)EAscMapKitDamageEventTypeEnum::Electricity },
				{ "EAscMapKitDamageEventTypeEnum::Enemy", (int64)EAscMapKitDamageEventTypeEnum::Enemy },
				{ "EAscMapKitDamageEventTypeEnum::Explosion", (int64)EAscMapKitDamageEventTypeEnum::Explosion },
				{ "EAscMapKitDamageEventTypeEnum::Fire", (int64)EAscMapKitDamageEventTypeEnum::Fire },
				{ "EAscMapKitDamageEventTypeEnum::Forcefield", (int64)EAscMapKitDamageEventTypeEnum::Forcefield },
				{ "EAscMapKitDamageEventTypeEnum::Lava", (int64)EAscMapKitDamageEventTypeEnum::Lava },
				{ "EAscMapKitDamageEventTypeEnum::NeutronOvercharging", (int64)EAscMapKitDamageEventTypeEnum::NeutronOvercharging },
				{ "EAscMapKitDamageEventTypeEnum::Plasma", (int64)EAscMapKitDamageEventTypeEnum::Plasma },
				{ "EAscMapKitDamageEventTypeEnum::Sludge", (int64)EAscMapKitDamageEventTypeEnum::Sludge },
				{ "EAscMapKitDamageEventTypeEnum::SuicideCheat", (int64)EAscMapKitDamageEventTypeEnum::SuicideCheat },
				{ "EAscMapKitDamageEventTypeEnum::_End", (int64)EAscMapKitDamageEventTypeEnum::_End },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "_End.Name", "EAscMapKitDamageEventTypeEnum::_End" },
				{ "Acid.Name", "EAscMapKitDamageEventTypeEnum::Acid" },
				{ "Bomb.Name", "EAscMapKitDamageEventTypeEnum::Bomb" },
				{ "Debris.Name", "EAscMapKitDamageEventTypeEnum::Debris" },
				{ "Electricity.Name", "EAscMapKitDamageEventTypeEnum::Electricity" },
				{ "Enemy.Name", "EAscMapKitDamageEventTypeEnum::Enemy" },
				{ "Explosion.Name", "EAscMapKitDamageEventTypeEnum::Explosion" },
				{ "Fire.Name", "EAscMapKitDamageEventTypeEnum::Fire" },
				{ "Forcefield.Name", "EAscMapKitDamageEventTypeEnum::Forcefield" },
				{ "Lava.Name", "EAscMapKitDamageEventTypeEnum::Lava" },
				{ "ModuleRelativePath", "Public/Core/Constant/AscMapKitDamageEventTypeEnum.h" },
				{ "NeutronOvercharging.Name", "EAscMapKitDamageEventTypeEnum::NeutronOvercharging" },
				{ "Plasma.Name", "EAscMapKitDamageEventTypeEnum::Plasma" },
				{ "PlayerShipEnvironmentCollision.Name", "EAscMapKitDamageEventTypeEnum::PlayerShipEnvironmentCollision" },
				{ "Sludge.Name", "EAscMapKitDamageEventTypeEnum::Sludge" },
				{ "SuicideCheat.Name", "EAscMapKitDamageEventTypeEnum::SuicideCheat" },
				{ "Unknown.Name", "EAscMapKitDamageEventTypeEnum::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AscMapKit,
				nullptr,
				"EAscMapKitDamageEventTypeEnum",
				"EAscMapKitDamageEventTypeEnum",
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
