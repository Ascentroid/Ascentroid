#pragma once

// UE
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"

// Generated
#include "AscMapKitDoorAnimInstance.generated.h"

UCLASS()
class ASCMAPKIT_API UAscMapKitDoorAnimInstance : public UAnimInstance
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool bOpenDoor;
};