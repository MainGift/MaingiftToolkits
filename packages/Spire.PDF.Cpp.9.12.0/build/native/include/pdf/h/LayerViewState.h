#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the view state of the Layer
    </summary>
*/
enum class LayerViewState : int
{
    Allways = 0,
    Nerver = 1,
    ViewWhenOpen = 2,
};
using LayerViewState_Type = std::underlying_type<LayerViewState>::type;
}}