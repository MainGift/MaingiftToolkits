#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the constant values specifying whether to extend the shading
            beyond the starting and ending points of the axis.
    </summary>
*/
enum class PdfExtend : int
{
    None = 0,
    Start = 1,
    End = 2,
    Both = 3,
};
using PdfExtend_Type = std::underlying_type<PdfExtend>::type;
}}