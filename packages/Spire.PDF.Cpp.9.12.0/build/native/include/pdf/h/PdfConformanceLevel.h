#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the Pdf document's Conformance-level.
    </summary>
*/
enum class PdfConformanceLevel : int
{
    None = 0,
    Pdf_A1B = 1,
    Pdf_X1A2001 = 2,
    Pdf_A1A = 3,
    Pdf_A2A = 4,
    Pdf_A2B = 5,
    Pdf_A3A = 6,
    Pdf_A3B = 7,
};
using PdfConformanceLevel_Type = std::underlying_type<PdfConformanceLevel>::type;
}}