#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies how the shapes are filled. 
    </summary>
*/
enum class PdfFillMode : int
{
    Winding = 0,
    Alternate = 1,
};
using PdfFillMode_Type = std::underlying_type<PdfFillMode>::type;
}}