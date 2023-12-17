#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the type of the PDF cross-reference.
    </summary>
<remarks>Default value is CrossReferenceStream</remarks>
*/
enum class PdfCrossReferenceType : int
{
    CrossReferenceTable = 0,
    CrossReferenceStream = 1,
};
using PdfCrossReferenceType_Type = std::underlying_type<PdfCrossReferenceType>::type;
}}