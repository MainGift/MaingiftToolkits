#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the type of icon to be used in displaying file attachment annotations.
    </summary>
*/
enum class PdfAttachmentIcon : int
{
    PushPin = 0,
    Tag = 1,
    Graph = 2,
    Paperclip = 3,
};
using PdfAttachmentIcon_Type = std::underlying_type<PdfAttachmentIcon>::type;
}}