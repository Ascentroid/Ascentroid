#pragma once

// UE
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"

// Ascentroid
#include "AscMapKit/Public/Trigger/AscMapKitTriggerTypeEnum.h"

// Generated
#include "AscMapKitTriggerBillboardComponent.generated.h"

UCLASS()
class ASCMAPKIT_API UAscMapKitTriggerBillboardComponent : public UBillboardComponent
{
    GENERATED_BODY()

public:
    UAscMapKitTriggerBillboardComponent();

    UPROPERTY()
    UTexture2D *CurrentTexture;

#if WITH_EDITOR
    UFUNCTION()
    void EditorUpdateTriggerType(EAscMapKitTriggerTypeEnum TriggerType);
#endif

private:
    UPROPERTY()
    UTexture2D *Basic001Texture;
};