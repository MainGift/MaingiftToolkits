#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfFieldWidget.h"
#include "PdfSubmitAction.h"
#include "PdfFieldActions.h"
#include "PdfRadioButtonListItem.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents loaded styled field.
    </summary>
*/
class EXPORTS PdfStyledFieldWidget : public virtual PdfFieldWidget
{
public:
    /*
    <summary>
        Gets the actions of the field.
    </summary>
<value>The actions.</value>
    */
    virtual intrusive_ptr<PdfFieldActions> GetActions ();
    /*

    */
    intrusive_ptr<PdfAction> GetMouseEnter ();
    /*

    */
    void SetMouseEnter (intrusive_ptr<PdfAction> value);
    /*
    <summary>
        Gets or sets the action to be performed when the mouse button is released 
            inside the annotations active area..
    </summary>
<value>The mouse up action.</value>
    */
    intrusive_ptr<PdfAction> GetMouseUp ();
    /*

    */
    void SetMouseUp (intrusive_ptr<PdfAction> value);
    /*
    <summary>
        Gets or sets the action to be performed when the mouse button is pressed inside the 
            annotations active area.
    </summary>
<value>The mouse down action.</value>
    */
    intrusive_ptr<PdfAction> GetMouseDown ();
    /*

    */
    void SetMouseDown (intrusive_ptr<PdfAction> value);
    /*

    */
    intrusive_ptr<PdfAction> GetMouseLeave ();
    /*

    */
    void SetMouseLeave (intrusive_ptr<PdfAction> value);
    /*
    <summary>
        Gets or sets the action to be performed when the annotation receives the 
            input focus.
    </summary>
<value>The got focus action.</value>
    */
    intrusive_ptr<PdfAction> GetGotFocus ();
    /*

    */
    void SetGotFocus (intrusive_ptr<PdfAction> value);
    /*

    */
    intrusive_ptr<PdfRGBColor> GetForeColor ();
    /*

    */
    void SetForeColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Get or Set the background color of the field
    </summary>
<value>A  object specifying the background color of field. </value>
    */
    virtual intrusive_ptr<PdfRGBColor> GetBackColor ();
    /*

    */
    virtual void SetBackColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets or sets the action to be performed when the annotation loses the 
            input focus.
    </summary>
<value>The lost focus action.</value>
    */
    intrusive_ptr<PdfAction> GetLostFocus ();
    /*

    */
    void SetLostFocus (intrusive_ptr<PdfAction> value);
    /*
    <summary>
        Gets or sets the bounds.
    </summary>
    */
    virtual intrusive_ptr<RectangleF> GetBounds ();
    /*

    */
    virtual void SetBounds (intrusive_ptr<RectangleF> value);
    /*
    <summary>
        Gets or sets the location.
    </summary>
    */
    virtual intrusive_ptr<PointF> GetLocation ();
    /*

    */
    virtual void SetLocation (intrusive_ptr<PointF> value);
    /*
    <summary>
        Gets or sets the size.
    </summary>
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
    virtual PdfBorderStyle GetBorderStyle ();
    /*

    */
    virtual void SetBorderStyle (PdfBorderStyle value);
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
        Gets or Sets the width of the border.
    </summary>
<value>The width of the border.</value>
    */
    virtual float GetBorderWidth ();
    /*

    */
    virtual void SetBorderWidth (float value);
    /*
    <summary>
        Gets the font.
    </summary>
<value>The font.</value>
    */
    virtual intrusive_ptr<PdfFontBase> GetFont ();
    /*

    */
    virtual void SetFont (intrusive_ptr<PdfFontBase> value);
    /*
    <summary>
        Gets the default index.
    </summary>
    */
    int GetDefaultIndex ();
    /*

    */
    void SetDefaultIndex (int value);
    /*
    <summary>
        Gets a value indicating the visibility of the field.
    </summary>
    */
    virtual bool GetVisible ();
    /*
    <summary>
        Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}