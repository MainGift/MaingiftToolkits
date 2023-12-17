#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the line cap style to be used at the ends of the lines.
     </summary>
*/
enum class PdfLineCap : int
{
    Flat = 0,
    Round = 1,
    Square = 2,
};
using PdfLineCap_Type = std::underlying_type<PdfLineCap>::type;
}}