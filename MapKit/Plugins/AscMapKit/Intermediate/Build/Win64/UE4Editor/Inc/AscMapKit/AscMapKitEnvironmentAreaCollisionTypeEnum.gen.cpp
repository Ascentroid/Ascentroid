// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaCollisionTypeEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnvironmentAreaCollisionTypeEnum() {}
// Cross Module References
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitEnvironmentAreaCollisionTypeEnum();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
	static UEnum* EAscMapKitEnvironmentAreaCollisionTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AscMapKit_EAscMapKitEnvironmentAreaCollisionTypeEnum, Z_Construct_UPackage__Script_AscMapKit(), TEXT("EAscMapKitEnvironmentAreaCollisionTypeEnum"));
		}
		return Singleton;
	}
	template<> ASCMAPKIT_API UEnum* StaticEnum<EAscMapKitEnvironmentAreaCollisionTypeEnum>()
	{
		return EAscMapKitEnvironmentAreaCollisionTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAscMapKitEnvironmentAreaCollisionTypeEnum(EAscMapKitEnvironmentAreaCollisionTypeEnum_StaticEnum, TEXT("/Script/AscMapKit"), TEXT("EAscMapKitEnvironmentAreaCollisionTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AscMapKit_EAscMapKitEnvironmentAreaCollisionTypeEnum_Hash() { return 2043827116U; }
	UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitEnvironmentAreaCollisionTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAscMapKitEnvironmentAreaCollisionTypeEnum"), 0, Get_Z_Construct_UEnum_AscMapKit_EAscMapKitEnvironmentAreaCollisionTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAscMapKitEnvironmentAreaCollisionTypeEnum::Box", (int64)EAscMapKitEnvironmentAreaCollisionTypeEnum::Box },
				{ "EAscMapKitEnvironmentAreaCollisionTypeEnum::StaticMesh", (int64)EAscMapKitEnvironmentAreaCollisionTypeEnum::StaticMesh },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Box.Name", "EAscMapKitEnvironmentAreaCollisionTypeEnum::Box" },
				{ "ModuleRelativePath", "Public/Area/AscMapKitEnvironmentAreaCollisionTypeEnum.h" },
				{ "StaticMesh.Name", "EAscMapKitEnvironmentAreaCollisionTypeEnum::StaticMesh" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AscMapKit,
				nullptr,
				"EAscMapKitEnvironmentAreaCollisionTypeEnum",
				"EAscMapKitEnvironmentAreaCollisionTypeEnum",
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
