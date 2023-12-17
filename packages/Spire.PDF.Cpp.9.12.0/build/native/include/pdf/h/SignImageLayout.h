#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        The layout determine how to display the sign image. 
     </summary>
*/
enum class SignImageLayout : int
{
    None = 0,
    Stretch = 1,
};
using SignImageLayout_Type = std::underlying_type<SignImageLayout>::type;
}}