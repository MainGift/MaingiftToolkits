#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        A name specifying the tab order to be used for annotations on the page.
    </summary>
*/
enum class TabOrder : int
{
    Row = 0,
    Column = 1,
    Structure = 2,
    Unspecified = 3,
};
using TabOrder_Type = std::underlying_type<TabOrder>::type;
}}