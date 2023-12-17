#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
<remarks />
*/
enum class LineCap : int
{
    Flat = 0,
    Round = 1,
    Square = 2,
    Triangle = 3,
};
using LineCap_Type = std::underlying_type<LineCap>::type;
}}