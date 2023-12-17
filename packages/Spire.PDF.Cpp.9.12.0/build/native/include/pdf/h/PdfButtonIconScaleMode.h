#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the type of scaling to use.
    </summary>
*/
enum class PdfButtonIconScaleMode : int
{
    Anamorphic = 0,
    Proportional = 1,
};
using PdfButtonIconScaleMode_Type = std::underlying_type<PdfButtonIconScaleMode>::type;
}}