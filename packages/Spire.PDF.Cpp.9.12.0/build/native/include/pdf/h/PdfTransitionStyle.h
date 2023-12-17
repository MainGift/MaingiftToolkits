#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Enumeration of possible transition styles when moving to the page from another 
            during a presentation
    </summary>
*/
enum class PdfTransitionStyle : int
{
    Split = 0,
    Blinds = 1,
    Box = 2,
    Wipe = 3,
    Dissolve = 4,
    Glitter = 5,
    Replace = 6,
    Fly = 7,
    Push = 8,
    Cover = 9,
    Uncover = 10,
    Fade = 11,
};
using PdfTransitionStyle_Type = std::underlying_type<PdfTransitionStyle>::type;
}}