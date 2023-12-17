#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
         Specifies a printer resolution kind.
    </summary>
*/
enum class PdfPrinterResolutionKind : int
{
    High = -4,
    Medium = -3,
    Low = -2,
    Draft = -1,
    Custom = 0,
};
using PdfPrinterResolutionKind_Type = std::underlying_type<PdfPrinterResolutionKind>::type;
}}