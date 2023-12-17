#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies type of the SubSuperScript.
    </summary>
*/
enum class PdfSubSuperScript : int
{
    None = 0,
    SuperScript = 1,
    SubScript = 2,
};
using PdfSubSuperScript_Type = std::underlying_type<PdfSubSuperScript>::type;
}}