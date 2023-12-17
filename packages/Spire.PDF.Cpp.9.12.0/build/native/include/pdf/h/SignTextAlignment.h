#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the alignment type of signature text.
    </summary>
*/
enum class SignTextAlignment : int
{
    Left = 0,
    Center = 1,
    Right = 2,
};
using SignTextAlignment_Type = std::underlying_type<SignTextAlignment>::type;
}}