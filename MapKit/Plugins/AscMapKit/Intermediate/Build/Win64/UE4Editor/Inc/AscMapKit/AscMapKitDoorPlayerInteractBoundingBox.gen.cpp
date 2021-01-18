// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Door/AscMapKitDoorPlayerInteractBoundingBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitDoorPlayerInteractBoundingBox() {}
// Cross Module References
	ASCMAPKIT_API UClass* Z_Construct_UClass_UAscMapKitDoorPlayerInteractBoundingBox_NoRegister();
	ASCMAPKIT_API UClass* Z_Construct_UClass_UAscMapKitDoorPlayerInteractBoundingBox();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
// End Cross Module References
	void UAscMapKitDoorPlayerInteractBoundingBox::StaticRegisterNativesUAscMapKitDoorPlayerInteractBoundingBox()
	{
	}
	UClass* Z_Construct_UClass_UAscMapKitDoorPlayerInteractBoundingBox_NoRegister()
	{
		return UAscMapKitDoorPlayerInteractBoundingBox::StaticClass();
	}
	struct Z_Construct_UClass_UAscMapKitDoorPlayerInteractBoundingBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAscMapKitDoorPlayerInteractBoundingBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitDoorPlayerInteractBoundingBox_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
		{ "IncludePath", "Door/AscMapKitDoorPlayerInteractBoundingBox.h" },
		{ "ModuleRelativePath", "Public/Door/AscMapKitDoorPlayerInteractBoundingBox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAscMapKitDoorPlayerInteractBoundingBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAscMapKitDoorPlayerInteractBoundingBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAscMapKitDoorPlayerInteractBoundingBox_Statics::ClassParams = {
		&UAscMapKitDoorPlayerInteractBoundingBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAscMapKitDoorPlayerInteractBoundingBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitDoorPlayerInteractBoundingBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAscMapKitDoorPlayerInteractBoundingBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAscMapKitDoorPlayerInteractBoundingBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAscMapKitDoorPlayerInteractBoundingBox, 843084453);
	template<> ASCMAPKIT_API UClass* StaticClass<UAscMapKitDoorPlayerInteractBoundingBox>()
	{
		return UAscMapKitDoorPlayerInteractBoundingBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAscMapKitDoorPlayerInteractBoundingBox(Z_Construct_UClass_UAscMapKitDoorPlayerInteractBoundingBox, &UAscMapKitDoorPlayerInteractBoundingBox::StaticClass, TEXT("/Script/AscMapKit"), TEXT("UAscMapKitDoorPlayerInteractBoundingBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAscMapKitDoorPlayerInteractBoundingBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
