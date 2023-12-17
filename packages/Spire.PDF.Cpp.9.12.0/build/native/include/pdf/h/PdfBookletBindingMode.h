#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Pdf print to booklet binding mode
    </summary>
*/
enum class PdfBookletBindingMode : int
{
    Left = 0,
    Right = 1,
};
using PdfBookletBindingMode_Type = std::underlying_type<PdfBookletBindingMode>::type;
}}