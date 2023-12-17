#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Modes to determine what and how to dispay the signature infomation.
    </summary>
*/
enum class GraphicMode : int
{
    SignDetail = 0,
    SignImageOnly = 1,
    SignNameOnly = 2,
    SignNameAndSignDetail = 3,
    SignImageAndSignDetail = 4,
};
using GraphicMode_Type = std::underlying_type<GraphicMode>::type;
}}