#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Pdf print to booklet binding mode
    </summary>
*/
enum class Print_PdfBookletBindingMode : int
{
    Left = 0,
    Right = 1,
    LeftHigh = 2,
    RightHigh = 3,
};
using Print_PdfBookletBindingMode_Type = std::underlying_type<Print_PdfBookletBindingMode>::type;
}}