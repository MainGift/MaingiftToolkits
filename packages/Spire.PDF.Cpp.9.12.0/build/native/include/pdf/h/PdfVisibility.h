#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Represent the visibility of optional content group(or optional content membership).
    </summary>
*/
enum class PdfVisibility : int
{
    On = 0,
    Off = 1,
};
using PdfVisibility_Type = std::underlying_type<PdfVisibility>::type;
}}