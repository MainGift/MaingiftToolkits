#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies how the page template is aligned relative to the template area.    
    </summary>
<remarks>This enumeration is used in  class.</remarks>
*/
enum class PdfAlignmentStyle : int
{
    None = 0,
    TopLeft = 1,
    TopCenter = 2,
    TopRight = 3,
    MiddleLeft = 4,
    MiddleCenter = 5,
    MiddleRight = 6,
    BottomLeft = 7,
    BottomCenter = 8,
    BottomRight = 9,
};
using PdfAlignmentStyle_Type = std::underlying_type<PdfAlignmentStyle>::type;
}}