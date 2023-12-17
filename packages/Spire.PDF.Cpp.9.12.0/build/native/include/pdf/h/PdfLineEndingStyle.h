#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the Line Ending Style to be used in the Line annotation.
    </summary>
*/
enum class PdfLineEndingStyle : int
{
    Square = 0,
    Circle = 1,
    Diamond = 2,
    OpenArrow = 3,
    ClosedArrow = 4,
    None = 5,
    ROpenArrow = 6,
    Butt = 7,
    RClosedArrow = 8,
    Slash = 9,
};
using PdfLineEndingStyle_Type = std::underlying_type<PdfLineEndingStyle>::type;
}}