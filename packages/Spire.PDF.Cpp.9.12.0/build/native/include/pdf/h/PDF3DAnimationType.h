#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the available animation style for rendering the 3D artwork. 
    </summary>
*/
enum class PDF3DAnimationType : int
{
    None = 0,
    Linear = 1,
    Oscillating = 2,
};
using PDF3DAnimationType_Type = std::underlying_type<PDF3DAnimationType>::type;
}}