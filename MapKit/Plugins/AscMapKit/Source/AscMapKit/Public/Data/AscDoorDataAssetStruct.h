#pragma once

// Ascentroid
#include "AscMapKit/Public/Data/AscEditorToolDataAssetStruct.h"
#include "AscMapKit/Public/Door/AscMapKitDoorTypeEnum.h"

// Generated
#include "AscDoorDataAssetStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscDoorDataAssetStruct : public FAscEditorToolDataAssetStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	EAscMapKitDoorTypeEnum DoorType;

	UPROPERTY(EditAnywhere)
	FVector PlayerInteractBoundingBoxExtent;

	UPROPERTY(EditAnywhere)
	bool bForceUseStaticMesh;
	
	UPROPERTY(EditAnywhere)
	bool bIsDestructible;

	UPROPERTY(EditAnywhere)
	UClass *AnimationBlueprint;
	
	UPROPERTY(EditAnywhere)
	USkeletalMesh *SkeletalMesh;

	UPROPERTY(EditAnywhere)
	UStaticMesh *StaticMesh;

	UPROPERTY(EditAnywhere)
	UStaticMesh *StaticMeshDestroyed;

	UPROPERTY(EditAnywhere)
	UClass *DestructibleAnimationBlueprint;
};