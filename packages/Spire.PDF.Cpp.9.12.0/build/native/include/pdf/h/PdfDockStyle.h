#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the docking style of the page template.
    </summary>
<remarks>This enumeration is used in  class.</remarks>
*/
enum class PdfDockStyle : int
{
    None = 0,
    Bottom = 1,
    Top = 2,
    Left = 3,
    Right = 4,
    Fill = 5,
};
using PdfDockStyle_Type = std::underlying_type<PdfDockStyle>::type;
}}