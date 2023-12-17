#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the type of encryption algorithm used.
    </summary>
*/
enum class PdfEncryptionAlgorithm : int
{
    RC4 = 1,
    AES = 2,
};
using PdfEncryptionAlgorithm_Type = std::underlying_type<PdfEncryptionAlgorithm>::type;
}}