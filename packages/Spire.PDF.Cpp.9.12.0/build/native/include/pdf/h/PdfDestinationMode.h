#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Enumeration that represents fit mode.
    </summary>
*/
enum class PdfDestinationMode : int
{
    Location = 0,
    FitToPage = 1,
    FitH = 2,
    FitR = 3,
    FitBH = 4,
};
using PdfDestinationMode_Type = std::underlying_type<PdfDestinationMode>::type;
}}