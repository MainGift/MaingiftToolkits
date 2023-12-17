#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Multi pages order in the Paper layout.
    </summary>
*/
enum class PdfMultiPageOrder : int
{
    Horizontal = 0,
    HorizontalReversed = 1,
    Vertical = 2,
    VerticalReversed = 3,
};
using PdfMultiPageOrder_Type = std::underlying_type<PdfMultiPageOrder>::type;
}}