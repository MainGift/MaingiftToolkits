#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents marker alignment.
    </summary>
*/
enum class PdfListMarkerAlignment : int
{
    Left = 0,
    Right = 1,
};
using PdfListMarkerAlignment_Type = std::underlying_type<PdfListMarkerAlignment>::type;
}}