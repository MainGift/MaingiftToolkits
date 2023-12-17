#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
<remarks />
*/
enum class ItemsChoiceType : int
{
    FigureStructure = 0,
    ListStructure = 1,
    ParagraphStructure = 2,
    TableStructure = 3,
};
using ItemsChoiceType_Type = std::underlying_type<ItemsChoiceType>::type;
}}