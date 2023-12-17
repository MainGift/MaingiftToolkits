#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
<remarks />
*/
enum class TileMode : int
{
    None = 0,
    Tile = 1,
    FlipX = 2,
    FlipY = 3,
    FlipXY = 4,
};
using TileMode_Type = std::underlying_type<TileMode>::type;
}}