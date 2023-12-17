#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Possible dash styles of the pen.
    </summary>
*/
enum class PdfDashStyle : int
{
    Solid = 0,
    Dash = 1,
    Dot = 2,
    DashDot = 3,
    DashDotDot = 4,
    Custom = 5,
    None = 6,
};
using PdfDashStyle_Type = std::underlying_type<PdfDashStyle>::type;
}}