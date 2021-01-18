// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Trigger/AscMapKitTriggerPropertiesInvisibleCollisionTypeEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum() {}
// Cross Module References
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
	static UEnum* EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum, Z_Construct_UPackage__Script_AscMapKit(), TEXT("EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum"));
		}
		return Singleton;
	}
	template<> ASCMAPKIT_API UEnum* StaticEnum<EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum>()
	{
		return EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum(EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum_StaticEnum, TEXT("/Script/AscMapKit"), TEXT("EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum_Hash() { return 367285229U; }
	UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum"), 0, Get_Z_Construct_UEnum_AscMapKit_EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum::Box", (int64)EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum::Box },
				{ "EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum::StaticMesh", (int64)EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum::StaticMesh },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Box.Name", "EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum::Box" },
				{ "ModuleRelativePath", "Public/Trigger/AscMapKitTriggerPropertiesInvisibleCollisionTypeEnum.h" },
				{ "StaticMesh.Name", "EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum::StaticMesh" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AscMapKit,
				nullptr,
				"EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum",
				"EAscMapKitTriggerPropertiesInvisibleCollisionTypeEnum",
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
