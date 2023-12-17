#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        The encoding format for the sample data.
    </summary>
*/
enum class PdfSoundEncoding : int
{
    Raw = 0,
    Signed = 1,
    MuLaw = 2,
    ALaw = 3,
};
using PdfSoundEncoding_Type = std::underlying_type<PdfSoundEncoding>::type;
}}