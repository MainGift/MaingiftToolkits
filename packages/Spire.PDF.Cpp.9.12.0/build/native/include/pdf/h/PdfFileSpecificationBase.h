#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents base class for file specification objects.
    </summary>
*/
class EXPORTS PdfFileSpecificationBase : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the name of the file.
    </summary>
<value>The name of the file.</value>
    */
    virtual LPCWSTR_S GetFileName ();
    /*

    */
    virtual void SetFileName (LPCWSTR_S value);
private:
};
}}