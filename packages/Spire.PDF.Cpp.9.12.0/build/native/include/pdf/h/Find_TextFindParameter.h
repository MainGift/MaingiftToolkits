#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Setting find text Parameters
     </summary>
*/
enum class Find_TextFindParameter : int
{
    None = 1,
    WholeWord = 16,
    IgnoreCase = 256,
    CrossLine = 4096,
    Regex = 65536,
};
using Find_TextFindParameter_Type = std::underlying_type<Find_TextFindParameter>::type;
}}