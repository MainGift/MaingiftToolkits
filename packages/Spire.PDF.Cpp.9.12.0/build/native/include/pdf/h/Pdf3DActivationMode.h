#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the available modes for activating a 3D annotation. 
    </summary>
*/
enum class Pdf3DActivationMode : int
{
    PageOpen = 0,
    PageVisible = 1,
    ExplicitActivation = 2,
};
using Pdf3DActivationMode_Type = std::underlying_type<Pdf3DActivationMode>::type;
}}