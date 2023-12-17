#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the available clipping style of the 3D annotation.
    </summary>
*/
enum class Pdf3DProjectionClipStyle : int
{
    ExplicitNearFar = 0,
    AutomaticNearFar = 1,
};
using Pdf3DProjectionClipStyle_Type = std::underlying_type<Pdf3DProjectionClipStyle>::type;
}}