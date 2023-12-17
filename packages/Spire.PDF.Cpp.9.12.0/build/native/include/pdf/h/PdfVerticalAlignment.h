#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the type of Vertical alignment.
    </summary>
*/
enum class PdfVerticalAlignment : int
{
    Top = 0,
    Middle = 1,
    Bottom = 2,
};
using PdfVerticalAlignment_Type = std::underlying_type<PdfVerticalAlignment>::type;
}}