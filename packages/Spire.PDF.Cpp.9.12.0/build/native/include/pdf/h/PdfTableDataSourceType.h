#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Specifies the datasource type.
    </summary>
*/
enum class PdfTableDataSourceType : int
{
    External = 0,
    TableDirect = 1,
};
using PdfTableDataSourceType_Type = std::underlying_type<PdfTableDataSourceType>::type;
}}