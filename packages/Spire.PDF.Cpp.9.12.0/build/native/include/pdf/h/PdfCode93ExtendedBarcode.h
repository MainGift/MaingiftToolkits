#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfCode93Barcode.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a code93 extended barcode.
    </summary>
<remarks> All 128 ASCII characters can be encoded in an extended Code 93 barcode. </remarks>
*/
class EXPORTS PdfCode93ExtendedBarcode : public virtual PdfCode93Barcode
{
public:
    PdfCode93ExtendedBarcode();

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="text">The Barcode text.</param>
    PdfCode93ExtendedBarcode(LPCWSTR_S text);
private:
};
}}