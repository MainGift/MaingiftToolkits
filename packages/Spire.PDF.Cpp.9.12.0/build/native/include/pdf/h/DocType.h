#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        OOX file type
    </summary>
<author>linyaohu</author>
*/
enum class DocType : int
{
    Word = 0,
    Excel = 1,
    Powerpoint = 2,
    Unknown = 3,
};
using DocType_Type = std::underlying_type<DocType>::type;
}}