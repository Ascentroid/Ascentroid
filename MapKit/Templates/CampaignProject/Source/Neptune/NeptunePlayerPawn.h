#pragma once

#include "CoreMinimal.h"
#include "GameFramework/DefaultPawn.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "NeptunePlayerPawn.generated.h"

UCLASS()
class ANeptunePlayerPawn : public ADefaultPawn
{
    GENERATED_BODY()

public:
    ANeptunePlayerPawn();

    virtual void PostInitializeComponents() override;

private:
    UFloatingPawnMovement *FloatingPawnMovement;
};