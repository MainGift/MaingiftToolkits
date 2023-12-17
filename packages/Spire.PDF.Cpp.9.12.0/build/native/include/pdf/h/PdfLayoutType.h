#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies type of paginating.
    </summary>
*/
enum class PdfLayoutType : int
{
    Paginate = 0,
    OnePage = 1,
};
using PdfLayoutType_Type = std::underlying_type<PdfLayoutType>::type;
}}