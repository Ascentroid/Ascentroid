// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AscMapKit/Public/Enemy/AscMapKitEnemyDefaultGameRuntimeBoundingBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAscMapKitEnemyDefaultGameRuntimeBoundingBox() {}
// Cross Module References
	ASCMAPKIT_API UClass* Z_Construct_UClass_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_NoRegister();
	ASCMAPKIT_API UClass* Z_Construct_UClass_UAscMapKitEnemyDefaultGameRuntimeBoundingBox();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_AscMapKit();
	ASCMAPKIT_API UFunction* Z_Construct_UFunction_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_EditorUpdateEnemyType();
	ASCMAPKIT_API UEnum* Z_Construct_UEnum_AscMapKit_EAscMapKitEnemyTypeEnum();
// End Cross Module References
	void UAscMapKitEnemyDefaultGameRuntimeBoundingBox::StaticRegisterNativesUAscMapKitEnemyDefaultGameRuntimeBoundingBox()
	{
#if WITH_EDITOR
		UClass* Class = UAscMapKitEnemyDefaultGameRuntimeBoundingBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EditorUpdateEnemyType", &UAscMapKitEnemyDefaultGameRuntimeBoundingBox::execEditorUpdateEnemyType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_EditorUpdateEnemyType_Statics
	{
		struct AscMapKitEnemyDefaultGameRuntimeBoundingBox_eventEditorUpdateEnemyType_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_EditorUpdateEnemyType_Statics::NewProp_EnemyType = { "EnemyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AscMapKitEnemyDefaultGameRuntimeBoundingBox_eventEditorUpdateEnemyType_Parms, EnemyType), Z_Construct_UEnum_AscMapKit_EAscMapKitEnemyTypeEnum, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_EditorUpdateEnemyType_Statics::NewProp_EnemyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_EditorUpdateEnemyType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_EditorUpdateEnemyType_Statics::NewProp_EnemyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_EditorUpdateEnemyType_Statics::NewProp_EnemyType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_EditorUpdateEnemyType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyDefaultGameRuntimeBoundingBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_EditorUpdateEnemyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAscMapKitEnemyDefaultGameRuntimeBoundingBox, nullptr, "EditorUpdateEnemyType", nullptr, nullptr, sizeof(AscMapKitEnemyDefaultGameRuntimeBoundingBox_eventEditorUpdateEnemyType_Parms), Z_Construct_UFunction_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_EditorUpdateEnemyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_EditorUpdateEnemyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_EditorUpdateEnemyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_EditorUpdateEnemyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_EditorUpdateEnemyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_EditorUpdateEnemyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	UClass* Z_Construct_UClass_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_NoRegister()
	{
		return UAscMapKitEnemyDefaultGameRuntimeBoundingBox::StaticClass();
	}
	struct Z_Construct_UClass_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AscMapKit,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_EditorUpdateEnemyType, "EditorUpdateEnemyType" }, // 3619477867
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
		{ "IncludePath", "Enemy/AscMapKitEnemyDefaultGameRuntimeBoundingBox.h" },
		{ "ModuleRelativePath", "Public/Enemy/AscMapKitEnemyDefaultGameRuntimeBoundingBox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAscMapKitEnemyDefaultGameRuntimeBoundingBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_Statics::ClassParams = {
		&UAscMapKitEnemyDefaultGameRuntimeBoundingBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAscMapKitEnemyDefaultGameRuntimeBoundingBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAscMapKitEnemyDefaultGameRuntimeBoundingBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAscMapKitEnemyDefaultGameRuntimeBoundingBox, 807441464);
	template<> ASCMAPKIT_API UClass* StaticClass<UAscMapKitEnemyDefaultGameRuntimeBoundingBox>()
	{
		return UAscMapKitEnemyDefaultGameRuntimeBoundingBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAscMapKitEnemyDefaultGameRuntimeBoundingBox(Z_Construct_UClass_UAscMapKitEnemyDefaultGameRuntimeBoundingBox, &UAscMapKitEnemyDefaultGameRuntimeBoundingBox::StaticClass, TEXT("/Script/AscMapKit"), TEXT("UAscMapKitEnemyDefaultGameRuntimeBoundingBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAscMapKitEnemyDefaultGameRuntimeBoundingBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
