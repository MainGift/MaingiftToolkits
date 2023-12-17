#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Enumeration of transition directions.
    </summary>
*/
enum class PdfTransitionDirection : int
{
    LeftToRight = 0,
    BottomToTop = 90,
    RightToLeft = 180,
    TopToBottom = 270,
    TopLeftToBottomRight = 315,
};
using PdfTransitionDirection_Type = std::underlying_type<PdfTransitionDirection>::type;
}}