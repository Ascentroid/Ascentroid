#pragma once

// Generated
#include "AscMapKitUtil.generated.h"

UCLASS(BlueprintType)
class ASCMAPKIT_API UAscMapKitUtil : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION()
	static FString RegexReplace(const FString &Pattern, const FString &Input, const FString &ReplaceWith);
	
	UFUNCTION()
	static FString GenerateRandomString(const int32 &Length = 6, const bool &bExcludeNumbers = false);
};