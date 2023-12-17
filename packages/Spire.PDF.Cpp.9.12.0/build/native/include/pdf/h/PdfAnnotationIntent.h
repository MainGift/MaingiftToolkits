#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*

*/
enum class PdfAnnotationIntent : int
{
    FreeTextCallout = 0,
    FreeTextTypeWriter = 1,
};
using PdfAnnotationIntent_Type = std::underlying_type<PdfAnnotationIntent>::type;
}}