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
        Represents a Code39 Extended barcode.
            Code 39 Extended is designed to encode 128 full ASCII characters.
    </summary>
<remarks> All 128 ASCII characters can be encoded in an extended Code 39 barcode</remarks>
*/
class EXPORTS PdfCode39ExtendedBarcode : public virtual PdfCode39Barcode
{
public:
    PdfCode39ExtendedBarcode();

    PdfCode39ExtendedBarcode(LPCWSTR_S text);
private:
};
}}