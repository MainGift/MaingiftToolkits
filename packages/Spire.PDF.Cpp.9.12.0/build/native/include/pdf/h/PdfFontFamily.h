#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Indicates type of standard PDF fonts.
    </summary>
*/
enum class PdfFontFamily : int
{
    Helvetica = 0,
    Courier = 1,
    TimesRoman = 2,
    Symbol = 3,
    ZapfDingbats = 4,
};
using PdfFontFamily_Type = std::underlying_type<PdfFontFamily>::type;
}}