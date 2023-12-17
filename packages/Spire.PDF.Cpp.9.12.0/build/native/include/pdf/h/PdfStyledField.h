#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfField.h"
#include "PdfHighlightMode.h"
#include "PdfFieldActions.h"
#include "PdfBorderStyle.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents form's field with style parameters.
    </summary>
*/
class EXPORTS PdfStyledField : public virtual PdfField
{
public:
    /*
    <summary>
        Gets or sets the bounds.
    </summary>
<value>The bounds.</value>
    */
    virtual intrusive_ptr<RectangleF> GetBounds ();
    /*

    */
    virtual void SetBounds (intrusive_ptr<RectangleF> value);
    /*
    <summary>
        Gets or sets the location.
    </summary>
<value>The location.</value>
    */
    virtual intrusive_ptr<PointF> GetLocation ();
    /*

    */
    virtual void SetLocation (intrusive_ptr<PointF> value);
    /*
    <summary>
        Gets or sets the size.
    </summary>
<value>The size.</value>
    */
    virtual intrusive_ptr<SizeF> GetSize ();
    /*

    */
    virtual void SetSize (intrusive_ptr<SizeF> value);
    /*
    <summary>
        Gets or sets the color of the border.
    </summary>
<value>The color of the border.</value>
    */
    virtual intrusive_ptr<PdfRGBColor> GetBorderColor ();
    /*

    */
    virtual void SetBorderColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets or sets the color of the background.
    </summary>
<value>The color of the background.</value>
    */
    virtual intrusive_ptr<PdfRGBColor> GetBackColor ();
    /*

    */
    virtual void SetBackColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets or sets the color of the text.
    </summary>
<value>The color of the text.</value>
    */
    virtual intrusive_ptr<PdfRGBColor> GetForeColor ();
    /*

    */
    virtual void SetForeColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets or sets the width of the border.
    </summary>
<value>The width of the border.</value>
    */
    virtual float GetBorderWidth ();
    /*

    */
    virtual void SetBorderWidth (float value);
    /*
    <summary>
        Gets or sets the highlighting mode.
    </summary>
<value>The highlighting mode.</value>
    */
    virtual PdfHighlightMode GetHighlightMode ();
    /*

    */
    virtual void SetHighlightMode (PdfHighlightMode value);
    /*
    <summary>
        Gets or sets the font.
    </summary>
<value>The font.</value>
    */
    virtual intrusive_ptr<PdfFontBase> GetFont ();
    /*

    */
    virtual void SetFont (intrusive_ptr<PdfFontBase> value);
    /*
    <summary>
        Gets or sets the text alignment.
    </summary>
<value>The text alignment.</value>
<remarks>This property is meaningful for fields containing variable text only.
            </remarks>
    */
    virtual PdfTextAlignment GetTextAlignment ();
    /*

    */
    virtual void SetTextAlignment (PdfTextAlignment value);
    /*
    <summary>
        Gets the actions of the field.
    </summary>
<value>The actions.</value>
    */
    virtual intrusive_ptr<PdfFieldActions> GetActions ();
    /*
    <summary>
        Gets or sets the border style.
    </summary>
<value>The border style.</value>
    */
    virtual PdfBorderStyle GetBorderStyle ();
    /*

    */
    virtual void SetBorderStyle (PdfBorderStyle value);
    /*
    <summary>
        Gets or sets a value indicating whether this  is visible.
    </summary>
<value>
  <c>true</c> if visible; otherwise, <c>false</c>.</value>
    */
    virtual bool GetVisible ();
    /*

    */
    virtual void SetVisible (bool value);
private:
};
}}