#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the available permissions on certificated document.
    </summary>
*/
enum class PdfCertificationFlags : int
{
    ForbidChanges = 1,
    AllowFormFill = 2,
    AllowComments = 3,
};
using PdfCertificationFlags_Type = std::underlying_type<PdfCertificationFlags>::type;
}}