// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Door/AscMapKitDoorTypeEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitDoorTypeEnum() {}
// Cross Module References
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitDoorTypeEnum();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
	static UEnum* EAscMapKitDoorTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AscMapKit_EAscMapKitDoorTypeEnum, Z_Construct_UPackage__Script_AscMapKit(), TEXT("EAscMapKitDoorTypeEnum"));
		}
		return Singleton;
	}
	template<> ASCMAPKIT_API UEnum* StaticEnum<EAscMapKitDoorTypeEnum>()
	{
		return EAscMapKitDoorTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAscMapKitDoorTypeEnum(EAscMapKitDoorTypeEnum_StaticEnum, TEXT("/Script/AscMapKit"), TEXT("EAscMapKitDoorTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AscMapKit_EAscMapKitDoorTypeEnum_Hash() { return 3368651397U; }
	UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitDoorTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAscMapKitDoorTypeEnum"), 0, Get_Z_Construct_UEnum_AscMapKit_EAscMapKitDoorTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAscMapKitDoorTypeEnum::PleaseSelect", (int64)EAscMapKitDoorTypeEnum::PleaseSelect },
				{ "EAscMapKitDoorTypeEnum::Animated20x20mBasic001", (int64)EAscMapKitDoorTypeEnum::Animated20x20mBasic001 },
				{ "EAscMapKitDoorTypeEnum::Animated20x20mBasic002", (int64)EAscMapKitDoorTypeEnum::Animated20x20mBasic002 },
				{ "EAscMapKitDoorTypeEnum::Animated20x20mBasic003", (int64)EAscMapKitDoorTypeEnum::Animated20x20mBasic003 },
				{ "EAscMapKitDoorTypeEnum::Animated20x20mBasic004", (int64)EAscMapKitDoorTypeEnum::Animated20x20mBasic004 },
				{ "EAscMapKitDoorTypeEnum::Animated20x20mSciFiDoorsDoor1", (int64)EAscMapKitDoorTypeEnum::Animated20x20mSciFiDoorsDoor1 },
				{ "EAscMapKitDoorTypeEnum::Animated20x20mSciFiDoorsDoor2", (int64)EAscMapKitDoorTypeEnum::Animated20x20mSciFiDoorsDoor2 },
				{ "EAscMapKitDoorTypeEnum::Animated20x20mSciFiDoorsDoor4", (int64)EAscMapKitDoorTypeEnum::Animated20x20mSciFiDoorsDoor4 },
				{ "EAscMapKitDoorTypeEnum::Animated20x20mSciFiPropsDoor1", (int64)EAscMapKitDoorTypeEnum::Animated20x20mSciFiPropsDoor1 },
				{ "EAscMapKitDoorTypeEnum::Animated40x20mBasic001", (int64)EAscMapKitDoorTypeEnum::Animated40x20mBasic001 },
				{ "EAscMapKitDoorTypeEnum::Animated40x20mSciFiDoorsDoor3", (int64)EAscMapKitDoorTypeEnum::Animated40x20mSciFiDoorsDoor3 },
				{ "EAscMapKitDoorTypeEnum::Destructible20x20mBasic001", (int64)EAscMapKitDoorTypeEnum::Destructible20x20mBasic001 },
				{ "EAscMapKitDoorTypeEnum::Custom", (int64)EAscMapKitDoorTypeEnum::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Animated20x20mBasic001.Name", "EAscMapKitDoorTypeEnum::Animated20x20mBasic001" },
				{ "Animated20x20mBasic002.Name", "EAscMapKitDoorTypeEnum::Animated20x20mBasic002" },
				{ "Animated20x20mBasic003.Name", "EAscMapKitDoorTypeEnum::Animated20x20mBasic003" },
				{ "Animated20x20mBasic004.Name", "EAscMapKitDoorTypeEnum::Animated20x20mBasic004" },
				{ "Animated20x20mSciFiDoorsDoor1.Name", "EAscMapKitDoorTypeEnum::Animated20x20mSciFiDoorsDoor1" },
				{ "Animated20x20mSciFiDoorsDoor2.Name", "EAscMapKitDoorTypeEnum::Animated20x20mSciFiDoorsDoor2" },
				{ "Animated20x20mSciFiDoorsDoor4.Name", "EAscMapKitDoorTypeEnum::Animated20x20mSciFiDoorsDoor4" },
				{ "Animated20x20mSciFiPropsDoor1.Name", "EAscMapKitDoorTypeEnum::Animated20x20mSciFiPropsDoor1" },
				{ "Animated40x20mBasic001.Name", "EAscMapKitDoorTypeEnum::Animated40x20mBasic001" },
				{ "Animated40x20mSciFiDoorsDoor3.Name", "EAscMapKitDoorTypeEnum::Animated40x20mSciFiDoorsDoor3" },
				{ "Custom.Name", "EAscMapKitDoorTypeEnum::Custom" },
				{ "Destructible20x20mBasic001.Name", "EAscMapKitDoorTypeEnum::Destructible20x20mBasic001" },
				{ "ModuleRelativePath", "Public/Door/AscMapKitDoorTypeEnum.h" },
				{ "PleaseSelect.Name", "EAscMapKitDoorTypeEnum::PleaseSelect" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AscMapKit,
				nullptr,
				"EAscMapKitDoorTypeEnum",
				"EAscMapKitDoorTypeEnum",
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
