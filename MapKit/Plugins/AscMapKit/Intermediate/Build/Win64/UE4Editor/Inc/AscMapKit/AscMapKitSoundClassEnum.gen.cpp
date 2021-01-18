// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Core/Constant/AscMapKitSoundClassEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitSoundClassEnum() {}
// Cross Module References
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
	static UEnum* EAscMapKitSoundClassEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum, Z_Construct_UPackage__Script_AscMapKit(), TEXT("EAscMapKitSoundClassEnum"));
		}
		return Singleton;
	}
	template<> ASCMAPKIT_API UEnum* StaticEnum<EAscMapKitSoundClassEnum>()
	{
		return EAscMapKitSoundClassEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAscMapKitSoundClassEnum(EAscMapKitSoundClassEnum_StaticEnum, TEXT("/Script/AscMapKit"), TEXT("EAscMapKitSoundClassEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum_Hash() { return 1492670578U; }
	UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AscMapKit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAscMapKitSoundClassEnum"), 0, Get_Z_Construct_UEnum_AscMapKit_EAscMapKitSoundClassEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAscMapKitSoundClassEnum::Default", (int64)EAscMapKitSoundClassEnum::Default },
				{ "EAscMapKitSoundClassEnum::Ambient", (int64)EAscMapKitSoundClassEnum::Ambient },
				{ "EAscMapKitSoundClassEnum::Master", (int64)EAscMapKitSoundClassEnum::Master },
				{ "EAscMapKitSoundClassEnum::Music", (int64)EAscMapKitSoundClassEnum::Music },
				{ "EAscMapKitSoundClassEnum::SFX", (int64)EAscMapKitSoundClassEnum::SFX },
				{ "EAscMapKitSoundClassEnum::UI", (int64)EAscMapKitSoundClassEnum::UI },
				{ "EAscMapKitSoundClassEnum::Voice", (int64)EAscMapKitSoundClassEnum::Voice },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ambient.Name", "EAscMapKitSoundClassEnum::Ambient" },
				{ "Default.Name", "EAscMapKitSoundClassEnum::Default" },
				{ "Master.Name", "EAscMapKitSoundClassEnum::Master" },
				{ "ModuleRelativePath", "Public/Core/Constant/AscMapKitSoundClassEnum.h" },
				{ "Music.Name", "EAscMapKitSoundClassEnum::Music" },
				{ "SFX.Name", "EAscMapKitSoundClassEnum::SFX" },
				{ "UI.Name", "EAscMapKitSoundClassEnum::UI" },
				{ "Voice.Name", "EAscMapKitSoundClassEnum::Voice" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AscMapKit,
				nullptr,
				"EAscMapKitSoundClassEnum",
				"EAscMapKitSoundClassEnum",
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
