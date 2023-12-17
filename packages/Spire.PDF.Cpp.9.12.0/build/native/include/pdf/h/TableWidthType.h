#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies type for table width.
    </summary>
*/
enum class TableWidthType : int
{
    FitPageWidth = 0,
    Customs = 1,
};
using TableWidthType_Type = std::underlying_type<TableWidthType>::type;
}}