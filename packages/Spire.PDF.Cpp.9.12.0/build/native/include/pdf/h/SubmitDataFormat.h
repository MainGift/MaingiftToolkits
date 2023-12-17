#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the enumeration of submit data formats.
    </summary>
*/
enum class SubmitDataFormat : int
{
    Html = 0,
    Pdf = 1,
    Fdf = 2,
    Xfdf = 3,
};
using SubmitDataFormat_Type = std::underlying_type<SubmitDataFormat>::type;
}}