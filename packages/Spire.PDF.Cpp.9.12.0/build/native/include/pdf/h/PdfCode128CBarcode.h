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
        Represents a Code128C barcode.
    </summary>
<remarks>Only the following symbols are allowed in a Code 128C barcode: 0 1 2 3 4 5 6 7 8 9 FNC1 (\xF0). Code 128 C encodes only numeric symbols at double density, each pair of digits is encoded using a single symbol.</remarks>
*/
class EXPORTS PdfCode128CBarcode : public virtual PdfUnidimensionalBarcode
{
public:
    PdfCode128CBarcode();

    PdfCode128CBarcode(LPCWSTR_S text);
private:
};
}}