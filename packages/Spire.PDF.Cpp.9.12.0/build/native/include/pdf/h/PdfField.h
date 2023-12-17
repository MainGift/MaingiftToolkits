#pragma once
#include "pch.h"
#include "PdfPageBase.h"
#include "PdfForm.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents field of the Pdf document's interactive form.
    </summary>
*/
class EXPORTS PdfField : public virtual Object
{
public:
    /*
    <summary>
        Gets the name.
    </summary>
<value>The name.</value>
    */
    virtual LPCWSTR_S GetName ();
    /*

    */
    LPCWSTR_S GetFullName ();
    /*
    <summary>
        Gets the form.
    </summary>
<value>The form.</value>
    */
    virtual intrusive_ptr<PdfForm> GetForm ();
    /*
    <summary>
        Gets or sets the mapping name to be used when exporting interactive form 
            field data from the document.
    </summary>
<value>The mapping name.</value>
    */
    virtual LPCWSTR_S GetMappingName ();
    /*

    */
    virtual void SetMappingName (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets a value indicating whether this  is export.
    </summary>
<value>
  <c>true</c> if export; otherwise, <c>false</c>.</value>
    */
    virtual bool GetExport ();
    /*

    */
    virtual void SetExport (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether [read only].
    </summary>
<value> if the field is read only, set to <c>true</c>.</value>
    */
    virtual bool GetReadOnly ();
    /*

    */
    virtual void SetReadOnly (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether this  is required.
    </summary>
<value>
  <c>true</c> if required; otherwise, <c>false</c>.</value>
    */
    virtual bool GetRequired ();
    /*

    */
    virtual void SetRequired (bool value);
    /*
    <summary>
        Gets or sets the tool tip.
    </summary>
<value>The tool tip.</value>
    */
    virtual LPCWSTR_S GetToolTip ();
    /*

    */
    virtual void SetToolTip (LPCWSTR_S value);
    /*
    <summary>
        Gets the page.
    </summary>
<value>The page.</value>
    */
    virtual intrusive_ptr<PdfPageBase> GetPage ();
    /*
    <summary>
        Gets or sets a value indicating whether this  is flatten.
    </summary>
    */
    virtual bool GetFlatten ();
    /*

    */
    virtual void SetFlatten (bool value);
private:
};
}}