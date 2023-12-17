#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the available projection type of the 3D annotation.
    </summary>
*/
enum class Pdf3DProjectionType : int
{
    Orthographic = 0,
    Perspective = 1,
};
using Pdf3DProjectionType_Type = std::underlying_type<Pdf3DProjectionType>::type;
}}