#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the available named actions supported by the viewer. 
    </summary>
*/
enum class PdfActionDestination : int
{
    FirstPage = 0,
    LastPage = 1,
    NextPage = 2,
    PrevPage = 3,
};
using PdfActionDestination_Type = std::underlying_type<PdfActionDestination>::type;
}}