#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Enumeration of transition dimensions.
    </summary>
*/
enum class PdfTransitionDimension : int
{
    Horizontal = 0,
    Vertical = 1,
};
using PdfTransitionDimension_Type = std::underlying_type<PdfTransitionDimension>::type;
}}