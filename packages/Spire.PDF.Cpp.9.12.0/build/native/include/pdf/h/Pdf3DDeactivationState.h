#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the available states upon deactivating a 3D annotation. 
    </summary>
*/
enum class Pdf3DDeactivationState : int
{
    Uninstantiated = 0,
    Instantiated = 1,
    Live = 2,
};
using Pdf3DDeactivationState_Type = std::underlying_type<Pdf3DDeactivationState>::type;
}}