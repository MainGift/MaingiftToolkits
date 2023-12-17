#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
<remarks />
*/
enum class StyleSimulations : int
{
    None = 0,
    ItalicSimulation = 1,
    BoldSimulation = 2,
    BoldItalicSimulation = 3,
};
using StyleSimulations_Type = std::underlying_type<StyleSimulations>::type;
}}