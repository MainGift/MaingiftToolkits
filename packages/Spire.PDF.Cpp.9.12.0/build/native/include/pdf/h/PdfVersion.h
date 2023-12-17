#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the available PDF versions to save a PDF document.
    </summary>
*/
enum class PdfVersion : int
{
    Version1_0 = 0,
    Version1_1 = 1,
    Version1_2 = 2,
    Version1_3 = 3,
    Version1_4 = 4,
    Version1_5 = 5,
    Version1_6 = 6,
    Version1_7 = 7,
};
using PdfVersion_Type = std::underlying_type<PdfVersion>::type;
}}