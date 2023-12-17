#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the available rendering style of the 3D artwork. 
    </summary>
*/
enum class Pdf3DRenderStyle : int
{
    Solid = 0,
    SolidWireframe = 1,
    Transparent = 2,
    TransparentWireframe = 3,
    BoundingBox = 4,
    TransparentBoundingBox = 5,
    TransparentBoundingBoxOutline = 6,
    Wireframe = 7,
    ShadedWireframe = 8,
    HiddenWireframe = 9,
    Vertices = 10,
    ShadedVertices = 11,
    Illustration = 12,
    SolidOutline = 13,
    ShadedIllustration = 14,
};
using Pdf3DRenderStyle_Type = std::underlying_type<Pdf3DRenderStyle>::type;
}}