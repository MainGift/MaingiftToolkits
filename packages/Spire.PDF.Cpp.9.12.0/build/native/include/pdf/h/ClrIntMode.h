#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
<remarks />
*/
enum class ClrIntMode : int
{
    ScRgbLinearInterpolation = 0,
    SRgbLinearInterpolation = 1,
};
using ClrIntMode_Type = std::underlying_type<ClrIntMode>::type;
}}