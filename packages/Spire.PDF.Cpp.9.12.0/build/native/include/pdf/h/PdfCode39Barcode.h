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
        Represents a Code39 barcode.
    </summary>
<remarks> Only the following symbols are allowed in a Code 39 barcode:Only the following symbols are allowed in a Code 39 barcode: 1 2 3 4 5 6 7 8 9 0 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z - . $ / + % SPACE
            All alphabetic characters are uppercase. If lowercase characters are required, then a Code 39 Extended barcode must be used.
            </remarks>
*/
class EXPORTS PdfCode39Barcode : public virtual PdfUnidimensionalBarcode
{
public:
    PdfCode39Barcode();

    PdfCode39Barcode(LPCWSTR_S text);
private:
};
}}