#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the Line Border Style is to be used in the Line annotation.
    </summary>
*/
enum class PdfLineBorderStyle : int
{
    Solid = 0,
    Dashed = 1,
    Beveled = 2,
    Inset = 3,
    Underline = 4,
};
using PdfLineBorderStyle_Type = std::underlying_type<PdfLineBorderStyle>::type;
}}