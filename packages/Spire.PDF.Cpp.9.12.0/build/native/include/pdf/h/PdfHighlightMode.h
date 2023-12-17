#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the highlight mode for a field.
    </summary>
<remarks>Defaule value is Invert.</remarks>
*/
enum class PdfHighlightMode : int
{
    NoHighlighting = 0,
    Invert = 1,
    Outline = 2,
    Push = 3,
};
using PdfHighlightMode_Type = std::underlying_type<PdfHighlightMode>::type;
}}