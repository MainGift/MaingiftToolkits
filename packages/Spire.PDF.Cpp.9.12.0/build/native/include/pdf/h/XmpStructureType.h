#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Enumerates types of the xmp structure.
    </summary>
*/
enum class XmpStructureType : int
{
    Dimensions = 0,
    Font = 1,
    Colorant = 2,
    Thumbnail = 3,
    Job = 4,
};
using XmpStructureType_Type = std::underlying_type<XmpStructureType>::type;
}}