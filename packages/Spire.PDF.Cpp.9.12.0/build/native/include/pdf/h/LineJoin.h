#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
<remarks />
*/
enum class LineJoin : int
{
    Miter = 0,
    Bevel = 1,
    Round = 2,
};
using LineJoin_Type = std::underlying_type<LineJoin>::type;
}}