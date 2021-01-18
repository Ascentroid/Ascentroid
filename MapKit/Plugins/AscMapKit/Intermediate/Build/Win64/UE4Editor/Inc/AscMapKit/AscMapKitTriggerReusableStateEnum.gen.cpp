// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerReusableStateEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitTriggerReusableStateEnum() {}
// Cross Module References
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerReusableStateEnum();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
	static UEnum* EAscMapKitTriggerReusableStateEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerReusableStateEnum, Z_Construct_UPackage__Script_AscMapKit(), TEXT("EAscMapKitTriggerReusableStateEnum"));
		}
		return Singleton;
	}
	template<> ASCMAPKIT_API UEnum* StaticEnum<EAscMapKitTriggerReusableStateEnum>()
	{
		return EAscMapKitTriggerReusableStateEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAscMapKitTriggerReusableStateEnum(EAscMapKitTriggerReusableStateEnum_StaticEnum, TEXT("/Script/AscMapKit"), TEXT("EAscMapKitTriggerReusableStateEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerReusableStateEnum_Hash() { return 2635592296U; }
	UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerReusableStateEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAscMapKitTriggerReusableStateEnum"), 0, Get_Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerReusableStateEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAscMapKitTriggerReusableStateEnum::NotUsed", (int64)EAscMapKitTriggerReusableStateEnum::NotUsed },
				{ "EAscMapKitTriggerReusableStateEnum::Used", (int64)EAscMapKitTriggerReusableStateEnum::Used },
				{ "EAscMapKitTriggerReusableStateEnum::Inactive", (int64)EAscMapKitTriggerReusableStateEnum::Inactive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Inactive.Name", "EAscMapKitTriggerReusableStateEnum::Inactive" },
				{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerReusableStateEnum.h" },
				{ "NotUsed.Name", "EAscMapKitTriggerReusableStateEnum::NotUsed" },
				{ "Used.Name", "EAscMapKitTriggerReusableStateEnum::Used" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AscMapKit,
				nullptr,
				"EAscMapKitTriggerReusableStateEnum",
				"EAscMapKitTriggerReusableStateEnum",
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
