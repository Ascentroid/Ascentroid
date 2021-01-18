#pragma once

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitGameDifficultyEnum.h"

// Generated
#include "AscMapKitDifficultyInt32Struct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDifficultyInt32Struct
{
    GENERATED_BODY()

    // The value for game difficulty "Easy".
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    int32 Easy;

    // The value for game difficulty "Moderate".
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    int32 Moderate;

    // The value for game difficulty "Normal".
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    int32 Normal;

    // The value for game difficulty "Hard".
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    int32 Hard;

    // The value for game difficulty "Impossible".
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    int32 Impossible;

    int32 Get(const EAscMapKitGameDifficultyEnum Difficulty)
    {
        switch (Difficulty)
        {
            case EAscMapKitGameDifficultyEnum::Easy:
                return Easy;
            case EAscMapKitGameDifficultyEnum::Moderate:
                return Moderate;
            case EAscMapKitGameDifficultyEnum::Normal:
                return Normal;
            case EAscMapKitGameDifficultyEnum::Hard:
                return Hard;
            case EAscMapKitGameDifficultyEnum::Impossible:
                return Impossible;
        }

        return Normal;
    }
};