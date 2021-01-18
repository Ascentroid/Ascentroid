// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Projectile/AscMapKitProjWeapTypeEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitProjWeapTypeEnum() {}
// Cross Module References
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitProjWeapTypeEnum();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
	static UEnum* EAscMapKitProjWeapTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AscMapKit_EAscMapKitProjWeapTypeEnum, Z_Construct_UPackage__Script_AscMapKit(), TEXT("EAscMapKitProjWeapTypeEnum"));
		}
		return Singleton;
	}
	template<> ASCMAPKIT_API UEnum* StaticEnum<EAscMapKitProjWeapTypeEnum>()
	{
		return EAscMapKitProjWeapTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAscMapKitProjWeapTypeEnum(EAscMapKitProjWeapTypeEnum_StaticEnum, TEXT("/Script/AscMapKit"), TEXT("EAscMapKitProjWeapTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AscMapKit_EAscMapKitProjWeapTypeEnum_Hash() { return 3201996285U; }
	UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitProjWeapTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAscMapKitProjWeapTypeEnum"), 0, Get_Z_Construct_UEnum_AscMapKit_EAscMapKitProjWeapTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAscMapKitProjWeapTypeEnum::None", (int64)EAscMapKitProjWeapTypeEnum::None },
				{ "EAscMapKitProjWeapTypeEnum::Pri_L1_Fluorine", (int64)EAscMapKitProjWeapTypeEnum::Pri_L1_Fluorine },
				{ "EAscMapKitProjWeapTypeEnum::Pri_L2_Chlorine", (int64)EAscMapKitProjWeapTypeEnum::Pri_L2_Chlorine },
				{ "EAscMapKitProjWeapTypeEnum::Pri_L3_Bromine", (int64)EAscMapKitProjWeapTypeEnum::Pri_L3_Bromine },
				{ "EAscMapKitProjWeapTypeEnum::Pri_L4_Iodine", (int64)EAscMapKitProjWeapTypeEnum::Pri_L4_Iodine },
				{ "EAscMapKitProjWeapTypeEnum::Pri_L5_Astatine", (int64)EAscMapKitProjWeapTypeEnum::Pri_L5_Astatine },
				{ "EAscMapKitProjWeapTypeEnum::Pri_L6_Volatine", (int64)EAscMapKitProjWeapTypeEnum::Pri_L6_Volatine },
				{ "EAscMapKitProjWeapTypeEnum::Pri_Shred", (int64)EAscMapKitProjWeapTypeEnum::Pri_Shred },
				{ "EAscMapKitProjWeapTypeEnum::Pri_Mech", (int64)EAscMapKitProjWeapTypeEnum::Pri_Mech },
				{ "EAscMapKitProjWeapTypeEnum::Pri_Tox", (int64)EAscMapKitProjWeapTypeEnum::Pri_Tox },
				{ "EAscMapKitProjWeapTypeEnum::Pri_Coil", (int64)EAscMapKitProjWeapTypeEnum::Pri_Coil },
				{ "EAscMapKitProjWeapTypeEnum::Pri_Phase", (int64)EAscMapKitProjWeapTypeEnum::Pri_Phase },
				{ "EAscMapKitProjWeapTypeEnum::Pri_Hydra", (int64)EAscMapKitProjWeapTypeEnum::Pri_Hydra },
				{ "EAscMapKitProjWeapTypeEnum::Pri_Neutron", (int64)EAscMapKitProjWeapTypeEnum::Pri_Neutron },
				{ "EAscMapKitProjWeapTypeEnum::Pri_Hammer", (int64)EAscMapKitProjWeapTypeEnum::Pri_Hammer },
				{ "EAscMapKitProjWeapTypeEnum::Sec_Assault", (int64)EAscMapKitProjWeapTypeEnum::Sec_Assault },
				{ "EAscMapKitProjWeapTypeEnum::Sec_Prowler", (int64)EAscMapKitProjWeapTypeEnum::Sec_Prowler },
				{ "EAscMapKitProjWeapTypeEnum::Sec_RNA", (int64)EAscMapKitProjWeapTypeEnum::Sec_RNA },
				{ "EAscMapKitProjWeapTypeEnum::Sec_RNA_Virus", (int64)EAscMapKitProjWeapTypeEnum::Sec_RNA_Virus },
				{ "EAscMapKitProjWeapTypeEnum::Sec_Deadeye", (int64)EAscMapKitProjWeapTypeEnum::Sec_Deadeye },
				{ "EAscMapKitProjWeapTypeEnum::Sec_Vex", (int64)EAscMapKitProjWeapTypeEnum::Sec_Vex },
				{ "EAscMapKitProjWeapTypeEnum::Sec_Aftershock", (int64)EAscMapKitProjWeapTypeEnum::Sec_Aftershock },
				{ "EAscMapKitProjWeapTypeEnum::Sec_Aftershock_Mini", (int64)EAscMapKitProjWeapTypeEnum::Sec_Aftershock_Mini },
				{ "EAscMapKitProjWeapTypeEnum::Tet_Flare", (int64)EAscMapKitProjWeapTypeEnum::Tet_Flare },
				{ "EAscMapKitProjWeapTypeEnum::Tet_Radial", (int64)EAscMapKitProjWeapTypeEnum::Tet_Radial },
				{ "EAscMapKitProjWeapTypeEnum::Tet_Howler", (int64)EAscMapKitProjWeapTypeEnum::Tet_Howler },
				{ "EAscMapKitProjWeapTypeEnum::Tet_Bio", (int64)EAscMapKitProjWeapTypeEnum::Tet_Bio },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Projectile/AscMapKitProjWeapTypeEnum.h" },
				{ "None.Name", "EAscMapKitProjWeapTypeEnum::None" },
				{ "Pri_Coil.Name", "EAscMapKitProjWeapTypeEnum::Pri_Coil" },
				{ "Pri_Hammer.Name", "EAscMapKitProjWeapTypeEnum::Pri_Hammer" },
				{ "Pri_Hydra.Name", "EAscMapKitProjWeapTypeEnum::Pri_Hydra" },
				{ "Pri_L1_Fluorine.Name", "EAscMapKitProjWeapTypeEnum::Pri_L1_Fluorine" },
				{ "Pri_L2_Chlorine.Name", "EAscMapKitProjWeapTypeEnum::Pri_L2_Chlorine" },
				{ "Pri_L3_Bromine.Name", "EAscMapKitProjWeapTypeEnum::Pri_L3_Bromine" },
				{ "Pri_L4_Iodine.Name", "EAscMapKitProjWeapTypeEnum::Pri_L4_Iodine" },
				{ "Pri_L5_Astatine.Name", "EAscMapKitProjWeapTypeEnum::Pri_L5_Astatine" },
				{ "Pri_L6_Volatine.Name", "EAscMapKitProjWeapTypeEnum::Pri_L6_Volatine" },
				{ "Pri_Mech.Name", "EAscMapKitProjWeapTypeEnum::Pri_Mech" },
				{ "Pri_Neutron.Name", "EAscMapKitProjWeapTypeEnum::Pri_Neutron" },
				{ "Pri_Phase.Name", "EAscMapKitProjWeapTypeEnum::Pri_Phase" },
				{ "Pri_Shred.Name", "EAscMapKitProjWeapTypeEnum::Pri_Shred" },
				{ "Pri_Tox.Name", "EAscMapKitProjWeapTypeEnum::Pri_Tox" },
				{ "Sec_Aftershock.Name", "EAscMapKitProjWeapTypeEnum::Sec_Aftershock" },
				{ "Sec_Aftershock_Mini.Name", "EAscMapKitProjWeapTypeEnum::Sec_Aftershock_Mini" },
				{ "Sec_Assault.Name", "EAscMapKitProjWeapTypeEnum::Sec_Assault" },
				{ "Sec_Deadeye.Name", "EAscMapKitProjWeapTypeEnum::Sec_Deadeye" },
				{ "Sec_Prowler.Name", "EAscMapKitProjWeapTypeEnum::Sec_Prowler" },
				{ "Sec_RNA.Name", "EAscMapKitProjWeapTypeEnum::Sec_RNA" },
				{ "Sec_RNA_Virus.Name", "EAscMapKitProjWeapTypeEnum::Sec_RNA_Virus" },
				{ "Sec_Vex.Name", "EAscMapKitProjWeapTypeEnum::Sec_Vex" },
				{ "Tet_Bio.Name", "EAscMapKitProjWeapTypeEnum::Tet_Bio" },
				{ "Tet_Flare.Name", "EAscMapKitProjWeapTypeEnum::Tet_Flare" },
				{ "Tet_Howler.Name", "EAscMapKitProjWeapTypeEnum::Tet_Howler" },
				{ "Tet_Radial.Name", "EAscMapKitProjWeapTypeEnum::Tet_Radial" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AscMapKit,
				nullptr,
				"EAscMapKitProjWeapTypeEnum",
				"EAscMapKitProjWeapTypeEnum",
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
