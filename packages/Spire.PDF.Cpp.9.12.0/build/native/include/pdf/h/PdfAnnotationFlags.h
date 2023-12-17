#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the enumeration of the annotation flags.
    </summary>
*/
enum class PdfAnnotationFlags : int
{
    Default = 0,
    Invisible = 1,
    Hidden = 2,
    Print = 4,
    NoZoom = 8,
    NoRotate = 16,
    NoView = 32,
    ReadOnly = 64,
    Locked = 128,
    ToggleNoView = 256,
};
using PdfAnnotationFlags_Type = std::underlying_type<PdfAnnotationFlags>::type;
}}