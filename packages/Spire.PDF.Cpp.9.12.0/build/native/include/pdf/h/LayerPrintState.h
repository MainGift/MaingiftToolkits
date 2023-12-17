#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the print state of the Layer
    </summary>
*/
enum class LayerPrintState : int
{
    Allways = 0,
    Nerver = 1,
    PrintWhenVisible = 2,
};
using LayerPrintState_Type = std::underlying_type<LayerPrintState>::type;
}}