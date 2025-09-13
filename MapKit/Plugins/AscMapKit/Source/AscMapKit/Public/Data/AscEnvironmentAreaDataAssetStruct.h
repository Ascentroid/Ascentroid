#pragma once

// UE
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"

// Ascentroid
#include "AscMapKit/Public/Area/AscMapKitEnvironmentAreaTypeEnum.h"
#include "AscMapKit/Public/Data/AscEditorToolDataAssetStruct.h"

// Generated
#include "AscEnvironmentAreaDataAssetStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscEnvironmentAreaDataAssetStruct : public FAscEditorToolDataAssetStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	EAscMapKitEnvironmentAreaTypeEnum EnvironmentAreaType;

	UPROPERTY(EditAnywhere)
	UMaterialInstanceConstant *EditorWorldDefaultSurfaceMaterial;

	UPROPERTY(EditAnywhere)
	UMaterialInstanceConstant *EditorWorldDefaultFogMaterial;

	UPROPERTY(EditAnywhere)
	UTexture2D *EditorWorldSprite;
};