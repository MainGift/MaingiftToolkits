#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the type of the PdfImage.
    </summary>
*/
enum class PdfImageType : int
{
    Bitmap = 0,
    Metafile = 1,
};
using PdfImageType_Type = std::underlying_type<PdfImageType>::type;
}}