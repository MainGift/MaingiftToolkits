#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies an activation state of the 3D annotation.
    </summary>
*/
enum class Pdf3DActivationState : int
{
    Instantiated = 0,
    Live = 1,
};
using Pdf3DActivationState_Type = std::underlying_type<Pdf3DActivationState>::type;
}}