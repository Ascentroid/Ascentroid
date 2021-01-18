#pragma once

#include "CoreMinimal.h"
#include "GameFramework/DefaultPawn.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "TemplatePlayerPawn.generated.h"

UCLASS()
class ATemplatePlayerPawn : public ADefaultPawn
{
    GENERATED_BODY()

public:
    ATemplatePlayerPawn();

    virtual void PostInitializeComponents() override;

private:
    UFloatingPawnMovement *FloatingPawnMovement;
};