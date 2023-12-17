#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Represtents the circumstances under which the icon shall be scaled inside the annotation rectangle.
    </summary>
*/
enum class PdfButtonIconScaleReason : int
{
    Always = 0,
    IconIsBigger = 1,
    IconIsSmaller = 2,
    Never = 3,
};
using PdfButtonIconScaleReason_Type = std::underlying_type<PdfButtonIconScaleReason>::type;
}}