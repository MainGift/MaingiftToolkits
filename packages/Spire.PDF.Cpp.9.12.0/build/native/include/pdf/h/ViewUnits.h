#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
<remarks />
*/
enum class ViewUnits : int
{
    Absolute = 0,
};
using ViewUnits_Type = std::underlying_type<ViewUnits>::type;
}}