#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Defines data compression level.
    </summary>
*/
enum class PdfCompressionLevel : int
{
    None = 0,
    BestSpeed = 1,
    BelowNormal = 3,
    Normal = 5,
    AboveNormal = 7,
    Best = 9,
};
using PdfCompressionLevel_Type = std::underlying_type<PdfCompressionLevel>::type;
}}