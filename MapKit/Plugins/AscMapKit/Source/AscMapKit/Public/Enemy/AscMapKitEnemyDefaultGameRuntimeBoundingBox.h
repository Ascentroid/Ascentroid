#pragma once

// UE4
#include "Runtime/Engine/Classes/Components/BoxComponent.h"

// Ascentroid
#include "AscMapKit/Public/Enemy/AscMapKitEnemyTypeEnum.h"

// Generated
#include "AscMapKitEnemyDefaultGameRuntimeBoundingBox.generated.h"

UCLASS()
class ASCMAPKIT_API UAscMapKitEnemyDefaultGameRuntimeBoundingBox : public UBoxComponent
{
    GENERATED_BODY()

public:
    UAscMapKitEnemyDefaultGameRuntimeBoundingBox();

#if WITH_EDITOR
    UFUNCTION()
    void EditorUpdateEnemyType(EAscMapKitEnemyTypeEnum EnemyType);
#endif
};