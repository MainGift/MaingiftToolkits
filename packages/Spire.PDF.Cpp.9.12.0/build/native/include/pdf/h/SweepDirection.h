#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
<remarks />
*/
enum class SweepDirection : int
{
    Clockwise = 0,
    Counterclockwise = 1,
};
using SweepDirection_Type = std::underlying_type<SweepDirection>::type;
}}