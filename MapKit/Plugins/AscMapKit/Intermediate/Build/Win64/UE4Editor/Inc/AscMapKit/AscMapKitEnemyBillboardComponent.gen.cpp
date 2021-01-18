// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyBillboardComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnemyBillboardComponent() {}
// Cross Module References
	ASCMAPKIT_API UClass* Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_NoRegister();
	ASCMAPKIT_API UClass* Z_Construct_UClass_UAscMapKitEnemyBillboardComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UFunction* Z_Construct_UFunction_UAscMapKitEnemyBillboardComponent_EditorUpdateEnemyType();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitEnemyTypeEnum();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UAscMapKitEnemyBillboardComponent::StaticRegisterNativesUAscMapKitEnemyBillboardComponent()
	{
#if WITH_EDITOR
		UClass* Class = UAscMapKitEnemyBillboardComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EditorUpdateEnemyType", &UAscMapKitEnemyBillboardComponent::execEditorUpdateEnemyType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAscMapKitEnemyBillboardComponent_EditorUpdateEnemyType_Statics
	{
		struct AscMapKitEnemyBillboardComponent_eventEditorUpdateEnemyType_Parms
		{
			EAscMapKitEnemyTypeEnum EnemyType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnemyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnemyType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAscMapKitEnemyBillboardComponent_EditorUpdateEnemyType_Statics::NewProp_EnemyType = { "EnemyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AscMapKitEnemyBillboardComponent_eventEditorUpdateEnemyType_Parms, EnemyType), Z_Construct_UEnum_AscMapKit_EAscMapKitEnemyTypeEnum, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAscMapKitEnemyBillboardComponent_EditorUpdateEnemyType_Statics::NewProp_EnemyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAscMapKitEnemyBillboardComponent_EditorUpdateEnemyType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAscMapKitEnemyBillboardComponent_EditorUpdateEnemyType_Statics::NewProp_EnemyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAscMapKitEnemyBillboardComponent_EditorUpdateEnemyType_Statics::NewProp_EnemyType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAscMapKitEnemyBillboardComponent_EditorUpdateEnemyType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAscMapKitEnemyBillboardComponent_EditorUpdateEnemyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAscMapKitEnemyBillboardComponent, nullptr, "EditorUpdateEnemyType", nullptr, nullptr, sizeof(AscMapKitEnemyBillboardComponent_eventEditorUpdateEnemyType_Parms), Z_Construct_UFunction_UAscMapKitEnemyBillboardComponent_EditorUpdateEnemyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAscMapKitEnemyBillboardComponent_EditorUpdateEnemyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAscMapKitEnemyBillboardComponent_EditorUpdateEnemyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAscMapKitEnemyBillboardComponent_EditorUpdateEnemyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAscMapKitEnemyBillboardComponent_EditorUpdateEnemyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAscMapKitEnemyBillboardComponent_EditorUpdateEnemyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	UClass* Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_NoRegister()
	{
		return UAscMapKitEnemyBillboardComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MachineServasTurretTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MachineServasTurretTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MachineSecureGageTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MachineSecureGageTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MachineSarkTurretTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MachineSarkTurretTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MachineGeminiTurretTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MachineGeminiTurretTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MachineAssaultTankTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MachineAssaultTankTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MachineAssaultCacheTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MachineAssaultCacheTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlienGrawnTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlienGrawnTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlienCylonTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlienCylonTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBillboardComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAscMapKitEnemyBillboardComponent_EditorUpdateEnemyType, "EditorUpdateEnemyType" }, // 3642273445
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Physics Collision Lighting Mesh PhysicsVolume Mobility Trigger" },
		{ "IncludePath", "Enemy/AscMapKitEnemyBillboardComponent.h" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyBillboardComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineServasTurretTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineServasTurretTexture = { "MachineServasTurretTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitEnemyBillboardComponent, MachineServasTurretTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineServasTurretTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineServasTurretTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineSecureGageTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineSecureGageTexture = { "MachineSecureGageTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitEnemyBillboardComponent, MachineSecureGageTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineSecureGageTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineSecureGageTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineSarkTurretTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineSarkTurretTexture = { "MachineSarkTurretTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitEnemyBillboardComponent, MachineSarkTurretTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineSarkTurretTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineSarkTurretTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineGeminiTurretTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineGeminiTurretTexture = { "MachineGeminiTurretTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitEnemyBillboardComponent, MachineGeminiTurretTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineGeminiTurretTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineGeminiTurretTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineAssaultTankTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineAssaultTankTexture = { "MachineAssaultTankTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitEnemyBillboardComponent, MachineAssaultTankTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineAssaultTankTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineAssaultTankTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineAssaultCacheTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineAssaultCacheTexture = { "MachineAssaultCacheTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitEnemyBillboardComponent, MachineAssaultCacheTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineAssaultCacheTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineAssaultCacheTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_AlienGrawnTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_AlienGrawnTexture = { "AlienGrawnTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitEnemyBillboardComponent, AlienGrawnTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_AlienGrawnTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_AlienGrawnTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_AlienCylonTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_AlienCylonTexture = { "AlienCylonTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitEnemyBillboardComponent, AlienCylonTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_AlienCylonTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_AlienCylonTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_CurrentTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyBillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_CurrentTexture = { "CurrentTexture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAscMapKitEnemyBillboardComponent, CurrentTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_CurrentTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_CurrentTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineServasTurretTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineSecureGageTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineSarkTurretTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineGeminiTurretTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineAssaultTankTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_MachineAssaultCacheTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_AlienGrawnTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_AlienCylonTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::NewProp_CurrentTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAscMapKitEnemyBillboardComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::ClassParams = {
		&UAscMapKitEnemyBillboardComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::PropPointers),
		0,
		0x00B030A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAscMapKitEnemyBillboardComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAscMapKitEnemyBillboardComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAscMapKitEnemyBillboardComponent, 2038966490);
	template<> ASCMAPKIT_API UClass* StaticClass<UAscMapKitEnemyBillboardComponent>()
	{
		return UAscMapKitEnemyBillboardComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAscMapKitEnemyBillboardComponent(Z_Construct_UClass_UAscMapKitEnemyBillboardComponent, &UAscMapKitEnemyBillboardComponent::StaticClass, TEXT("/Script/AscMapKit"), TEXT("UAscMapKitEnemyBillboardComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAscMapKitEnemyBillboardComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
