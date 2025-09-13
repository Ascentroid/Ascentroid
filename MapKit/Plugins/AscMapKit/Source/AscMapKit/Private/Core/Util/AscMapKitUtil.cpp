#include "AscMapKit/Public/Core/Util/AscMapKitUtil.h"

// UE
#include "Runtime/Core/Public/Internationalization/Regex.h"

void UAscMapKitUtil::Log(const FString &Message)
{
	UE_LOG(LogTemp, Log, TEXT("%s"), *Message);
	GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Cyan, *Message);
}

FString UAscMapKitUtil::RegexReplace(const FString &Pattern, const FString &Input, const FString &ReplaceWith)
{
	FString Result;

	const FRegexPattern RegexPattern(Pattern);

	FRegexMatcher RegexMatcher(RegexPattern, Input);

	int32 PreviousMatchEnding = 0;

	while (RegexMatcher.FindNext())
	{
		Result += Input.Mid(PreviousMatchEnding, RegexMatcher.GetMatchBeginning() - PreviousMatchEnding);
		Result += ReplaceWith;
		PreviousMatchEnding = RegexMatcher.GetMatchEnding();
	}

	Result += Input.Mid(PreviousMatchEnding);

	return Result;
}

FString UAscMapKitUtil::GenerateRandomString(const int32 &Length, const bool &bExcludeNumbers)
{
	FString Characters = TEXT("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

	if (!bExcludeNumbers)
		Characters += TEXT("0123456789");

	FString Result;

	Result.Reserve(Length);

	for (int32 i = 0; i < Length; ++i)
	{
		const int32 Index = FMath::RandRange(0, Characters.Len() - 1);
		Result.AppendChar(Characters[Index]);
	}

	return Result;
}
