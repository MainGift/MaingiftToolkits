#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the button layout mode.
    </summary>
*/
enum class PdfButtonLayoutMode : int
{
    CaptionOnly = 0,
    IconOnly = 1,
    CaptionBelowIcon = 2,
    CaptionAboveIcon = 3,
    CaptionRightOfIcon = 4,
    CaptionLeftOfIcon = 5,
    CaptionOverlayIcon = 6,
};
using PdfButtonLayoutMode_Type = std::underlying_type<PdfButtonLayoutMode>::type;
}}