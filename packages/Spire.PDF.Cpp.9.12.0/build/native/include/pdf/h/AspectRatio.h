#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*

*/
enum class AspectRatio : int
{
    None = 0,
    KeepWidth = 1,
    KeepHeight = 2,
    FitPageSize = 3,
};
using AspectRatio_Type = std::underlying_type<AspectRatio>::type;
}}