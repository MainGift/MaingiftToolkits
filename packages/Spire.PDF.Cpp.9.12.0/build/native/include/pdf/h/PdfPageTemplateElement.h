#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfDockStyle.h"
#include "PdfAlignmentStyle.h"
//#include "../../common/h/SizeF.h"
//#include "../../common/h/Rectangle.h"
//#include "../../common/h/PointF.h"
#include "PdfCanvas.h"
#include "PdfNewPage.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Describes a page template object that can be used as header/footer, watermark or stamp.
    </summary>
*/
class EXPORTS PdfPageTemplateElement : public virtual Object
{
public:
    PdfPageTemplateElement();
    PdfPageTemplateElement(intrusive_ptr<RectangleF> bounds);

    PdfPageTemplateElement(intrusive_ptr<RectangleF> bounds, intrusive_ptr<PdfNewPage> page);

    PdfPageTemplateElement(intrusive_ptr<PointF> location, intrusive_ptr<SizeF> size);

    PdfPageTemplateElement(intrusive_ptr<PointF> location, intrusive_ptr<SizeF> size, intrusive_ptr<PdfNewPage> page);

    PdfPageTemplateElement(intrusive_ptr<SizeF> size);

    PdfPageTemplateElement(float width, float height);

    PdfPageTemplateElement(float width, float height, intrusive_ptr<PdfNewPage> page);

    PdfPageTemplateElement(float x, float y, float width, float height);

    PdfPageTemplateElement(float x, float y, float width, float height, intrusive_ptr<PdfNewPage> page);
    /*
    <summary>
        Gets or sets the dock style of the page template element.
    </summary>
    */
    PdfDockStyle GetDock ();
    /*

    */
    void SetDock (PdfDockStyle value);
    /*
    <summary>
        Gets or sets alignment of the page template element.
    </summary>
    */
    PdfAlignmentStyle GetAlignment ();
    /*

    */
    void SetAlignment (PdfAlignmentStyle value);
    /*
    <summary>
        Indicates whether the page template is located in front of 
            the page layers or behind of it.
    </summary>
    */
    bool GetForeground ();
    /*

    */
    void SetForeground (bool value);
    /*
    <summary>
        Indicates whether the page template is located behind of 
            the page layers or in front of it.
    </summary>
    */
    bool GetBackground ();
    /*

    */
    void SetBackground (bool value);
    /*
    <summary>
        Gets or sets location of the page template element.
    </summary>
    */
    intrusive_ptr<PointF> GetLocation ();
    /*

    */
    void SetLocation (intrusive_ptr<PointF> value);
    /*
    <summary>
        Gets or sets X co-ordinate of the template element on the page.
    </summary>
    */
    float GetX ();
    /*

    */
    void SetX (float value);
    /*
    <summary>
        Gets or sets Y co-ordinate of the template element on the page.
    </summary>
    */
    float GetY ();
    /*

    */
    void SetY (float value);
    /*
    <summary>
        Gets or sets size of the page template element.
    </summary>
    */
    intrusive_ptr<SizeF> GetSize ();
    /*

    */
    void SetSize (intrusive_ptr<SizeF> value);
    /*
    <summary>
        Gets or sets width of the page template element.
    </summary>
    */
    float GetWidth ();
    /*

    */
    void SetWidth (float value);
    /*
    <summary>
        Gets or sets height of the page template element.
    </summary>
    */
    float GetHeight ();
    /*

    */
    void SetHeight (float value);
    /*
    <summary>
        Gets or sets bounds of the page template element.
    </summary>
    */
    intrusive_ptr<RectangleF> GetBounds ();
    /*

    */
    void SetBounds (intrusive_ptr<RectangleF> value);
    /*
    <summary>
        Gets graphics context of the page template element.
    </summary>
    */
    intrusive_ptr<PdfCanvas> GetGraphics ();
private:
};
}}