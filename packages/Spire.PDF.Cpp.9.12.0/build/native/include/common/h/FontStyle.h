#pragma once
#include "common.h"
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
enum class FontStyle : int
{
    Regular = 0,
    Bold = 1,
    Italic = 2,
    Underline = 4,
    Strikeout = 8,
};
using FontStyle_Type = std::underlying_type<FontStyle>::type;
}}