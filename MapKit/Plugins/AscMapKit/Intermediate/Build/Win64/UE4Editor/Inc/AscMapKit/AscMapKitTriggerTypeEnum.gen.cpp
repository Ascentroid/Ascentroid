// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerTypeEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitTriggerTypeEnum() {}
// Cross Module References
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerTypeEnum();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
	static UEnum* EAscMapKitTriggerTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerTypeEnum, Z_Construct_UPackage__Script_AscMapKit(), TEXT("EAscMapKitTriggerTypeEnum"));
		}
		return Singleton;
	}
	template<> ASCMAPKIT_API UEnum* StaticEnum<EAscMapKitTriggerTypeEnum>()
	{
		return EAscMapKitTriggerTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAscMapKitTriggerTypeEnum(EAscMapKitTriggerTypeEnum_StaticEnum, TEXT("/Script/AscMapKit"), TEXT("EAscMapKitTriggerTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerTypeEnum_Hash() { return 3207530584U; }
	UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAscMapKitTriggerTypeEnum"), 0, Get_Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAscMapKitTriggerTypeEnum::PleaseSelect", (int64)EAscMapKitTriggerTypeEnum::PleaseSelect },
				{ "EAscMapKitTriggerTypeEnum::Invisible", (int64)EAscMapKitTriggerTypeEnum::Invisible },
				{ "EAscMapKitTriggerTypeEnum::Basic001", (int64)EAscMapKitTriggerTypeEnum::Basic001 },
				{ "EAscMapKitTriggerTypeEnum::Custom", (int64)EAscMapKitTriggerTypeEnum::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Basic001.Name", "EAscMapKitTriggerTypeEnum::Basic001" },
				{ "Custom.Name", "EAscMapKitTriggerTypeEnum::Custom" },
				{ "Invisible.Name", "EAscMapKitTriggerTypeEnum::Invisible" },
				{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerTypeEnum.h" },
				{ "PleaseSelect.Name", "EAscMapKitTriggerTypeEnum::PleaseSelect" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AscMapKit,
				nullptr,
				"EAscMapKitTriggerTypeEnum",
				"EAscMapKitTriggerTypeEnum",
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
