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

FString UAscMapKitUtil::GenerateRandomString(const int32 &MaxLength, const bool &bExcludeNumbers, const bool &bExcludeLowercase, const bool &bUniqueCharacters)
{
	FString Characters = TEXT("ABCDEFGHIJKLMNOPQRSTUVWXYZ");

	if (!bExcludeLowercase)
		Characters += TEXT("abcdefghijklmnopqrstuvwxyz");

	if (!bExcludeNumbers)
		Characters += TEXT("0123456789");

	FString Result;

	Result.Reserve(MaxLength);

	if (bUniqueCharacters)
	{
		FString AvailableChars = Characters;

		const int32 MaxUniqueLength = FMath::Min(MaxLength, AvailableChars.Len());

		for (int32 i = 0; i < MaxUniqueLength; ++i)
		{
			const int32 Index = FMath::RandRange(0, AvailableChars.Len() - 1);
			Result.AppendChar(AvailableChars[Index]);
			AvailableChars.RemoveAt(Index, 1, false);
		}
	}
	else
	{
		for (int32 i = 0; i < MaxLength; ++i)
		{
			const int32 Index = FMath::RandRange(0, Characters.Len() - 1);
			Result.AppendChar(Characters[Index]);
		}
	}

	return Result;
}

FString UAscMapKitUtil::ConvertAlienText(FString &Text)
{
	Text = Text.ToUpper().TrimStartAndEnd();

	if (Text.IsEmpty())
		return TEXT("");

	const auto Transposer =
		TMap<char, char>
		{
			{'A', 'K'}, {'B', 'V'}, {'C', 'H'}, {'D', 'Z'},
			{'E', 'L'}, {'F', 'E'}, {'G', 'O'}, {'H', 'J'},
			{'I', 'Y'}, {'J', 'X'}, {'K', 'B'}, {'L', 'I'},
			{'M', 'R'}, {'N', 'S'}, {'O', 'P'}, {'P', 'A'},
			{'Q', 'T'}, {'R', 'W'}, {'S', 'M'}, {'T', 'G'},
			{'U', 'Q'}, {'V', 'N'}, {'W', 'U'},
			{'X', 'D'}, {'Y', 'C'}, {'Z', 'F'}
		};

	FString Result = TEXT("");

	for (const auto &C : Text)
		Result.AppendChar(Transposer.Contains(C) ? Transposer[C] : C);

	return Result;
}

bool UAscMapKitUtil::IsExactlyUniqueLetterCount(const FString &Arg, const int32 &MaxLength, const bool bAlphaOnly, const bool bCaseSensitive)
{
	if (Arg.Len() != MaxLength)
		return false;

	TSet<TCHAR> DistinctChars;

	for (const auto Char : Arg)
	{
		if (bAlphaOnly && !FChar::IsAlpha(Char))
			return false;

		const auto CheckChar = bCaseSensitive ? Char : FChar::ToLower(Char);

		if (DistinctChars.Contains(CheckChar))
			return false;

		DistinctChars.Add(CheckChar);
	}

	return DistinctChars.Num() == MaxLength;
}