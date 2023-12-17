#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the type of the font.
    </summary>
*/
enum class PdfFontType : int
{
    Standard = 0,
    TrueType = 1,
    TrueTypeEmbedded = 2,
};
using PdfFontType_Type = std::underlying_type<PdfFontType>::type;
}}