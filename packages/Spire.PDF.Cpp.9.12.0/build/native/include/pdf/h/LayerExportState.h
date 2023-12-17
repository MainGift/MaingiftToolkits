#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the export state of the Layer
    </summary>
*/
enum class LayerExportState : int
{
    Allways = 0,
    Nerver = 1,
    ExportWhenVisible = 2,
};
using LayerExportState_Type = std::underlying_type<LayerExportState>::type;
}}