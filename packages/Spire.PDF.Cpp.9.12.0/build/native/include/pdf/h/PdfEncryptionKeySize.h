#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies length of the encryption key for encryption.
    </summary>
*/
enum class PdfEncryptionKeySize : int
{
    Key40Bit = 1,
    Key128Bit = 2,
    Key256Bit = 3,
};
using PdfEncryptionKeySize_Type = std::underlying_type<PdfEncryptionKeySize>::type;
}}