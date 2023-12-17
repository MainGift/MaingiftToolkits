#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*

*/
enum class TypeEncodingCmap : int
{
    ENCODING = 0,
    CMAP = 1,
};
using TypeEncodingCmap_Type = std::underlying_type<TypeEncodingCmap>::type;
}}