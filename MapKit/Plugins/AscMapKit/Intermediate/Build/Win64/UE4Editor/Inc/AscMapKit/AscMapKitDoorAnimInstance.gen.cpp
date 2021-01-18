// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Door/AscMapKitDoorAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitDoorAnimInstance() {}
// Cross Module References
	ASCMAPKIT_API UClass* Z_Construct_UClass_UAscMapKitDoorAnimInstance_NoRegister();
	ASCMAPKIT_API UClass* Z_Construct_UClass_UAscMapKitDoorAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
	void UAscMapKitDoorAnimInstance::StaticRegisterNativesUAscMapKitDoorAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UAscMapKitDoorAnimInstance_NoRegister()
	{
		return UAscMapKitDoorAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAscMapKitDoorAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOpenDoor_MetaData[];
#endif
		static void NewProp_bOpenDoor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOpenDoor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAscMapKitDoorAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitDoorAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Door/AscMapKitDoorAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitDoorAnimInstance_Statics::NewProp_bOpenDoor_MetaData[] = {
		{ "Category", "AscMapKitDoorAnimInstance" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAscMapKitDoorAnimInstance_Statics::NewProp_bOpenDoor_SetBit(void* Obj)
	{
		((UAscMapKitDoorAnimInstance*)Obj)->bOpenDoor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAscMapKitDoorAnimInstance_Statics::NewProp_bOpenDoor = { "bOpenDoor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAscMapKitDoorAnimInstance), &Z_Construct_UClass_UAscMapKitDoorAnimInstance_Statics::NewProp_bOpenDoor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitDoorAnimInstance_Statics::NewProp_bOpenDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitDoorAnimInstance_Statics::NewProp_bOpenDoor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAscMapKitDoorAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitDoorAnimInstance_Statics::NewProp_bOpenDoor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAscMapKitDoorAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAscMapKitDoorAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAscMapKitDoorAnimInstance_Statics::ClassParams = {
		&UAscMapKitDoorAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAscMapKitDoorAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitDoorAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAscMapKitDoorAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitDoorAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAscMapKitDoorAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAscMapKitDoorAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAscMapKitDoorAnimInstance, 3427063003);
	template<> ASCMAPKIT_API UClass* StaticClass<UAscMapKitDoorAnimInstance>()
	{
		return UAscMapKitDoorAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAscMapKitDoorAnimInstance(Z_Construct_UClass_UAscMapKitDoorAnimInstance, &UAscMapKitDoorAnimInstance::StaticClass, TEXT("/Script/AscMapKit"), TEXT("UAscMapKitDoorAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAscMapKitDoorAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
