#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfCode39Barcode.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a Code32 barcode.
    </summary>
<remarks> Only the following symbols are allowed in a Code 32 barcode: 1 2 3 4 5 6 7 8 9 0. The barcode length is 9 digits (8 user defined digits + 1 check digit).
            Code 32 barcodes are also known as Italian Pharmacode barcodes. 
            </remarks>
*/
class EXPORTS PdfCode32Barcode : public virtual PdfCode39Barcode
{
public:
    PdfCode32Barcode();

    PdfCode32Barcode(LPCWSTR_S text);
private:
};
}}