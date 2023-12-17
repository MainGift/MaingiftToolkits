#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Signature type
    </summary>
*/
enum class SignInfoType : int
{
    SignInformation = 0,
    DigitalSigner = 1,
};
using SignInfoType_Type = std::underlying_type<SignInfoType>::type;
}}