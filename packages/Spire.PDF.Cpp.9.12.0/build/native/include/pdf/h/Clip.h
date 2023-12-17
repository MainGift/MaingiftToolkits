#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Options of converting html to pdf
    </summary>
*/
enum class Clip : int
{
    None = 0,
    Width = 1,
    Height = 2,
    Both = 4,
};
using Clip_Type = std::underlying_type<Clip>::type;
}}