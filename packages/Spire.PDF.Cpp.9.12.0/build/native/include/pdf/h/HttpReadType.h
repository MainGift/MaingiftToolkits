#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the different way of presenting the document at the client browser.
    </summary>
*/
enum class HttpReadType : int
{
    Open = 0,
    Save = 1,
};
using HttpReadType_Type = std::underlying_type<HttpReadType>::type;
}}