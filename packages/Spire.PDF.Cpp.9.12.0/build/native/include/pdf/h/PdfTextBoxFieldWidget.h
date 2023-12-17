#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IPdfTextBoxField.h"
#include "PdfStyledFieldWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the text box field of an existing PDF document`s form.
    </summary>
*/
class EXPORTS PdfTextBoxFieldWidget : public virtual PdfStyledFieldWidget/*,public virtual IPdfTextBoxField*/
{
public:
    /*
    <summary>
        Gets or Set the fore color of the field.
    </summary>
<value>A  object specifying the background color of field.</value>
    */
    virtual intrusive_ptr<PdfRGBColor> GetForeColor ();
    /*

    */
    virtual void SetForeColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Get or Set the text alignment in a text box.
    </summary>
<value>A  enumeration member specifying the text alignment in a text box.</value>
    */
    virtual PdfTextAlignment GetTextAlignment ();
    /*

    */
    virtual void SetTextAlignment (PdfTextAlignment value);
    /*
    <summary>
        Get or Set the HighLightMode of the Field.
    </summary>
<value>A  enumeration member specifying the highlight mode in a text box.</value>
    */
    virtual PdfHighlightMode GetHighlightMode ();
    /*

    */
    virtual void SetHighlightMode (PdfHighlightMode value);
    /*
    <summary>
        Gets or Set value of the text box field.
    </summary>
<value>A string value representing the value of the item. </value>
    */
    virtual LPCWSTR_S GetText ();
    /*

    */
    virtual void SetText (LPCWSTR_S value);
    /*
    <summary>
        Gets or set the default value of the field.
    </summary>
<value>A string value representing the default value of the item. </value>
    */
    virtual LPCWSTR_S GetDefaultValue ();
    /*

    */
    virtual void SetDefaultValue (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets a value indicating whether to check spelling.
    </summary>
<value>True if the field content should be checked for spelling erorrs, false otherwise. Default is true.</value>
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
    */
    virtual bool GetInsertSpaces ();
    /*

    */
    virtual void SetInsertSpaces (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether this  is multiline.
    </summary>
<value>True if the field is multiline, false otherwise. Default is false.</value>
    */
    virtual bool GetMultiline ();
    /*

    */
    virtual void SetMultiline (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether this  is password field.
    </summary>
<value>True if the field is a password field, false otherwise. Default is false.</value>
    */
    virtual bool GetPassword ();
    /*

    */
    virtual void SetPassword (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether this  is scrollable.
    </summary>
<value>True if the field content can be scrolled, false otherwise. Default is true.</value>
    */
    virtual bool GetScrollable ();
    /*

    */
    virtual void SetScrollable (bool value);
    /*
    <summary>
        Gets or sets the maximum length of the field, in characters.
    </summary>
<value>A positive integer value specifying the maximum number of characters that can be entered in the text edit field.</value>
    */
    virtual int GetMaxLength ();
    /*

    */
    virtual void SetMaxLength (int value);
    /*
    <summary>
        Gets the collection of text box field items. 
    </summary>
    */
    intrusive_ptr<PdfTextBoxWidgetItemCollection> GetWidgetItems ();
    /*
    <summary>
        Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}