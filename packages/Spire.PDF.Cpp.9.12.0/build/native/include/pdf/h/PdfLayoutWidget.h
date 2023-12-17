#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfGraphicsWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the base class for all elements that can be layout on the pages.
    </summary>
            [System.Security.Permissions.PermissionSet(System.Security.Permissions.SecurityAction.Assert, Name = "FullTrust")]
        
*/
class EXPORTS PdfLayoutWidget : public virtual PdfGraphicsWidget
{
public:
    /*

    */
    void add_EndPageLayout (intrusive_ptr<EndPageLayoutEventHandler> value);
    /*

    */
    void remove_EndPageLayout (intrusive_ptr<EndPageLayoutEventHandler> value);
    /*

    */
    void add_BeginPageLayout (intrusive_ptr<BeginPageLayoutEventHandler> value);
    /*

    */
    void remove_BeginPageLayout (intrusive_ptr<BeginPageLayoutEventHandler> value);
    /*
    <summary>
        Draws the element on the page.
    </summary>
    <param name="page">Current page where the element should be drawn.</param>
    <param name="location">Start location on the page.</param>
    <returns>Layouting result.</returns>
    */
    intrusive_ptr<PdfLayoutResult> Draw (intrusive_ptr<PdfPageBase> page,intrusive_ptr<PointF> location);
    /*
    <summary>
        Draws the element on the page.
    </summary>
    <param name="page">Current page where the element should be drawn.</param>
    <param name="x">X co-ordinate of the element on the page.</param>
    <param name="y">Y co-ordinate of the element on the page.</param>
    <returns>Lay outing result.</returns>
    */
    intrusive_ptr<PdfLayoutResult> Draw (intrusive_ptr<PdfPageBase> page,float x,float y);
    /*
    <summary>
        Draws the element on the page.
    </summary>
    <param name="page">Current page where the element should be drawn.</param>
    <param name="layoutRectangle">RectangleF structure that specifies the bounds of the element.</param>
    <returns>Lay outing result.</returns>
    */
    intrusive_ptr<PdfLayoutResult> Draw (intrusive_ptr<PdfPageBase> page,intrusive_ptr<RectangleF> layoutRectangle);
    /*
    <summary>
        Draws the element on the page.
    </summary>
    <param name="page">Current page where the element should be drawn.</param>
    <param name="layoutRectangle">RectangleF structure that specifies the bounds of the element.</param>
    <returns>Lay outing result.</returns>
    */
    intrusive_ptr<PdfLayoutResult> Draw (intrusive_ptr<PdfPageBase> page,intrusive_ptr<RectangleF> layoutRectangle,bool embedFonts);
    /*
    <summary>
        Draws the element on the page.
    </summary>
    <param name="page">Current page where the element should be drawn.</param>
    <param name="location">Start location on the page.</param>
    <param name="format">Lay outing format.</param>
    <returns>Lay outing result.</returns>
    */
    intrusive_ptr<PdfLayoutResult> Draw (intrusive_ptr<PdfPageBase> page,intrusive_ptr<PointF> location,intrusive_ptr<PdfTextLayout> format);
    /*
    <summary>
        Draws the element on the page.
    </summary>
    <param name="page">Current page where the element should be drawn.</param>
    <param name="x">X co-ordinate of the element on the page.</param>
    <param name="y">Y co-ordinate of the element on the page.</param>
    <param name="format">Layout format.</param>
    <returns>Layout result.</returns>
    */
    intrusive_ptr<PdfLayoutResult> Draw (intrusive_ptr<PdfPageBase> page,float x,float y,intrusive_ptr<PdfTextLayout> format);
    /*
    <summary>
        Draws the element on the page.
    </summary>
    <param name="page">Current page where the element should be drawn.</param>
    <param name="layoutRectangle">RectangleF structure that specifies the bounds of the element.</param>
    <param name="format">Layout format.</param>
    <returns>Layout result.</returns>
    */
    intrusive_ptr<PdfLayoutResult> Draw (intrusive_ptr<PdfPageBase> page,intrusive_ptr<RectangleF> layoutRectangle,intrusive_ptr<PdfTextLayout> format);
private:
};
}}