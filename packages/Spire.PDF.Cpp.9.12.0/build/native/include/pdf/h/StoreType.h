#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the naming a system store.
    </summary>
*/
enum class StoreType : int
{
    MY = 0,
    ROOT = 1,
    CA = 2,
    SPC = 3,
};
using StoreType_Type = std::underlying_type<StoreType>::type;
}}