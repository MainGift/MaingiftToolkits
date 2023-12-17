#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Defines set of color spaces.
    </summary>
*/
enum class PdfColorSpace : int
{
    RGB = 0,
    CMYK = 1,
    GrayScale = 2,
    Indexed = 3,
};
using PdfColorSpace_Type = std::underlying_type<PdfColorSpace>::type;
}}