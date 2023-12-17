#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the available modes for deactivating a 3D annotation. 
    </summary>
*/
enum class Pdf3DDeactivationMode : int
{
    PageClose = 0,
    PageInvisible = 1,
    ExplicitDeactivation = 2,
};
using Pdf3DDeactivationMode_Type = std::underlying_type<Pdf3DDeactivationMode>::type;
}}