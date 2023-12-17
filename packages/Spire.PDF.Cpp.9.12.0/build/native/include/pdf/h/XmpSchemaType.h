#pragma once
#include "pch.h"
namespace Spire{
namespace Pdf{
/*
    <summary>
        Enumerates types of the xmp schema.
    </summary>
*/
enum class XmpSchemaType : int
{
    DublinCoreSchema = 0,
    BasicSchema = 1,
    RightsManagementSchema = 2,
    BasicJobTicketSchema = 3,
    PagedTextSchema = 4,
    PDFSchema = 5,
    Custom = 6,
};
using XmpSchemaType_Type = std::underlying_type<XmpSchemaType>::type;
}}