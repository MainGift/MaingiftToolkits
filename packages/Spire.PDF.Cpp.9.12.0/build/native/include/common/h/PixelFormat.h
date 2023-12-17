#pragma once
//#include "pch.h"
namespace Spire{
#ifdef _SPIRE_XLS
namespace Xls{
#elif defined(_SPIRE_DOC)
namespace Doc{
#elif defined(_SPIRE_PDF)
namespace Pdf{
#elif defined(_SPIRE_PPT)
namespace Presentation{
#else
namespace Xls{
#endif
enum class PixelFormat : int
{
    Indexed = 65536,
    Gdi = 131072,
    Alpha = 262144,
    PAlpha = 524288,
    Extended = 1048576,
    Canonical = 2097152,
    Undefined = 0,
    DontCare = 0,
    Format1bppIndexed = 196865,
    Format4bppIndexed = 197634,
    Format8bppIndexed = 198659,
    Format16bppGrayScale = 1052676,
    Format16bppRgb555 = 135173,
    Format16bppRgb565 = 135174,
    Format16bppArgb1555 = 397319,
    Format24bppRgb = 137224,
    Format32bppRgb = 139273,
    Format32bppArgb = 2498570,
    Format32bppPArgb = 925707,
    Format48bppRgb = 1060876,
    Format64bppArgb = 3424269,
    Format64bppPArgb = 1851406,
    Max = 15,
};
using PixelFormat_Type = std::underlying_type<PixelFormat>::type;
}}