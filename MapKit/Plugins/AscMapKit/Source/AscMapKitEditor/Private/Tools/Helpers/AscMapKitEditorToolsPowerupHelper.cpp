#include "AscMapKitEditor/Public/Tools/Helpers/AscMapKitEditorToolsPowerupHelper.h"

// Ascentroid
#include "AscMapKit/Public/Core/Util/AscMapKitUtil.h"

FString UAscMapKitEditorToolsPowerupHelper::GetNamePrefix(
	const EAscMapKitPowerupTypeEnum &PowerupType,
	const bool &bIncludeDefaultPowerupName,
	const FString &DefaultName)
{
	auto Result = DefaultName;

	const UEnum *PowerupTypeEnumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("EAscMapKitPowerupTypeEnum"), true);

	Result = PowerupTypeEnumPtr->GetDisplayNameTextByValue(static_cast<uint8>(PowerupType)).ToString();

	if (Result.Len() > 0)
	{
		if (!bIncludeDefaultPowerupName)
			Result = UAscMapKitUtil::RegexReplace(TEXT(" \\(.*\\)"), Result, TEXT(""));

		Result = Result.Replace(TEXT("("), TEXT("_")).Replace(TEXT(")"), TEXT("_")).Replace(TEXT(" "), TEXT("_")).Replace(TEXT("__"), TEXT("_"));
	}

	return Result;
}
