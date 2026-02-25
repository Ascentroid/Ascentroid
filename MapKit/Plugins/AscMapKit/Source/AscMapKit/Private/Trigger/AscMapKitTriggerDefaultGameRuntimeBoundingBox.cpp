#include "AscMapKit/Public/Trigger/AscMapKitTriggerDefaultGameRuntimeBoundingBox.h"

UAscMapKitTriggerDefaultGameRuntimeBoundingBox::UAscMapKitTriggerDefaultGameRuntimeBoundingBox()
{
    LineThickness = 30.f;
    bHiddenInGame = true;
}

#if WITH_EDITOR
void UAscMapKitTriggerDefaultGameRuntimeBoundingBox::EditorUpdateTriggerType(const EAscMapKitTriggerTypeEnum &TriggerType)
{
    if (GetScaledBoxExtent().IsZero() || TriggerType != EAscMapKitTriggerTypeEnum::Invisible)
    {
        auto Extent = FVector::ZeroVector;

        if (TriggerType == EAscMapKitTriggerTypeEnum::Invisible)
            Extent = FVector(1000.f, 1000.f, 1000.f);

        SetBoxExtent(Extent);
    }
}
#endif