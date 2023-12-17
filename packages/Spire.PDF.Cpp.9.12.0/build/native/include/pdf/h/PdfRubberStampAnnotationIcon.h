#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the enumeration of rubber stamp annotation icons.
    </summary>
*/
enum class PdfRubberStampAnnotationIcon : int
{
    Additional = 0,
    Approved = 1,
    AsIs = 2,
    Confidential = 3,
    Departmental = 4,
    Draft = 5,
    Experimental = 6,
    Expired = 7,
    Final = 8,
    ForComment = 9,
    ForPublicRelease = 10,
    NotApproved = 11,
    NotForPublicRelease = 12,
    Sold = 13,
    TopSecret = 14,
};
using PdfRubberStampAnnotationIcon_Type = std::underlying_type<PdfRubberStampAnnotationIcon>::type;
}}