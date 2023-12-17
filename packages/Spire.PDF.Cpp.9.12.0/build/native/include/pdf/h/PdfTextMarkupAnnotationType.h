#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the Style of the Text Markup Annotation
    </summary>
*/
enum class PdfTextMarkupAnnotationType : int
{
    Highlight = 0,
    Underline = 1,
    Squiggly = 2,
    StrikeOut = 3,
};
using PdfTextMarkupAnnotationType_Type = std::underlying_type<PdfTextMarkupAnnotationType>::type;
}}