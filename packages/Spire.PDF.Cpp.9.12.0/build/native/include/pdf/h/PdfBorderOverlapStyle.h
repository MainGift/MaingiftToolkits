#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies values of the border overlap style.
    </summary>
*/
enum class PdfBorderOverlapStyle : int
{
    Overlap = 0,
    Inside = 1,
};
using PdfBorderOverlapStyle_Type = std::underlying_type<PdfBorderOverlapStyle>::type;
}}