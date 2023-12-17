#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies how the element should be contained on the page.
    </summary>
*/
enum class PdfLayoutBreakType : int
{
    FitPage = 0,
    FitElement = 1,
};
using PdfLayoutBreakType_Type = std::underlying_type<PdfLayoutBreakType>::type;
}}