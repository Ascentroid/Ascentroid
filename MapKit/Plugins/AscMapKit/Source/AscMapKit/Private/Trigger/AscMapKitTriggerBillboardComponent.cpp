#include "AscMapKit/Public/Trigger/AscMapKitTriggerBillboardComponent.h"

// UE
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

UAscMapKitTriggerBillboardComponent::UAscMapKitTriggerBillboardComponent()
{
    // todo: @reminder: update this as new triggers are created
    const ConstructorHelpers::FObjectFinder<UTexture2D> Basic001TextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Trigger/T_Editor_Sprites_Trigger_001.T_Editor_Sprites_Trigger_001'"));

    if (Basic001TextureRef.Succeeded())
        Basic001Texture = Basic001TextureRef.Object;
}

#if WITH_EDITOR
void UAscMapKitTriggerBillboardComponent::EditorUpdateTriggerType(const EAscMapKitTriggerTypeEnum TriggerType)
{
    SetSprite(nullptr);

    // todo: @reminder: update this as new enemies are created
    switch (TriggerType)
    {
        case EAscMapKitTriggerTypeEnum::Basic001:
            SetSprite(Basic001Texture);
            break;
    }

    CurrentTexture = Sprite;
}
#endif