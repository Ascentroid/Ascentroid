#pragma once

// Ascentroid
#include "AscMapKit/Public/Data/AscEditorToolDataAssetStruct.h"
#include "AscMapKit/Public/Fan/AscMapKitFanTypeEnum.h"

// Generated
#include "AscFanDataAssetStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscFanDataAssetStruct : public FAscEditorToolDataAssetStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	EAscMapKitFanTypeEnum FanType;

	UPROPERTY(EditAnywhere)
	bool bForceUseStaticMesh;
	
	UPROPERTY(EditAnywhere)
	bool bHasDestructibleSupport;

	UPROPERTY(EditAnywhere)
	UAnimSequence *AnimationSequence;

	UPROPERTY(EditAnywhere)
	USkeletalMesh *SkeletalMesh;

	UPROPERTY(EditAnywhere)
	UStaticMesh *StaticMesh;

	UPROPERTY(EditAnywhere)
	UStaticMesh *StaticMeshDestroyed;

	UPROPERTY(EditAnywhere)
	UClass *DestructibleAnimationBlueprint;

	UPROPERTY(EditAnywhere)
	bool bHasParticleSupport;

	UPROPERTY(EditAnywhere)
	UParticleSystem *Particle;
	//UNiagaraSystem *Particle; // @UE5

	UPROPERTY(EditAnywhere)
	FVector ParticleRelativeLocationOffset;

	UPROPERTY(EditAnywhere)
	FRotator ParticleRelativeRotationOffset;

	UPROPERTY(EditAnywhere)
	float PlayAmbientSoundCuePitch;
};