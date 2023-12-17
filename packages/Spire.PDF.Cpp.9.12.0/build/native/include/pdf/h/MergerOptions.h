#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        The class can be used to set some options when do merge operation.
    </summary>
*/
class EXPORTS MergerOptions : public virtual Object
{
public:
    MergerOptions();
    /*
    <summary>
        Gets or sets a value indicates whether to merge the fields with the same name into one field. 
    </summary>
    */
    bool GetSameFieldNameToOneField ();
    /*

    */
    void SetSameFieldNameToOneField (bool value);
private:
};
}}