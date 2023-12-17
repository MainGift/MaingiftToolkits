#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the Line Intent Style is to be used in the Line annotation.
    </summary>
*/
enum class PdfLineIntent : int
{
    LineArrow = 0,
    LineDimension = 1,
};
using PdfLineIntent_Type = std::underlying_type<PdfLineIntent>::type;
}}