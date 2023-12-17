#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the available styles for applying light to 3D artwork. 
    </summary>
*/
enum class Pdf3DLightingStyle : int
{
    Artwork = 0,
    None = 1,
    White = 2,
    Day = 3,
    Night = 4,
    Hard = 5,
    Primary = 6,
    Blue = 7,
    Red = 8,
    Cube = 9,
    CAD = 10,
    Headlamp = 11,
};
using Pdf3DLightingStyle_Type = std::underlying_type<Pdf3DLightingStyle>::type;
}}