#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/RectangleF.h"
//#include "../../common/h/SizeF.h"
//#include "../../common/h/PointF.h"
#include "PdfFontBase.h"
#include "PdfBrush.h"
#include "PdfPen.h"
#include "PdfStringFormat.h"
#include "PdfCanvas.h"
#include "PdfGraphicsWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a fields which is calculated before the document saves.
    </summary>
*/
class EXPORTS PdfAutomaticField : public virtual PdfGraphicsWidget
{
public:
    /*
    <summary>
        Gets or sets the bounds of the field.
    </summary>
<value>The bounds value.</value>
    */
    intrusive_ptr<RectangleF> GetBounds ();
    /*

    */
    void SetBounds (intrusive_ptr<RectangleF> value);
    /*
    <summary>
        Gets or sets the size of the field.
    </summary>
<value>The size of the field.</value>
    */
    intrusive_ptr<SizeF> GetSize ();
    /*

    */
    void SetSize (intrusive_ptr<SizeF> value);
    /*
    <summary>
        Gets or sets the location of the field.
    </summary>
<value>The location.</value>
    */
    intrusive_ptr<PointF> GetLocation ();
    /*

    */
    void SetLocation (intrusive_ptr<PointF> value);
    /*
    <summary>
        Gets or sets the font.
    </summary>
<value>The font.</value>
    */
    intrusive_ptr<PdfFontBase> GetFont ();
    /*

    */
    void SetFont (intrusive_ptr<PdfFontBase> value);
    /*
    <summary>
        Gets or sets the brush.
    </summary>
<value>The brush.</value>
    */
    intrusive_ptr<PdfBrush> GetBrush ();
    /*

    */
    void SetBrush (intrusive_ptr<PdfBrush> value);
    /*
    <summary>
        Gets or sets the pen.
    </summary>
<value>The pen.</value>
    */
    intrusive_ptr<PdfPen> GetPen ();
    /*

    */
    void SetPen (intrusive_ptr<PdfPen> value);
    /*
    <summary>
        Gets or sets the string format.
    </summary>
<value>The string format.</value>
    */
    intrusive_ptr<PdfStringFormat> GetStringFormat ();
    /*

    */
    void SetStringFormat (intrusive_ptr<PdfStringFormat> value);
    /*
    <summary>
        Draws an element on the Graphics.
    </summary>
    <param name="graphics">Graphics context where the element should be printed.</param>
    <param name="x">X co-ordinate of the element.</param>
    <param name="y">Y co-ordinate of the element.</param>
<exclude />
    */
    virtual void Draw (intrusive_ptr<PdfCanvas> graphics,float x,float y);
private:
};
}}