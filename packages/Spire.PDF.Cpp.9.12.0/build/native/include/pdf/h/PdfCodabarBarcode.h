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
          Represents a Codabar barcode.
     </summary>
<remarks> This symbology allows the encoding of strings of up to 16 digits, 10 numeric digits (0 through 9) and 
             6 special non alpha characters ("+", "-", "$", "/", ":", "."). 
             </remarks>
*/
class EXPORTS PdfCodabarBarcode : public virtual PdfUnidimensionalBarcode
{
public:
    PdfCodabarBarcode();

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="text">The Barcode Text.</param>
    PdfCodabarBarcode(LPCWSTR_S text);
private:
};
}}