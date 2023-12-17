#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the available data formats for submitting the form data.
    </summary>
*/
enum class PdfSubmitFormFlags : int
{
    IncludeExclude = 1,
    IncludeNoValueFields = 2,
    ExportFormat = 4,
    GetMethod = 8,
    SubmitCoordinates = 16,
    Xfdf = 32,
    IncludeAppendSaves = 64,
    IncludeAnnotations = 128,
    SubmitPdf = 256,
    CanonicalFormat = 512,
    ExclNonUserAnnots = 1024,
    ExclFKey = 2048,
    EmbedForm = 4096,
};
using PdfSubmitFormFlags_Type = std::underlying_type<PdfSubmitFormFlags>::type;
}}