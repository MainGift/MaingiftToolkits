#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the available permissions set for the signature.
    </summary>
*/
enum class PdfPermissionsFlags : int
{
    None = 0,
    Default = 2876,
    Print = 4,
    EditContent = 8,
    CopyContent = 16,
    EditAnnotations = 32,
    FillFields = 256,
    AccessibilityCopyContent = 512,
    AssembleDocument = 1024,
    FullQualityPrint = 2244,
};
using PdfPermissionsFlags_Type = std::underlying_type<PdfPermissionsFlags>::type;
}}