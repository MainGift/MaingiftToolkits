#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
<remarks />
*/
enum class FragmentType : int
{
    Content = 0,
    Header = 1,
    Footer = 2,
};
using FragmentType_Type = std::underlying_type<FragmentType>::type;
}}