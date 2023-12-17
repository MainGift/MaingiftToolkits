#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Allows to choose outline text style.
    </summary>
*/
enum class PdfTextStyle : int
{
    Regular = 0,
    Italic = 1,
    Bold = 2,
};
using PdfTextStyle_Type = std::underlying_type<PdfTextStyle>::type;
}}