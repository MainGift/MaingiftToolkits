#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the enumeration of popup annotation icons.
    </summary>
*/
enum class PdfTextAnnotationIcon : int
{
    Note = 0,
    Comment = 1,
    Help = 2,
    Insert = 3,
    Key = 4,
    NewParagraph = 5,
    Paragraph = 6,
};
using PdfTextAnnotationIcon_Type = std::underlying_type<PdfTextAnnotationIcon>::type;
}}