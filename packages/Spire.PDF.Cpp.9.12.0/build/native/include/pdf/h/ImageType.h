#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*

*/
enum class ImageType : int
{
    Bitmap = 0,
    Metafile = 1,
};
using ImageType_Type = std::underlying_type<ImageType>::type;
}}