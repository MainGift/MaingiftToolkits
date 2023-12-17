#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*

*/
enum class PdfBorderEffect : int
{
    None = 0,
    SmallCloud = 1,
    BigCloud = 2,
};
using PdfBorderEffect_Type = std::underlying_type<PdfBorderEffect>::type;
}}