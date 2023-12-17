#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Custom field type.
    </summary>
*/
enum class CustomFieldType : int
{
    TextField = 0,
    DateField = 1,
    NumberField = 2,
};
using CustomFieldType_Type = std::underlying_type<CustomFieldType>::type;
}}