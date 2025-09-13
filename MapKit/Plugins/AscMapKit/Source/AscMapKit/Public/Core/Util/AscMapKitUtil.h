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
	static FString GenerateRandomString(const int32 &Length = 6, const bool &bExcludeNumbers = false);
};