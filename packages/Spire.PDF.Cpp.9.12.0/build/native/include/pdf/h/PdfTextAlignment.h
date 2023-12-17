#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the type of horizontal text alignment.
    </summary>
*/
enum class PdfTextAlignment : int
{
    Left = 0,
    Center = 1,
    Right = 2,
    Justify = 3,
};
using PdfTextAlignment_Type = std::underlying_type<PdfTextAlignment>::type;
}}