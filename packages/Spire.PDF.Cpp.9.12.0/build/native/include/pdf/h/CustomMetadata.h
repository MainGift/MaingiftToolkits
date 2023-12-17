#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XmpSchema.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents custom Metadata.
    </summary>
*/
class EXPORTS CustomMetadata : public virtual XmpSchema
{
public:
    /*
    <summary>
        Sets the xmp property.
    </summary>
    */
    //LPCWSTR_S GetItem (LPCWSTR_S name);
    ///*

    //*/
    //void SetItem (LPCWSTR_S name,LPCWSTR_S value);
    ///*
    //<summary>
    //    Gets type of the schema.
    //</summary>
    //*/
    //virtual XmpSchemaType GetSchemaType ();
private:
};
}}