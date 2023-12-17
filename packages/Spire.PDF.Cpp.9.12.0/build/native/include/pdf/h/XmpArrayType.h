#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Types of the xmp arrays.
    </summary>
*/
enum class XmpArrayType : int
{
    Unknown = 0,
    Bag = 1,
    Seq = 2,
    Alt = 3,
};
using XmpArrayType_Type = std::underlying_type<XmpArrayType>::type;
}}