#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        load from  content type
    </summary>
*/
enum class LoadHtmlType : int
{
    URL = 0,
    SourceCode = 1,
};
using LoadHtmlType_Type = std::underlying_type<LoadHtmlType>::type;
}}