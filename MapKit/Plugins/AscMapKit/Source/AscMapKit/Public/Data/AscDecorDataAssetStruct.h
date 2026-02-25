#pragma once

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitMaterialEmitColorTypeEnum.h"
#include "AscMapKit/Public/Data/AscEditorToolDataAssetStruct.h"
#include "AscMapKit/Public/Decor/AscMapKitDecorTypeEnum.h"

// Generated
#include "AscDecorDataAssetStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscDecorDataAssetStruct : public FAscEditorToolDataAssetStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	EAscMapKitDecorTypeEnum DecorType;

	UPROPERTY(EditAnywhere)
	UClass *DestructibleAnimationBlueprint;

	UPROPERTY(EditAnywhere)
	UStaticMesh *StaticMesh;

	UPROPERTY(EditAnywhere)
	UStaticMesh *StaticMeshDestroyed;

	UPROPERTY(EditAnywhere)
	bool bHasPictureSupport;
	
	UPROPERTY(EditAnywhere)
	bool bHasDestructibleSupport;
	
	UPROPERTY(EditAnywhere)
	bool bHasLightSupport;

	UPROPERTY(EditAnywhere)
	EAscMapKitMaterialEmitColorTypeEnum DefaultLightColor;

	UPROPERTY(EditAnywhere)
	FVector LightRelativeLocationOffset;

	UPROPERTY(EditAnywhere)
	bool bHasReflectionSupport;

	UPROPERTY(EditAnywhere)
	FVector ReflectionRelativeLocationOffset;
};