#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the types of the page's logical units.
    </summary>
*/
enum class PdfGraphicsUnit : int
{
    Centimeter = 0,
    Pica = 1,
    Pixel = 2,
    Point = 3,
    Inch = 4,
    Document = 5,
    Millimeter = 6,
};
using PdfGraphicsUnit_Type = std::underlying_type<PdfGraphicsUnit>::type;
}}