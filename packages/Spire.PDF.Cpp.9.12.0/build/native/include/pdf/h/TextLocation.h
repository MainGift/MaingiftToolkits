#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the barcode text display location.
    </summary>
*/
enum class TextLocation : int
{
    None = 0,
    Top = 1,
    Bottom = 2,
};
using TextLocation_Type = std::underlying_type<TextLocation>::type;
}}