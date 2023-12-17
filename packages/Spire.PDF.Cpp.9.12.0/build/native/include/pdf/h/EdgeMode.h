#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
<remarks />
*/
enum class EdgeMode : int
{
    Aliased = 0,
};
using EdgeMode_Type = std::underlying_type<EdgeMode>::type;
}}