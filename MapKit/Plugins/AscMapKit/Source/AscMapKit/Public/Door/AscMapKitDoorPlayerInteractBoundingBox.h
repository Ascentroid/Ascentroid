#pragma once

// UE
#include "Runtime/Engine/Classes/Components/BoxComponent.h"

// Generated
#include "AscMapKitDoorPlayerInteractBoundingBox.generated.h"

UCLASS(Blueprintable)
class ASCMAPKIT_API UAscMapKitDoorPlayerInteractBoundingBox : public UBoxComponent
{
    GENERATED_BODY()

public:
    UAscMapKitDoorPlayerInteractBoundingBox();

//#if WITH_EDITOR
    //UFUNCTION()
    //void EditorUpdateEnemyType(EAscMapKitEnemyTypeEnum EnemyType);
//#endif
};