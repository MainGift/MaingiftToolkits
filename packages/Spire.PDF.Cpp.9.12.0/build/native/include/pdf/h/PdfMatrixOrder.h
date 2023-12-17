#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Represent the applying order to matrix.
    </summary>
*/
enum class PdfMatrixOrder : int
{
    Prepend = 0,
    Append = 1,
};
using PdfMatrixOrder_Type = std::underlying_type<PdfMatrixOrder>::type;
}}