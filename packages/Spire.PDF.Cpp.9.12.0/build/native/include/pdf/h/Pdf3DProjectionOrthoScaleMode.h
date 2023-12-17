#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the available Ortho projection scaling mode of the 3D annotation.
    </summary>
*/
enum class Pdf3DProjectionOrthoScaleMode : int
{
    Width = 0,
    Height = 1,
    Min = 2,
    Max = 3,
    Absolute = 4,
};
using Pdf3DProjectionOrthoScaleMode_Type = std::underlying_type<Pdf3DProjectionOrthoScaleMode>::type;
}}