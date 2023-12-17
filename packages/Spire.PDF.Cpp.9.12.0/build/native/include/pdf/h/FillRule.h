#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
<remarks />
*/
enum class FillRule : int
{
    EvenOdd = 0,
    NonZero = 1,
};
using FillRule_Type = std::underlying_type<FillRule>::type;
}}