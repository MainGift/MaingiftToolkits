#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS IPdfTextBoxField : public virtual Object
{
public:
    /*
    <summary>
        Get or Set the background color of the field
    </summary>
<value>A  object specifying the background color of field. </value>
    */
    virtual intrusive_ptr<PdfRGBColor> GetBackColor ()=0;
    /*

    */
    virtual void SetBackColor (intrusive_ptr<PdfRGBColor> value)=0;
    /*
    <summary>
        Gets or Set the fore color of the field.
    </summary>
<value>A  object specifying the background color of field.</value>
    */
    virtual intrusive_ptr<PdfRGBColor> GetForeColor ()=0;
    /*

    */
    virtual void SetForeColor (intrusive_ptr<PdfRGBColor> value)=0;
    /*
    <summary>
        Get or Set the text alignment in a text box.
    </summary>
<value>A  enumeration member specifying the text alignment in a text box.</value>
    */
    virtual PdfTextAlignment GetTextAlignment ()=0;
    /*

    */
    virtual void SetTextAlignment (PdfTextAlignment value)=0;
    /*
    <summary>
        Get or Set the HighLightMode of the Field.
    </summary>
<value>A  enumeration member specifying the highlight mode in a text box.</value>
    */
    virtual PdfHighlightMode GetHighlightMode ()=0;
    /*

    */
    virtual void SetHighlightMode (PdfHighlightMode value)=0;
    /*
    <summary>
        Gets or Set value of the text box field.
    </summary>
<value>A string value representing the value of the item. </value>
    */
    virtual LPCWSTR_S GetText ()=0;
    /*

    */
    virtual void SetText (LPCWSTR_S value)=0;
    /*
    <summary>
        Gets or set the default value of the field.
    </summary>
<value>A string value representing the default value of the item. </value>
    */
    virtual LPCWSTR_S GetDefaultValue ()=0;
    /*

    */
    virtual void SetDefaultValue (LPCWSTR_S value)=0;
    /*
    <summary>
        Gets or sets a value indicating whether to check spelling.
    </summary>
<value>True if the field content should be checked for spelling erorrs, false otherwise. Default is true.</value>
    */
    virtual bool GetSpellCheck ()=0;
    /*

    */
    virtual void SetSpellCheck (bool value)=0;
    /*
    <summary>
        Meaningful only if the MaxLength property is set and the Multiline, Password properties are false.
            If set, the field is automatically divided into as many equally spaced positions, or combs, 
            as the value of MaxLength, and the text is laid out into those combs.
    </summary>
    */
    virtual bool GetInsertSpaces ()=0;
    /*

    */
    virtual void SetInsertSpaces (bool value)=0;
    /*
    <summary>
        Gets or sets a value indicating whether this  is multiline.
    </summary>
<value>True if the field is multiline, false otherwise. Default is false.</value>
    */
    virtual bool GetMultiline ()=0;
    /*

    */
    virtual void SetMultiline (bool value)=0;
    /*
    <summary>
        Gets or sets a value indicating whether this  is password field.
    </summary>
<value>True if the field is a password field, false otherwise. Default is false.</value>
    */
    virtual bool GetPassword ()=0;
    /*

    */
    virtual void SetPassword (bool value)=0;
    /*
    <summary>
        Gets or sets a value indicating whether this  is scrollable.
    </summary>
<value>True if the field content can be scrolled, false otherwise. Default is true.</value>
    */
    virtual bool GetScrollable ()=0;
    /*

    */
    virtual void SetScrollable (bool value)=0;
    /*
    <summary>
        Gets or sets the maximum length of the field, in characters.
    </summary>
<value>A positive integer value specifying the maximum number of characters that can be entered in the text edit field.</value>
    */
    virtual int GetMaxLength ()=0;
    /*

    */
    virtual void SetMaxLength (int value)=0;
    /*
    <summary>
        Gets the actions of the field.
    </summary>
<value>The actions.</value>
    */
    virtual intrusive_ptr<PdfFieldActions> GetActions ()=0;
    /*
    <summary>
        Gets or sets the bounds.
    </summary>
    */
    virtual intrusive_ptr<RectangleF> GetBounds ()=0;
    /*

    */
    virtual void SetBounds (intrusive_ptr<RectangleF> value)=0;
    /*
    <summary>
        Gets or sets the location.
    </summary>
    */
    virtual intrusive_ptr<PointF> GetLocation ()=0;
    /*

    */
    virtual void SetLocation (intrusive_ptr<PointF> value)=0;
    /*
    <summary>
        Gets or sets the size.
    </summary>
    */
    virtual intrusive_ptr<SizeF> GetSize ()=0;
    /*

    */
    virtual void SetSize (intrusive_ptr<SizeF> value)=0;
    /*
    <summary>
        Gets or sets the color of the border.
    </summary>
<value>The color of the border.</value>
    */
    virtual PdfBorderStyle GetBorderStyle ()=0;
    /*

    */
    virtual void SetBorderStyle (PdfBorderStyle value)=0;
    /*
    <summary>
        Gets or sets the color of the border.
    </summary>
<value>The color of the border.</value>
    */
    virtual intrusive_ptr<PdfRGBColor> GetBorderColor ()=0;
    /*

    */
    virtual void SetBorderColor (intrusive_ptr<PdfRGBColor> value)=0;
    /*
    <summary>
        Gets or Sets the width of the border.
    </summary>
<value>The width of the border.</value>
    */
    virtual float GetBorderWidth ()=0;
    /*

    */
    virtual void SetBorderWidth (float value)=0;
    /*
    <summary>
        Gets the font.
    </summary>
<value>The font.</value>
    */
    virtual intrusive_ptr<PdfFontBase> GetFont ()=0;
    /*

    */
    virtual void SetFont (intrusive_ptr<PdfFontBase> value)=0;
    /*
    <summary>
        Gets a value indicating the visibility of the field.
    </summary>
    */
    virtual bool GetVisible ()=0;
    /*
    <summary>
        Gets the name of the field.
    </summary>
<value>A string value specifying the name of the field.</value>
    */
    virtual LPCWSTR_S GetName ()=0;
    /*
    <summary>
        Gets or sets the mapping name to be used when exporting interactive form
            field data from the document.
    </summary>
<value>A string value specifying the mapping name of the field. </value>
    */
    virtual LPCWSTR_S GetMappingName ()=0;
    /*

    */
    virtual void SetMappingName (LPCWSTR_S value)=0;
    /*
    <summary>
        Gets or sets the tool tip.
    </summary>
    */
    virtual LPCWSTR_S GetToolTip ()=0;
    /*

    */
    virtual void SetToolTip (LPCWSTR_S value)=0;
    /*
    <summary>
        Gets the page.
    </summary>
    */
    virtual intrusive_ptr<PdfPageBase> GetPage ()=0;
    /*
    <summary>
        Gets or sets a value indicating whether [read only].
    </summary>
<value>True if the field is read-only, false otherwise. Default is false.</value>
    */
    virtual bool GetReadOnly ()=0;
    /*

    */
    virtual void SetReadOnly (bool value)=0;
    /*
    <summary>
        Gets or sets a value indicating whether this  is required.
    </summary>
<value>True if the field is required, false otherwise. Default is false.</value>
    */
    virtual bool GetRequired ()=0;
    /*

    */
    virtual void SetRequired (bool value)=0;
    /*
    <summary>
        Gets or sets a value indicating whether this  is export.
    </summary>
<value>
  <c>true</c> if export; otherwise, <c>false</c>.</value>
    */
    virtual bool GetExport ()=0;
    /*

    */
    virtual void SetExport (bool value)=0;
    /*
    <summary>
        Gets or sets a value indicating whether this  is flatten.
    </summary>
    */
    virtual bool GetFlatten ()=0;
    /*

    */
    virtual void SetFlatten (bool value)=0;
private:
};
}}