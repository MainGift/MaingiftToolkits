#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        The number of degrees by which the page should be rotated clockwise when displayed or printed.
    </summary>
*/
enum class PdfPageRotateAngle : int
{
    RotateAngle0 = 0,
    RotateAngle90 = 1,
    RotateAngle180 = 2,
    RotateAngle270 = 3,
};
using PdfPageRotateAngle_Type = std::underlying_type<PdfPageRotateAngle>::type;
}}