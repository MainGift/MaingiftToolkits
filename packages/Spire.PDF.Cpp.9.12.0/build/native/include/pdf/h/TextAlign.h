#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies how text in a  is
            horizontally aligned.
    </summary>
*/
enum class TextAlign : int
{
    Left = 1,
    Right = 2,
    Center = 3,
    Justify = 4,
};
using TextAlign_Type = std::underlying_type<TextAlign>::type;
}}