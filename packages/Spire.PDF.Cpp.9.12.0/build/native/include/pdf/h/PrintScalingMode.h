#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the different page scaling option that shall be selected when a print dialog is displayed for this document.
    </summary>
<remarks>Default value is AppDefault.</remarks>
*/
enum class PrintScalingMode : int
{
    AppDefault = 0,
    None = 1,
};
using PrintScalingMode_Type = std::underlying_type<PrintScalingMode>::type;
}}