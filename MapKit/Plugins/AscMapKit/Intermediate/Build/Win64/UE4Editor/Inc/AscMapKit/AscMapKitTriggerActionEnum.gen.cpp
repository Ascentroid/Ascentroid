// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerActionEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitTriggerActionEnum() {}
// Cross Module References
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerActionEnum();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
	static UEnum* EAscMapKitTriggerActionEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerActionEnum, Z_Construct_UPackage__Script_AscMapKit(), TEXT("EAscMapKitTriggerActionEnum"));
		}
		return Singleton;
	}
	template<> ASCMAPKIT_API UEnum* StaticEnum<EAscMapKitTriggerActionEnum>()
	{
		return EAscMapKitTriggerActionEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAscMapKitTriggerActionEnum(EAscMapKitTriggerActionEnum_StaticEnum, TEXT("/Script/AscMapKit"), TEXT("EAscMapKitTriggerActionEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerActionEnum_Hash() { return 2046838480U; }
	UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerActionEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAscMapKitTriggerActionEnum"), 0, Get_Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerActionEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAscMapKitTriggerActionEnum::Unknown", (int64)EAscMapKitTriggerActionEnum::Unknown },
				{ "EAscMapKitTriggerActionEnum::Execute", (int64)EAscMapKitTriggerActionEnum::Execute },
				{ "EAscMapKitTriggerActionEnum::Inactive", (int64)EAscMapKitTriggerActionEnum::Inactive },
				{ "EAscMapKitTriggerActionEnum::UnlockDoor", (int64)EAscMapKitTriggerActionEnum::UnlockDoor },
				{ "EAscMapKitTriggerActionEnum::LockDoor", (int64)EAscMapKitTriggerActionEnum::LockDoor },
				{ "EAscMapKitTriggerActionEnum::OpenDoor", (int64)EAscMapKitTriggerActionEnum::OpenDoor },
				{ "EAscMapKitTriggerActionEnum::CloseDoor", (int64)EAscMapKitTriggerActionEnum::CloseDoor },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CloseDoor.Name", "EAscMapKitTriggerActionEnum::CloseDoor" },
				{ "Execute.Name", "EAscMapKitTriggerActionEnum::Execute" },
				{ "Inactive.Name", "EAscMapKitTriggerActionEnum::Inactive" },
				{ "LockDoor.Name", "EAscMapKitTriggerActionEnum::LockDoor" },
				{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerActionEnum.h" },
				{ "OpenDoor.Name", "EAscMapKitTriggerActionEnum::OpenDoor" },
				{ "Unknown.Name", "EAscMapKitTriggerActionEnum::Unknown" },
				{ "UnlockDoor.Name", "EAscMapKitTriggerActionEnum::UnlockDoor" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AscMapKit,
				nullptr,
				"EAscMapKitTriggerActionEnum",
				"EAscMapKitTriggerActionEnum",
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
