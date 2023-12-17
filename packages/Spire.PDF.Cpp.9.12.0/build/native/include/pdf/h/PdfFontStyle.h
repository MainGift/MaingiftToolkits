#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies style information applied to text.
    </summary>
*/
enum class PdfFontStyle : int
{
    Regular = 0,
    Bold = 1,
    Italic = 2,
    Underline = 4,
    Strikeout = 8,
};
using PdfFontStyle_Type = std::underlying_type<PdfFontStyle>::type;
}}