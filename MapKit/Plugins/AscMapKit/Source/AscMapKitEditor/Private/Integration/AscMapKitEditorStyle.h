#pragma once

#include "Runtime/SlateCore/Public/Styling/SlateStyle.h"

class FAscMapKitEditorStyle : public FSlateStyleSet
{
public:
    FAscMapKitEditorStyle();

    virtual ~FAscMapKitEditorStyle() override;

    static TSharedPtr<ISlateStyle> GetInstance()
    {
        if (!Instance.IsValid())
            Instance = MakeShared<FAscMapKitEditorStyle>();

        return Instance;
    }

    static FName GetStyleName()
    {
        return TEXT("AscMapKitEditorStyle");
    }

    static FName GetToolbarIconLargeName()
    {
        return TEXT("AscMapKitEditorToolbarButton.LargeIcon");
    }

    static FName GetToolbarIconSmallName()
    {
        return TEXT("AscMapKitEditorToolbarButton.SmallIcon");
    }

private:
    static TSharedPtr<ISlateStyle> Instance;
};