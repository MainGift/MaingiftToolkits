#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the format of Export or Import data.
    </summary>
*/
enum class DataFormat : int
{
    Xml = 0,
    Fdf = 1,
    XFdf = 2,
};
using DataFormat_Type = std::underlying_type<DataFormat>::type;
}}