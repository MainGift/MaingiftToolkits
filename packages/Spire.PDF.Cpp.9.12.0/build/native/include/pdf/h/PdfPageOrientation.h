#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Enumerator that implements page orientations.
    </summary>
*/
enum class PdfPageOrientation : int
{
    Portrait = 0,
    Landscape = 1,
};
using PdfPageOrientation_Type = std::underlying_type<PdfPageOrientation>::type;
}}