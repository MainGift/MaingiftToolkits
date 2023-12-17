#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the barcode text alignment.
    </summary>
*/
enum class PdfBarcodeTextAlignment : int
{
    Left = 0,
    Center = 1,
    Right = 2,
};
using PdfBarcodeTextAlignment_Type = std::underlying_type<PdfBarcodeTextAlignment>::type;
}}