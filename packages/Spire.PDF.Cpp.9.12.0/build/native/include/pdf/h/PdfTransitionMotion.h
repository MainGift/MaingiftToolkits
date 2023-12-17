#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Enumeration of transition motions.
    </summary>
*/
enum class PdfTransitionMotion : int
{
    Inward = 0,
    Outward = 1,
};
using PdfTransitionMotion_Type = std::underlying_type<PdfTransitionMotion>::type;
}}