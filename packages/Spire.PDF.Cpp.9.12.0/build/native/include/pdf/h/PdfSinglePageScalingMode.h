#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Pdf Print Page Scale type
    </summary>
*/
enum class PdfSinglePageScalingMode : int
{
    FitSize = 0,
    ActualSize = 1,
    ShrinkOversized = 2,
    CustomScale = 3,
};
using PdfSinglePageScalingMode_Type = std::underlying_type<PdfSinglePageScalingMode>::type;
}}