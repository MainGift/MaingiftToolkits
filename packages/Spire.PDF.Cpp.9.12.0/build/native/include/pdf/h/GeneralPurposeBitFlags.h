#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*

*/
enum class GeneralPurposeBitFlags : int
{
    SizeAfterData = 8,
    Unicode = 2048,
};
using GeneralPurposeBitFlags_Type = std::underlying_type<GeneralPurposeBitFlags>::type;
}}