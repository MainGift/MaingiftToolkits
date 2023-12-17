#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Configuer Text,Show Sign content
    </summary>
*/
enum class SignatureConfiguerText : int
{
    Name = 1,
    Location = 2,
    DistinguishedName = 4,
    Logo = 8,
    Date = 16,
    Reason = 32,
    ContactInfo = 64,
    Labels = 128,
};
using SignatureConfiguerText_Type = std::underlying_type<SignatureConfiguerText>::type;
}}