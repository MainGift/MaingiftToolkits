#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
<summary></summary>
*/
enum class PdfHorizontalOverflowType : int
{
    NextPage = 0,
    LastPage = 1,
};
using PdfHorizontalOverflowType_Type = std::underlying_type<PdfHorizontalOverflowType>::type;
}}