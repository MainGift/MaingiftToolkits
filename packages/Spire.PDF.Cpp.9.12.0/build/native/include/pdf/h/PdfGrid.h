#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfLayoutWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfGrid : public virtual PdfLayoutWidget
{
public:
    PdfGrid();
    /*
    <summary>
        Gets the headers.
    </summary>
<value>The headers.</value>
    */
    intrusive_ptr<PdfGridHeaderCollection> GetHeaders ();
    /*
    <summary>
        Gets the rows.
    </summary>
<value>The rows.</value>
    */
    intrusive_ptr<PdfGridRowCollection> GetRows ();
    /*
    <summary>
        Gets or sets the data source.
    </summary>
<value>The data source.</value>
    */
    //System.Object GetDataSource ();
    /*

    */
    //void SetDataSource (System.Object value);
    /*
    <summary>
        Gets or sets the data member.
    </summary>
<value>The data member.</value>
    */
    LPCWSTR_S GetDataMember ();
    /*

    */
    void SetDataMember (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the style.
    </summary>
<value>The style.</value>
    */
    intrusive_ptr<PdfGridStyle> GetStyle ();
    /*

    */
    void SetStyle (intrusive_ptr<PdfGridStyle> value);
    /*
    <summary>
        Gets the columns.
    </summary>
<value>The columns.</value>
    */
    intrusive_ptr<PdfGridColumnCollection> GetColumns ();
    /*
    <summary>
        Gets or sets a value indicating whether [repeat header].
    </summary>
<value>
  <c>true</c> if [repeat header]; otherwise, <c>false</c>.</value>
    */
    bool GetRepeatHeader ();
    /*

    */
    void SetRepeatHeader (bool value);
    /*
    <summary>
        Gets or sets whether to cross a page.
    </summary>
    */
    bool GetAllowCrossPages ();
    /*

    */
    void SetAllowCrossPages (bool value);
    /*
    <summary>
        Draws the specified graphics.
    </summary>
    <param name="graphics">The graphics.</param>
    <param name="location">The location.</param>
    <param name="width">The width.</param>
    */
    void Draw (intrusive_ptr<PdfCanvas> graphics,intrusive_ptr<PointF> location,float width);
    /*
    <summary>
        Draws the specified graphics.
    </summary>
    <param name="graphics">The graphics.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="width">The width.</param>
    */
    void Draw (intrusive_ptr<PdfCanvas> graphics,float x,float y,float width);
    /*
    <summary>
        Draws the specified graphics.
    </summary>
    <param name="graphics">The graphics.</param>
    <param name="bounds">The bounds.</param>
    */
    void Draw (intrusive_ptr<PdfCanvas> graphics,intrusive_ptr<RectangleF> bounds);
    /*
    <summary>
        Draws the specified page.
    </summary>
    <param name="page">The page.</param>
    <param name="location">The location.</param>
    <returns></returns>
    */
    intrusive_ptr<PdfGridLayoutResult> Draw (intrusive_ptr<PdfNewPage> page,intrusive_ptr<PointF> location);
    /*
    <summary>
        Draws the specified page.
    </summary>
    <param name="page">The page.</param>
    <param name="location">The location.</param>
    <param name="format">The format.</param>
    <returns></returns>
    */
    intrusive_ptr<PdfGridLayoutResult> Draw (intrusive_ptr<PdfNewPage> page,intrusive_ptr<PointF> location,intrusive_ptr<PdfGridLayoutFormat> format);
    /*
    <summary>
        Draws the specified page.
    </summary>
    <param name="page">The page.</param>
    <param name="bounds">The bounds.</param>
    <returns></returns>
    */
    intrusive_ptr<PdfGridLayoutResult> Draw (intrusive_ptr<PdfNewPage> page,intrusive_ptr<RectangleF> bounds);
    /*
    <summary>
        Draws the specified page.
    </summary>
    <param name="page">The page.</param>
    <param name="bounds">The bounds.</param>
    <param name="format">The format.</param>
    <returns></returns>
    */
    intrusive_ptr<PdfGridLayoutResult> Draw (intrusive_ptr<PdfNewPage> page,intrusive_ptr<RectangleF> bounds,intrusive_ptr<PdfGridLayoutFormat> format);
    /*
    <summary>
        Draws the specified page.
    </summary>
    <param name="page">The page.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <returns></returns>
    */
    intrusive_ptr<PdfGridLayoutResult> Draw (intrusive_ptr<PdfNewPage> page,float x,float y);
    /*
    <summary>
        Draws the specified page.
    </summary>
    <param name="page">The page.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="format">The format.</param>
    <returns></returns>
    */
    intrusive_ptr<PdfGridLayoutResult> Draw (intrusive_ptr<PdfNewPage> page,float x,float y,intrusive_ptr<PdfGridLayoutFormat> format);
    /*
    <summary>
        Draws the specified page.
    </summary>
    <param name="page">The page.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="width">The width.</param>
    <returns></returns>
    */
    intrusive_ptr<PdfGridLayoutResult> Draw (intrusive_ptr<PdfNewPage> page,float x,float y,float width);
    /*
    <summary>
        Draws the specified page.
    </summary>
    <param name="page">The page.</param>
    <param name="x">The x.</param>
    <param name="y">The y.</param>
    <param name="width">The width.</param>
    <param name="format">The format.</param>
    <returns></returns>
    */
    intrusive_ptr<PdfGridLayoutResult> Draw (intrusive_ptr<PdfNewPage> page,float x,float y,float width,intrusive_ptr<PdfGridLayoutFormat> format);
private:
};
}}