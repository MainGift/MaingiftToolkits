#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfLayoutWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents fast table with few features.
    </summary>
*/
class EXPORTS PdfTable : public virtual PdfLayoutWidget
{
public:
    PdfTable();
    /*
    <summary>
        Gets the columns.
    </summary>
<value>The table column collection</value>
    */
    intrusive_ptr<PdfColumnCollection> GetColumns ();
    /*
    <summary>
        Gets the rows.
    </summary>
    */
    intrusive_ptr<PdfRowCollection> GetRows ();
    /*
    <summary>
        Gets or sets the data source.
    </summary>
    */
    intrusive_ptr<Object> GetDataSource ();
    /*

    */
    void SetDataSource (std::vector<LPCWSTR_S> value);
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
        Gets or sets the datasource type of the PdfTable
    </summary>
    */
    PdfTableDataSourceType GetDataSourceType ();
    /*

    */
    void SetDataSourceType (PdfTableDataSourceType value);
    /*
    <summary>
        Gets or sets the properties.
    </summary>
    */
    intrusive_ptr<PdfTableStyle> GetStyle ();
    /*

    */
    void SetStyle (intrusive_ptr<PdfTableStyle> value);
    /*
    <summary>
        Gets or sets a value indicating whether
            PdfTable should ignore sorting in data table.
    </summary>
    */
    bool GetIgnoreSorting ();
    /*

    */
    void SetIgnoreSorting (bool value);
    /*
    <summary>
        Gets a value Indicates whether can cross a page.
    </summary>
    */
    bool GetAllowCrossPages ();
    /*

    */
    void SetAllowCrossPages (bool value);
    /*

    */
    void add_BeginRowLayout (intrusive_ptr<BeginRowLayoutEventHandler> value);
    /*

    */
    void remove_BeginRowLayout (intrusive_ptr<BeginRowLayoutEventHandler> value);
    /*

    */
    void add_EndRowLayout (intrusive_ptr<EndRowLayoutEventHandler> value);
    /*

    */
    void remove_EndRowLayout (intrusive_ptr<EndRowLayoutEventHandler> value);
    /*

    */
    void add_BeginCellLayout (intrusive_ptr<BeginCellLayoutEventHandler> value);
    /*

    */
    void remove_BeginCellLayout (intrusive_ptr<BeginCellLayoutEventHandler> value);
    /*

    */
    void add_EndCellLayout (intrusive_ptr<EndCellLayoutEventHandler> value);
    /*

    */
    void remove_EndCellLayout (intrusive_ptr<EndCellLayoutEventHandler> value);
    /*

    */
    void add_QueryNextRow (intrusive_ptr<QueryNextRowEventHandler> value);
    /*

    */
    void remove_QueryNextRow (intrusive_ptr<QueryNextRowEventHandler> value);
    /*

    */
    void add_QueryColumnCount (intrusive_ptr<QueryColumnCountEventHandler> value);
    /*

    */
    void remove_QueryColumnCount (intrusive_ptr<QueryColumnCountEventHandler> value);
    /*

    */
    void add_QueryRowCount (intrusive_ptr<QueryRowCountEventHandler> value);
    /*

    */
    void remove_QueryRowCount (intrusive_ptr<QueryRowCountEventHandler> value);
    /*
    <summary>
        Draws an element on the Graphics.
    </summary>
    <param name="graphics">Graphics context where the element should be printed.</param>
    <param name="location">The location of the element.</param>
    <param name="width">The width of the table.</param>
    */
    void Draw (intrusive_ptr<PdfCanvas> graphics,intrusive_ptr<PointF> location,float width);
    /*
    <summary>
        Draws an element on the Graphics.
    </summary>
    <param name="graphics">Graphics context where the element should be printed.</param>
    <param name="x">X co-ordinate of the element.</param>
    <param name="y">Y co-ordinate of the element.</param>
    <param name="width">The width of the table.</param>
    */
    void Draw (intrusive_ptr<PdfCanvas> graphics,float x,float y,float width);
    /*
    <summary>
        Draws an element on the Graphics.
    </summary>
    <param name="graphics">Graphics context where the element should be printed.</param>
    <param name="bounds">The bounds.</param>
    */
    void Draw (intrusive_ptr<PdfCanvas> graphics,intrusive_ptr<RectangleF> bounds);
    /*
    <summary>
        Draws the table starting from the specified page.
    </summary>
    <param name="page">The page.</param>
    <param name="location">The location.</param>
    <returns>The results of the lay outing.</returns>
    */
    intrusive_ptr<PdfTableLayoutResult> Draw (intrusive_ptr<PdfNewPage> page,intrusive_ptr<PointF> location);
    /*
    <summary>
        Draws the table starting from the specified page.
    </summary>
    <param name="page">The page.</param>
    <param name="location">The location.</param>
    <param name="format">The format.</param>
    <returns>The results of the lay outing.</returns>
    */
    intrusive_ptr<PdfTableLayoutResult> Draw (intrusive_ptr<PdfNewPage> page,intrusive_ptr<PointF> location,intrusive_ptr<PdfTableLayoutFormat> format);
    /*
    <summary>
        Draws the table starting from the specified page.
    </summary>
    <param name="page">The page.</param>
    <param name="bounds">The bounds.</param>
    <returns>The results of the lay outing.</returns>
    */
    intrusive_ptr<PdfTableLayoutResult> Draw (intrusive_ptr<PdfNewPage> page,intrusive_ptr<RectangleF> bounds);
    /*
    <summary>
        Draws the table starting from the specified page.
    </summary>
    <param name="page">The page.</param>
    <param name="bounds">The bounds.</param>
    <param name="format">The format.</param>
    <returns>The results of the lay outing.</returns>
    */
    intrusive_ptr<PdfTableLayoutResult> Draw (intrusive_ptr<PdfNewPage> page,intrusive_ptr<RectangleF> bounds,intrusive_ptr<PdfTableLayoutFormat> format);
    /*
    <summary>
        Draws the table starting from the specified page.
    </summary>
    <param name="page">The page.</param>
    <param name="x">The x coordinate.</param>
    <param name="y">The y coordinate.</param>
    <returns>The results of the lay outing.</returns>
    */
    intrusive_ptr<PdfTableLayoutResult> Draw (intrusive_ptr<PdfNewPage> page,float x,float y);
    /*
    <summary>
        Draws the table starting from the specified page.
    </summary>
    <param name="page">The page.</param>
    <param name="x">The x coordinate.</param>
    <param name="y">The y coordinate.</param>
    <param name="format">The format.</param>
    <returns>The results of the lay outing.</returns>
    */
    intrusive_ptr<PdfTableLayoutResult> Draw (intrusive_ptr<PdfNewPage> page,float x,float y,intrusive_ptr<PdfTableLayoutFormat> format);
    /*
    <summary>
        Draws the table starting from the specified page.
    </summary>
    <param name="page">The page.</param>
    <param name="x">The x coordinate.</param>
    <param name="y">The y coordinate.</param>
    <param name="width">The width.</param>
    <returns>The results of the lay outing.</returns>
    */
    intrusive_ptr<PdfTableLayoutResult> Draw (intrusive_ptr<PdfNewPage> page,float x,float y,float width);
    /*
    <summary>
        Draws the table starting from the specified page.
    </summary>
    <param name="page">The page.</param>
    <param name="x">The x coordinate.</param>
    <param name="y">The y coordinate.</param>
    <param name="width">The width.</param>
    <param name="format">The format.</param>
    <returns>The results of the lay outing.</returns>
    */
    intrusive_ptr<PdfTableLayoutResult> Draw (intrusive_ptr<PdfNewPage> page,float x,float y,float width,intrusive_ptr<PdfTableLayoutFormat> format);
    /*
    <summary>
        Draws an element on the Graphics.
    </summary>
    <param name="graphics">Graphics context where the element should be printed.</param>
    <param name="x">X co-ordinate of the element.</param>
    <param name="y">Y co-ordinate of the element.</param>
    */
    virtual void Draw (intrusive_ptr<PdfCanvas> graphics,float x,float y);
private:
};
}}