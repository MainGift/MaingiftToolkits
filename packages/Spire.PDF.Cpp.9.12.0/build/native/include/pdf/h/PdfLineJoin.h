#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the corner style of the shapes.
    </summary>
*/
enum class PdfLineJoin : int
{
    Miter = 0,
    Round = 1,
    Bevel = 2,
};
using PdfLineJoin_Type = std::underlying_type<PdfLineJoin>::type;
}}