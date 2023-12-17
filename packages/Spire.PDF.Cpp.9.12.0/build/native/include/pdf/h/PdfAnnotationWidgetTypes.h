#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the annotation types.
    </summary>
*/
enum class PdfAnnotationWidgetTypes : int
{
    Highlight = 0,
    Underline = 1,
    StrikeOut = 2,
    Squiggly = 3,
    AnnotationStates = 4,
    TextAnnotation = 5,
    LinkAnnotation = 6,
    DocumentLinkAnnotation = 7,
    FileLinkAnnotation = 8,
    FreeTextAnnotation = 9,
    LineAnnotation = 10,
    SquareandCircleAnnotation = 11,
    PolygonandPolylineAnnotation = 12,
    TextMarkupAnnotation = 13,
    CaretAnnotation = 14,
    RubberStampAnnotation = 15,
    LnkAnnotation = 16,
    PopupAnnotation = 17,
    FileAttachmentAnnotation = 18,
    SoundAnnotation = 19,
    MovieAnnotation = 20,
    ScreenAnnotation = 21,
    WidgetAnnotation = 22,
    PrinterMarkAnnotation = 23,
    TrapNetworkAnnotation = 24,
    WatermarkAnnotation = 25,
    TextWebLinkAnnotation = 26,
    _3DAnnotation = 27,
    Null = 28,
    PolygonAnnotation = 29,
    PolyLineAnnotation = 30,
    SquareAnnotation = 31,
    InkAnnotation = 32,
    CircleAnnotation = 33,
};
using PdfAnnotationWidgetTypes_Type = std::underlying_type<PdfAnnotationWidgetTypes>::type;
}}