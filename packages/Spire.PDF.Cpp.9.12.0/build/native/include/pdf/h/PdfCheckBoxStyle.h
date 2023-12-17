#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the style for a check box field.
    </summary>
<remarks>The default value is Check.</remarks>
*/
enum class PdfCheckBoxStyle : int
{
    Check = 0,
    Circle = 1,
    Cross = 2,
    Diamond = 3,
    Square = 4,
    Star = 5,
};
using PdfCheckBoxStyle_Type = std::underlying_type<PdfCheckBoxStyle>::type;
}}