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
        Represents Pdf form's submit action.
    </summary>
<remarks>This type of action allows a user to go to a resource on the Internet, tipically a hypertext link. </remarks>
*/
class EXPORTS PdfSubmitAction : public virtual PdfFormAction
{
public:
    PdfSubmitAction();
    PdfSubmitAction(LPCWSTR_S url);
    /*
<value>An string value specifying the full URI for the internet resource. </value>
    */
    LPCWSTR_S GetUrl ();
    /*
    <summary>
        Gets or sets the HTTP method.
    </summary>
<value>The HTTP method.</value>
    */
    HttpMethod GetHttpMethod ();
    /*

    */
    void SetHttpMethod (HttpMethod value);
    /*
    <summary>
        If set, any submitted field values representing dates are converted to the 
            standard format. The interpretation of a form field as a date is not specified 
            explicitly in the field itself but only in the JavaScript code that processes it.
    </summary>
<value>
  <c>true</c> if use canonical date time format when submit data; otherwise, <c>false</c>.
            </value>
    */
    bool GetCanonicalDateTimeFormat ();
    /*

    */
    void SetCanonicalDateTimeFormat (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether to submit mouse pointer coordinates. If set, 
            the coordinates of the mouse click that caused the submit-form action are transmitted 
            as part of the form data. 
    </summary>
<value>
  <c>true</c> if submit coordinates; otherwise, <c>false</c>.</value>
    */
    bool GetSubmitCoordinates ();
    /*

    */
    void SetSubmitCoordinates (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether to submit fields without value.
            If set, all fields designated by the Fields collection and the 
            flag are submitted, regardless of whether they have a value. For fields without a 
            value, only the field name is transmitted.
    </summary>
<value>
  <c>true</c> if submit fields without value or the empty ones; otherwise, <c>false</c>.
            </value>
    */
    bool GetIncludeNoValueFields ();
    /*

    */
    void SetIncludeNoValueFields (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether to submit form's incremental updates.
            Meaningful only when the form is being submitted in Forms Data Format.
            If set, the submitted FDF file includes the contents of all incremental 
            updates to the underlying PDF document. If clear, the incremental updates are 
            not included.
    </summary>
<value>
  <c>true</c> if incremental updates should be submitted; otherwise, <c>false</c>.
            </value>
    */
    bool GetIncludeIncrementalUpdates ();
    /*

    */
    void SetIncludeIncrementalUpdates (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether to submit annotations.
            Meaningful only when the form is being submitted in Forms Data Format.
            If set, the submitted FDF file includes all markup annotations in the 
            underlying PDF document. If clear, markup annotations are not included.
    </summary>
<value>
  <c>true</c> if annotations should be submitted; otherwise, <c>false</c>.</value>
    */
    bool GetIncludeAnnotations ();
    /*

    */
    void SetIncludeAnnotations (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether to exclude non user annotations form submit 
            data stream. Meaningful only when the form is being submitted in Forms Data Format 
            and the  property is set to true.
    </summary>
<value>
  <c>true</c> if non user annotations should be excluded; otherwise, <c>false</c>.
            </value>
    */
    bool GetExcludeNonUserAnnotations ();
    /*

    */
    void SetExcludeNonUserAnnotations (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether to include form to submit data stream.
            Meaningful only when the form is being submitted in Forms Data Format.
            If set, the  property is a file name containing an embedded file 
            stream representing the PDF file from which the FDF is being submitted.
    </summary>
<value>
  <c>true</c> if form should be embedded to submit stream; otherwise, <c>false</c>.</value>
    */
    bool GetEmbedForm ();
    /*

    */
    void SetEmbedForm (bool value);
    /*
    <summary>
        Gets or sets the submit data format.
    </summary>
<value>The submit data format.</value>
    */
    SubmitDataFormat GetDataFormat ();
    /*

    */
    void SetDataFormat (SubmitDataFormat value);
    /*
    <summary>
        Gets or sets a value indicating whether fields contained in Fields
            collection will be included for submitting.
    </summary>
<value>
  <c>true</c> if include; otherwise, <c>false</c>.</value>
<remarks>
            If Include property is true, only the fields in this collection will be submitted.
            If Include property is false, the fields in this collection are not submitted
            and only the remaining form fields are submitted.
            If the collection is null or empty, then all the form fields are reset
            and the Include property is ignored.
            If the field has Export property set to false it will be not included for 
            submitting in any case.
            </remarks>
    */
    virtual bool GetInclude ();
    /*

    */
    virtual void SetInclude (bool value);
private:
};
}}