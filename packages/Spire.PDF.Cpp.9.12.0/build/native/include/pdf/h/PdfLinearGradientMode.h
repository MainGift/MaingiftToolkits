#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the gradient direction of the linear gradient brush.
    </summary>
*/
enum class PdfLinearGradientMode : int
{
    BackwardDiagonal = 0,
    ForwardDiagonal = 1,
    Horizontal = 2,
    Vertical = 3,
};
using PdfLinearGradientMode_Type = std::underlying_type<PdfLinearGradientMode>::type;
}}