#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfUnidimensionalBarcode.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a Code11 barcode.
    </summary>
<remarks> Only the following symbols are allowed in a Code 11 barcode: 0 1 2 3 4 5 6 7 8 9 -</remarks>
*/
class EXPORTS PdfCode11Barcode : public virtual PdfUnidimensionalBarcode
{
public:
    PdfCode11Barcode();

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="text">The Barcode Text.</param>
    PdfCode11Barcode(LPCWSTR_S text);
private:
};
}}