#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IPdfTextBoxField.h"
#include "PdfAppearanceField.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents text box field in the PDF form.
    </summary>
*/
class EXPORTS PdfTextBoxField : public virtual PdfAppearanceField/*,public virtual IPdfTextBoxField*/
{
public:
    PdfTextBoxField();
    PdfTextBoxField(intrusive_ptr<PdfPageBase> page, LPCWSTR_S name);
    /*
    <summary>
        Gets or sets the text.
    </summary>
<value>The text of the text box field.</value>
    */
    virtual LPCWSTR_S GetText ();
    /*

    */
    virtual void SetText (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the default value.
    </summary>
<value>The default value of the text box field.</value>
    */
    virtual LPCWSTR_S GetDefaultValue ();
    /*

    */
    virtual void SetDefaultValue (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets a value indicating whether to check spelling.
    </summary>
<value>
  <c>true</c> if check spelling; otherwise, <c>false</c>.</value>
    */
    virtual bool GetSpellCheck ();
    /*

    */
    virtual void SetSpellCheck (bool value);
    /*
    <summary>
        Meaningful only if the MaxLength property is set and the Multiline, Password properties are false.
            If set, the field is automatically divided into as many equally spaced positions, or combs, 
            as the value of MaxLength, and the text is laid out into those combs.
    </summary>
<value>
  <c>true</c> if need to insert spaces; otherwise, <c>false</c>.</value>
    */
    virtual bool GetInsertSpaces ();
    /*

    */
    virtual void SetInsertSpaces (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether this  is multiline.
    </summary>
<value>
  <c>true</c> if multiline; otherwise, <c>false</c>.</value>
    */
    virtual bool GetMultiline ();
    /*

    */
    virtual void SetMultiline (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether this  is password field.
    </summary>
<value>
  <c>true</c> if password field; otherwise, <c>false</c>.</value>
    */
    virtual bool GetPassword ();
    /*

    */
    virtual void SetPassword (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether this  is scrollable.
    </summary>
<value>
  <c>true</c> if scrollable; otherwise, <c>false</c>.</value>
    */
    virtual bool GetScrollable ();
    /*

    */
    virtual void SetScrollable (bool value);
    /*
    <summary>
        Gets or sets the maximum number of characters that can be entered in the text box.
    </summary>
<value>An integer value specifying the maximum number of characters that can be entered in the text box.</value>
    */
    virtual int GetMaxLength ();
    /*

    */
    virtual void SetMaxLength (int value);
private:
};
}}