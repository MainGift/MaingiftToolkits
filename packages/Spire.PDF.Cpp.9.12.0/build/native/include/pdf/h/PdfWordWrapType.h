#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the types of text wrapping.
    </summary>
*/
enum class PdfWordWrapType : int
{
    None = 0,
    Word = 1,
    WordOnly = 2,
    Character = 3,
};
using PdfWordWrapType_Type = std::underlying_type<PdfWordWrapType>::type;
}}