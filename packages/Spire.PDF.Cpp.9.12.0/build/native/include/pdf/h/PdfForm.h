#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfFormFieldCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents interactive form of the Pdf document.
    </summary>
*/
class EXPORTS PdfForm : public virtual Object
{
public:
    /*
    <summary>
        Gets the fields.
    </summary>
<value>The Form fields.</value>
    */
    intrusive_ptr<PdfFormFieldCollection> GetFields ();
    /*
    <summary>
        Gets or sets a value indicating whether this  is flatten.
    </summary>
    */
    bool GetIsFlatten ();
    /*

    */
    void SetIsFlatten (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether the form is read only.
    </summary>
<value>
  <c>true</c> if the form is read only; otherwise, <c>false</c>.</value>
    */
    virtual bool GetReadOnly ();
    /*

    */
    virtual void SetReadOnly (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether [field auto naming].
    </summary>
    */
    bool GetAutoNaming ();
    /*

    */
    void SetAutoNaming (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether the viewer must generate appearances for fields.
    </summary>
<value>
  <c>true</c> if viewer must generate appearance; otherwise, <c>false</c>.</value>
    */
    virtual bool GetNeedAppearances ();
    /*

    */
    virtual void SetNeedAppearances (bool value);
private:
};
}}