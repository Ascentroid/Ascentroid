#pragma once

// Ascentroid
#include "AscMapKit/Public/Core/Constant/AscMapKitGameDifficultyEnum.h"

// Generated
#include "AscMapKitDifficultyFloatStruct.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct ASCMAPKIT_API FAscMapKitDifficultyFloatStruct
{
    GENERATED_BODY()

    // The value for game difficulty "Easy".
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float Easy;

    // The value for game difficulty "Moderate".
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float Moderate;

    // The value for game difficulty "Normal".
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float Normal;

    // The value for game difficulty "Hard".
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float Hard;

    // The value for game difficulty "Impossible".
    UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    float Impossible;

    float Get(const EAscMapKitGameDifficultyEnum Difficulty)
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