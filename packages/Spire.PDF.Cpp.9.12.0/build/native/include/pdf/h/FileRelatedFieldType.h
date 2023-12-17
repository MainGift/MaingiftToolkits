#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        File related field Type.
    </summary>
*/
enum class FileRelatedFieldType : int
{
    FileName = 0,
    Desc = 1,
    ModDate = 2,
    CreationDate = 3,
    Size = 4,
};
using FileRelatedFieldType_Type = std::underlying_type<FileRelatedFieldType>::type;
}}