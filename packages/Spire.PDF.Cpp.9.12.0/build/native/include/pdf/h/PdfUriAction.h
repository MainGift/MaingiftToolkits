#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfAction.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents an action which resolves unique resource identifier.
    </summary>
*/
class EXPORTS PdfUriAction : public virtual PdfAction
{
public:
    /*
    <summary>
        Gets or sets the unique resource identifier.
    </summary>
<value>The unique resource identifier.</value>
    */
    LPCWSTR_S GetUri ();
    /*

    */
    void SetUri (LPCWSTR_S value);
private:
};
}}