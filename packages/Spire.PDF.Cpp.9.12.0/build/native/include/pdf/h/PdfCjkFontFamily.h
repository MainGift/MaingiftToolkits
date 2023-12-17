#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the type of CJK font.
    </summary>
*/
enum class PdfCjkFontFamily : int
{
    HanyangSystemsGothicMedium = 2,
    HanyangSystemsShinMyeongJoMedium = 3,
    HeiseiKakuGothicW5 = 0,
    HeiseiMinchoW3 = 1,
    MonotypeHeiMedium = 4,
    MonotypeSungLight = 5,
    SinoTypeSongLight = 6,
};
using PdfCjkFontFamily_Type = std::underlying_type<PdfCjkFontFamily>::type;
}}