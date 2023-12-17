#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the type of Horizontal alignment.
    </summary>
*/
enum class PdfHorizontalAlignment : int
{
    Left = 0,
    Center = 1,
    Right = 2,
};
using PdfHorizontalAlignment_Type = std::underlying_type<PdfHorizontalAlignment>::type;
}}