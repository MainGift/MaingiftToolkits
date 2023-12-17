#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        The number of sound channels.
    </summary>
*/
enum class PdfSoundChannels : int
{
    Mono = 1,
    Stereo = 2,
};
using PdfSoundChannels_Type = std::underlying_type<PdfSoundChannels>::type;
}}