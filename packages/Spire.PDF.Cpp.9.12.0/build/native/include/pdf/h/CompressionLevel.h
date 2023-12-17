#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Compression level.
    </summary>
*/
enum class CompressionLevel : int
{
    NoCompression = 0,
    BestSpeed = 1,
    BelowNormal = 3,
    Normal = 5,
    AboveNormal = 7,
    Best = 9,
};
using CompressionLevel_Type = std::underlying_type<CompressionLevel>::type;
}}