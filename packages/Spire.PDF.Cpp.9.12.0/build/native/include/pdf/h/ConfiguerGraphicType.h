#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Signture Configuer Graphic type
    </summary>
*/
enum class ConfiguerGraphicType : int
{
    No = 0,
    Picture = 1,
    Text = 2,
    PictureSignInformation = 3,
    TextSignInformation = 4,
    SignInformationPicture = 5,
};
using ConfiguerGraphicType_Type = std::underlying_type<ConfiguerGraphicType>::type;
}}