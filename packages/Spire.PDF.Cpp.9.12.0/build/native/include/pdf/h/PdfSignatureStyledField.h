#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfField.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents form's field with style parameters.
    </summary>
*/
class EXPORTS PdfSignatureStyledField : public virtual PdfField
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
    intrusive_ptr<PointF> GetLocation ();
    /*

    */
    void SetLocation (intrusive_ptr<PointF> value);
    /*
    <summary>
        Gets or sets the size.
    </summary>
<value>The size.</value>
    */
    intrusive_ptr<SizeF> GetSize ();
    /*

    */
    void SetSize (intrusive_ptr<SizeF> value);
    /*
    <summary>
        Gets or sets the color of the border.
    </summary>
<value>The color of the border.</value>
    */
    intrusive_ptr<PdfRGBColor> GetBorderColor ();
    /*

    */
    void SetBorderColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets or sets the color of the background.
    </summary>
<value>The color of the background.</value>
    */
    intrusive_ptr<PdfRGBColor> GetBackColor ();
    /*

    */
    void SetBackColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets or sets the width of the border.
    </summary>
<value>The width of the border.</value>
    */
    float GetBorderWidth ();
    /*

    */
    void SetBorderWidth (float value);
    /*
    <summary>
        Gets or sets the highlighting mode.
    </summary>
<value>The highlighting mode.</value>
    */
    PdfHighlightMode GetHighlightMode ();
    /*

    */
    void SetHighlightMode (PdfHighlightMode value);
    /*
    <summary>
        Gets the actions of the field.
    </summary>
<value>The actions.</value>
    */
    intrusive_ptr<PdfFieldActions> GetActions ();
    /*
    <summary>
        Gets or sets the border style.
    </summary>
<value>The border style.</value>
    */
    PdfBorderStyle GetBorderStyle ();
    /*

    */
    void SetBorderStyle (PdfBorderStyle value);
    /*
    <summary>
        Gets or sets a value indicating whether this  is visible.
    </summary>
<value>
  <c>true</c> if visible; otherwise, <c>false</c>.</value>
    */
    bool GetVisible ();
    /*

    */
    void SetVisible (bool value);
private:
};
}}