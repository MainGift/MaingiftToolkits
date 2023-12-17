#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the marker style.
    </summary>
*/
enum class PdfUnorderedMarkerStyle : int
{
    None = 0,
    Disk = 1,
    Square = 2,
    Asterisk = 3,
    Circle = 4,
    CustomString = 5,
    CustomImage = 6,
    CustomTemplate = 7,
};
using PdfUnorderedMarkerStyle_Type = std::underlying_type<PdfUnorderedMarkerStyle>::type;
}}