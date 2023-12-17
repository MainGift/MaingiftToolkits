#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Break type of the line.
    </summary>
*/
enum class LineType : int
{
    None = 0,
    NewLineBreak = 1,
    LayoutBreak = 2,
    FirstParagraphLine = 4,
    LastParagraphLine = 8,
};
using LineType_Type = std::underlying_type<LineType>::type;
}}