#pragma once

// UE
#include "Runtime/Engine/Classes/Components/BoxComponent.h"

// Ascentroid
#include "AscMapKit/Public/Trigger/AscMapKitTriggerTypeEnum.h"

// Generated
#include "AscMapKitTriggerDefaultGameRuntimeBoundingBox.generated.h"

UCLASS()
class ASCMAPKIT_API UAscMapKitTriggerDefaultGameRuntimeBoundingBox : public UBoxComponent
{
    GENERATED_BODY()

public:
    UAscMapKitTriggerDefaultGameRuntimeBoundingBox();

#if WITH_EDITOR
    UFUNCTION()
    void EditorUpdateTriggerType(EAscMapKitTriggerTypeEnum TriggerType);
#endif
};