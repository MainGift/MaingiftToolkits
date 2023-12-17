#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the file path type.
    </summary>
*/
enum class PdfFilePathType : int
{
    Relative = 0,
    Absolute = 1,
};
using PdfFilePathType_Type = std::underlying_type<PdfFilePathType>::type;
}}