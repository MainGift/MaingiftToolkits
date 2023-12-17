#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        The layout determine how to display the sign image. 
     </summary>
*/
enum class Security_SignImageLayout : int
{
    None = 0,
    Stretch = 1,
};
using Security_SignImageLayout_Type = std::underlying_type<Security_SignImageLayout>::type;
}}