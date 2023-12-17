#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS IPdfComboBoxField : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets a value indicating whether this  is editable.
    </summary>
<value>
  <c>true</c> if editable; otherwise, <c>false</c>.</value>
    */
    virtual bool GetEditable ()=0;
    /*

    */
    virtual void SetEditable (bool value)=0;
    /*
    <summary>
        Gets or sets the first selected item in the list. 
    </summary>
<value>The index of the selected item.</value>
    */
    virtual int GetSelectedIndex ()=0;
    /*

    */
    virtual void SetSelectedIndex (int value)=0;
    /*
    <summary>
        Gets or sets the value of the first selected item in the list.
    </summary>
<value>The selected value.</value>
    */
    virtual LPCWSTR_S GetSelectedValue ()=0;
    /*

    */
    virtual void SetSelectedValue (LPCWSTR_S value)=0;
    /*
    <summary>
        Gets the first selected item in the list.
    </summary>
<value>The selected item.</value>
    */
    virtual intrusive_ptr<PdfListFieldItem> GetSelectedItem ()=0;
    /*
    <summary>
        Gets or sets the bounds.
    </summary>
<value>The bounds.</value>
    */
    virtual intrusive_ptr<RectangleF> GetBounds ()=0;
    /*

    */
    virtual void SetBounds (intrusive_ptr<RectangleF> value)=0;
    /*
    <summary>
        Gets or sets the location.
    </summary>
<value>The location.</value>
    */
    virtual intrusive_ptr<PointF> GetLocation ()=0;
    /*

    */
    virtual void SetLocation (intrusive_ptr<PointF> value)=0;
    /*
    <summary>
        Gets or sets the size.
    </summary>
<value>The size.</value>
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
    virtual intrusive_ptr<PdfRGBColor> GetBorderColor ()=0;
    /*

    */
    virtual void SetBorderColor (intrusive_ptr<PdfRGBColor> value)=0;
    /*
    <summary>
        Gets or sets the color of the background.
    </summary>
<value>The color of the background.</value>
    */
    virtual intrusive_ptr<PdfRGBColor> GetBackColor ()=0;
    /*

    */
    virtual void SetBackColor (intrusive_ptr<PdfRGBColor> value)=0;
    /*
    <summary>
        Gets or sets the color of the text.
    </summary>
<value>The color of the text.</value>
    */
    virtual intrusive_ptr<PdfRGBColor> GetForeColor ()=0;
    /*

    */
    virtual void SetForeColor (intrusive_ptr<PdfRGBColor> value)=0;
    /*
    <summary>
        Gets or sets the width of the border.
    </summary>
<value>The width of the border.</value>
    */
    virtual float GetBorderWidth ()=0;
    /*

    */
    virtual void SetBorderWidth (float value)=0;
    /*
    <summary>
        Gets or sets the highlighting mode.
    </summary>
<value>The highlighting mode.</value>
    */
    virtual PdfHighlightMode GetHighlightMode ()=0;
    /*

    */
    virtual void SetHighlightMode (PdfHighlightMode value)=0;
    /*
    <summary>
        Gets or sets the font.
    </summary>
<value>The font.</value>
    */
    virtual intrusive_ptr<PdfFontBase> GetFont ()=0;
    /*

    */
    virtual void SetFont (intrusive_ptr<PdfFontBase> value)=0;
    /*
    <summary>
        Gets or sets the text alignment.
    </summary>
<value>The text alignment.</value>
<remarks>This property is meaningful for fields containing variable text only.
            </remarks>
    */
    virtual PdfTextAlignment GetTextAlignment ()=0;
    /*

    */
    virtual void SetTextAlignment (PdfTextAlignment value)=0;
    /*
    <summary>
        Gets the actions of the field.
    </summary>
<value>The actions.</value>
    */
    virtual intrusive_ptr<PdfFieldActions> GetActions ()=0;
    /*
    <summary>
        Gets or sets the border style.
    </summary>
<value>The border style.</value>
    */
    virtual PdfBorderStyle GetBorderStyle ()=0;
    /*

    */
    virtual void SetBorderStyle (PdfBorderStyle value)=0;
    /*
    <summary>
        Gets or sets a value indicating whether this  is visible.
    </summary>
<value>
  <c>true</c> if visible; otherwise, <c>false</c>.</value>
    */
    virtual bool GetVisible ()=0;
    /*

    */
    virtual void SetVisible (bool value)=0;
    /*
    <summary>
        Gets the name.
    </summary>
<value>The name.</value>
    */
    virtual LPCWSTR_S GetName ()=0;
    /*
    <summary>
        Gets the form.
    </summary>
<value>The form.</value>
    */
    virtual intrusive_ptr<PdfForm> GetForm ()=0;
    /*
    <summary>
        Gets or sets the mapping name to be used when exporting interactive form 
            field data from the document.
    </summary>
<value>The mapping name.</value>
    */
    virtual LPCWSTR_S GetMappingName ()=0;
    /*

    */
    virtual void SetMappingName (LPCWSTR_S value)=0;
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
        Gets or sets a value indicating whether [read only].
    </summary>
<value> if the field is read only, set to <c>true</c>.</value>
    */
    virtual bool GetReadOnly ()=0;
    /*

    */
    virtual void SetReadOnly (bool value)=0;
    /*
    <summary>
        Gets or sets a value indicating whether this  is required.
    </summary>
<value>
  <c>true</c> if required; otherwise, <c>false</c>.</value>
    */
    virtual bool GetRequired ()=0;
    /*

    */
    virtual void SetRequired (bool value)=0;
    /*
    <summary>
        Gets or sets the tool tip.
    </summary>
<value>The tool tip.</value>
    */
    virtual LPCWSTR_S GetToolTip ()=0;
    /*

    */
    virtual void SetToolTip (LPCWSTR_S value)=0;
    /*
    <summary>
        Gets the page.
    </summary>
<value>The page.</value>
    */
    virtual intrusive_ptr<PdfPageBase> GetPage ()=0;
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