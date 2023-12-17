#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies values specifying where the header should formed from.
    </summary>
*/
enum class PdfHeaderSource : int
{
    ColumnCaptions = 0,
    Rows = 1,
};
using PdfHeaderSource_Type = std::underlying_type<PdfHeaderSource>::type;
}}