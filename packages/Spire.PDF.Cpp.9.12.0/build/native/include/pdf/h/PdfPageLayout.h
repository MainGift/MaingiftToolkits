#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        A name object specifying the page layout to be used when the
            document is opened.
    </summary>
*/
enum class PdfPageLayout : int
{
    SinglePage = 0,
    OneColumn = 1,
    TwoColumnLeft = 2,
    TwoColumnRight = 3,
    TwoPageLeft = 4,
    TwoPageRight = 5,
};
using PdfPageLayout_Type = std::underlying_type<PdfPageLayout>::type;
}}