#pragma once

// Generated
#include "AscMapKitUtil.generated.h"

UCLASS(Blueprintable, BlueprintType)
class ASCMAPKIT_API UAscMapKitUtil : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION()
	static void Log(const FString &Message);

	UFUNCTION()
	static FString RegexReplace(const FString &Pattern, const FString &Input, const FString &ReplaceWith);

	UFUNCTION()
	static FString GenerateRandomString(const int32 &MaxLength = 8, const bool &bExcludeNumbers = false, const bool &bExcludeLowercase = false, const bool &bUniqueCharacters = false);

	UFUNCTION()
	static FString ConvertAlienText(FString &Text);
	
	UFUNCTION()
	static bool IsExactlyUniqueLetterCount(const FString &Arg, const int32 &MaxLength = 4, const bool bAlphaOnly = true, const bool bCaseSensitive = false);
};