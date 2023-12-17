#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfFormAction.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents Pdf form's reset action.
    </summary>
<remarks>This action allows a user to reset the form fields to their default values. </remarks>
*/
class EXPORTS PdfResetAction : public virtual PdfFormAction
{
public:
    /*
    <summary>
        Gets or sets a value indicating whether fields contained in Fields
            collection will be included for resetting.
    </summary>
<value>
  <c>true</c> if include; otherwise, <c>false</c>.</value>
<remarks>
            If Include property is true, only the fields in this collection will be reset.
            If Include property is false, the fields in this collection are not reset
            and only the remaining form fields are reset.
            If the collection is null or empty, then all the form fields are reset
            and the Include property is ignored.
            </remarks>
    */
    virtual bool GetInclude ();
    /*

    */
    virtual void SetInclude (bool value);
private:
};
}}