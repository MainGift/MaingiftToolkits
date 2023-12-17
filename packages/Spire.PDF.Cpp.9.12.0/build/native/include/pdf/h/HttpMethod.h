#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies Http request method.
    </summary>
*/
enum class HttpMethod : int
{
    Get = 0,
    Post = 1,
};
using HttpMethod_Type = std::underlying_type<HttpMethod>::type;
}}