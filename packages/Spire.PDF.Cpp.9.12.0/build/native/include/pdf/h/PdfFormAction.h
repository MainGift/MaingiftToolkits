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
        Represents the form action base class.
    </summary>
*/
class EXPORTS PdfFormAction : public virtual PdfAction
{
public:
    /*
    <summary>
        Gets or sets a value indicating whether fields contained in  
            collection will be included for resetting or submitting.
    </summary>
<remarks>
            If Include property is true, only the fields in this collection will be reset or submitted.
            If Include property is false, the fields in this collection are not reset or submitted 
            and only the remaining form fields are reset or submitted.
            If the collection is null or empty, then all the form fields are reset 
            and the Include property is ignored.
            </remarks>
<value>
  <c>true</c> if include; otherwise, <c>false</c>.</value>
    */
    virtual bool GetInclude ();
    /*

    */
    virtual void SetInclude (bool value);
    /*
    <summary>
        Gets the fields.
    </summary>
<value>The fields.</value>
    */
    intrusive_ptr<PdfFieldCollection> GetFields ();
private:
};
}}