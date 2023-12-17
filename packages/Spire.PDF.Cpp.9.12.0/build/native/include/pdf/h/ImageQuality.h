#pragma once
#include "pch.h"
namespace Spire {
    namespace Pdf {
        enum class ImageQuality : int
        {
            High = 0,
            Medium = 1,
            Low = 2
        };
        using ImageQuality_Type = std::underlying_type<ImageQuality>::type;
    }
}