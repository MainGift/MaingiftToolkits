#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
<remarks />
*/
enum class DashCap : int
{
    Flat = 0,
    Round = 1,
    Square = 2,
    Triangle = 3,
};
using DashCap_Type = std::underlying_type<DashCap>::type;
}}