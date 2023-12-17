#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the name of an icon to be used in displaying the sound annotation.
    </summary>
*/
enum class PdfSoundIcon : int
{
    Speaker = 0,
    Mic = 1,
};
using PdfSoundIcon_Type = std::underlying_type<PdfSoundIcon>::type;
}}