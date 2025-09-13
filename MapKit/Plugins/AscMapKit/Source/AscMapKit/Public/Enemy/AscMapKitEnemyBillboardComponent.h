#pragma once

// UE
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"

// Ascentroid
#include "AscMapKit/Public/Enemy/AscMapKitEnemyTypeEnum.h"

// Generated
#include "AscMapKitEnemyBillboardComponent.generated.h"

UCLASS(Blueprintable)
class ASCMAPKIT_API UAscMapKitEnemyBillboardComponent : public UBillboardComponent
{
    GENERATED_BODY()

public:
    UAscMapKitEnemyBillboardComponent();

    UPROPERTY()
    UTexture2D *CurrentTexture;

#if WITH_EDITOR
    UFUNCTION()
    void EditorUpdateEnemyType(EAscMapKitEnemyTypeEnum EnemyType);
#endif

private:
    UPROPERTY()
    UTexture2D *AlienCylonTexture;

    UPROPERTY()
    UTexture2D *AlienGrawnTexture;

    UPROPERTY()
    UTexture2D *MachineAssaultCacheTexture;

    UPROPERTY()
    UTexture2D *MachineAssaultTankTexture;

    UPROPERTY()
    UTexture2D *MachineGeminiTurretTexture;

    UPROPERTY()
    UTexture2D *MachineSarkTurretTexture;

    UPROPERTY()
    UTexture2D *MachineSecureGageTexture;

    UPROPERTY()
    UTexture2D *MachineServasTurretTexture;
};