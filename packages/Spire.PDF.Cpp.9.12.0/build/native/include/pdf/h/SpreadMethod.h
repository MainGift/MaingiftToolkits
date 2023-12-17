#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
<remarks />
*/
enum class SpreadMethod : int
{
    Pad = 0,
    Reflect = 1,
    Repeat = 2,
    None = 3,
};
using SpreadMethod_Type = std::underlying_type<SpreadMethod>::type;
}}