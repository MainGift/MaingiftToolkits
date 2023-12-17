#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
<remarks />
*/
enum class MappingMode : int
{
    Absolute = 0,
};
using MappingMode_Type = std::underlying_type<MappingMode>::type;
}}