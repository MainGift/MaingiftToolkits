#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Pdf print to booklet subset mode
    </summary>
*/
enum class PdfBookletSubsetMode : int
{
    BothSides = 0,
    FrontSide = 1,
    ReverseSide = 2,
};
using PdfBookletSubsetMode_Type = std::underlying_type<PdfBookletSubsetMode>::type;
}}