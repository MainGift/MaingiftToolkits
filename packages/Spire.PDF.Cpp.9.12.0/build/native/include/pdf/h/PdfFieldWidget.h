#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfField.h"
#include "PdfFormWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents base class for loaded fields.
    </summary>
*/
class EXPORTS PdfFieldWidget : public virtual PdfField
{
public:
    /*
    <summary>
        Gets the name of the field.
    </summary>
<value>A string value specifying the name of the field.</value>
    */
    virtual LPCWSTR_S GetName ();
    /*
    <summary>
        Gets or sets the mapping name to be used when exporting interactive form
            field data from the document.
    </summary>
<value>A string value specifying the mapping name of the field. </value>
    */
    virtual LPCWSTR_S GetMappingName ();
    /*

    */
    virtual void SetMappingName (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the tool tip.
    </summary>
    */
    virtual LPCWSTR_S GetToolTip ();
    /*

    */
    virtual void SetToolTip (LPCWSTR_S value);
    /*
    <summary>
        Gets the page.
    </summary>
    */
    virtual intrusive_ptr<PdfPageBase> GetPage ();
    /*
    <summary>
        Gets or sets a value indicating whether [read only].
    </summary>
<value>True if the field is read-only, false otherwise. Default is false.</value>
    */
    virtual bool GetReadOnly ();
    /*

    */
    virtual void SetReadOnly (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether this  is required.
    </summary>
<value>True if the field is required, false otherwise. Default is false.</value>
    */
    virtual bool GetRequired ();
    /*

    */
    virtual void SetRequired (bool value);
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
        Gets the form.
    </summary>
<value>The form.</value>
    */
    intrusive_ptr<PdfFormWidget> GetFormWidget ();
    /*
    <summary>
        Re set the page.
    </summary>
    <param name="page">The page</param>
    */
    void ReSetPage (intrusive_ptr<PdfPageBase> page);
    /*
    <summary>
        Sets the name of the field.
    </summary>
    <param name="name">New name of the field.</param>
    */
    void SetName (LPCWSTR_S name);
    /*
    <summary>
        Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}