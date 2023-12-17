#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the available styles for a field border.
    </summary>
<remarks>Defaule value is Solid.</remarks>
*/
enum class PdfBorderStyle : int
{
    Solid = 0,
    Dashed = 1,
    Beveled = 2,
    Inset = 3,
    Underline = 4,
};
using PdfBorderStyle_Type = std::underlying_type<PdfBorderStyle>::type;
}}