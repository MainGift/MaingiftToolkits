#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies numbering style of page labels.
    </summary>
*/
enum class PdfNumberStyle : int
{
    None = 0,
    Numeric = 1,
    LowerLatin = 2,
    LowerRoman = 3,
    UpperLatin = 4,
    UpperRoman = 5,
};
using PdfNumberStyle_Type = std::underlying_type<PdfNumberStyle>::type;
}}