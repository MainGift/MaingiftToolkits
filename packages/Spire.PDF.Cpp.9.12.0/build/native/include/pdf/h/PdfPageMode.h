#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents mode of document displaying.
    </summary>
*/
enum class PdfPageMode : int
{
    UseNone = 0,
    UseOutlines = 1,
    UseThumbs = 2,
    FullScreen = 3,
    UseOC = 4,
    UseAttachments = 5,
};
using PdfPageMode_Type = std::underlying_type<PdfPageMode>::type;
}}