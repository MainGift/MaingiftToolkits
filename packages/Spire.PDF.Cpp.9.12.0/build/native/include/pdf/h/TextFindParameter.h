#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Setting find text Parameters
     </summary>
*/
enum class TextFindParameter : int
{
    None = 1,
    WholeWord = 16,
    IgnoreCase = 256,
    Regex = 65536,
};
using TextFindParameter_Type = std::underlying_type<TextFindParameter>::type;
}}