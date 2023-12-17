#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
         Attachment relationship type.
    </summary>
*/
enum class PdfAttachmentRelationship : int
{
    Source = 0,
    Data = 1,
    Alternative = 2,
    Supplement = 3,
    Unspecified = 4,
};
using PdfAttachmentRelationship_Type = std::underlying_type<PdfAttachmentRelationship>::type;
}}