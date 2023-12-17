#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the Line Caption Type is to be used in the Line annotation.
    </summary>
*/
enum class PdfLineCaptionType : int
{
    Inline = 0,
    Top = 1,
};
using PdfLineCaptionType_Type = std::underlying_type<PdfLineCaptionType>::type;
}}