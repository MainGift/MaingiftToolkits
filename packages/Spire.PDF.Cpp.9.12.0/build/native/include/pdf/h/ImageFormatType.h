#pragma once
#include "pch.h"
namespace Spire{namespace Pdf{
enum class ImageFormatType : int
{
    Original = 0,
    Png = 1,
    Jpeg = 2,
    Bmp = 3,
};
using ImageFormatType_Type = std::underlying_type<ImageFormatType>::type;
}}