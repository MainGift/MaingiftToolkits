#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfGridCellStyle.h"
#include "PdfStringFormat.h"
#include "PdfGridRow.h"
#include "PdfGridCell.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfGridCell : public virtual Object
{
public:
    PdfGridCell();

    PdfGridCell(intrusive_ptr<PdfGridRow> row);
    /*
    <summary>
        Gets or sets the width.
    </summary>
<value>The width.</value>
    */
    float GetWidth ();
    /*
    <summary>
        Gets the height.
    </summary>
<value>The height.</value>
    */
    float GetHeight ();
    /*
    <summary>
        Gets or sets the row span.
    </summary>
<value>The row span.</value>
    */
    int GetRowSpan ();
    /*

    */
    void SetRowSpan (int value);
    /*
    <summary>
        Gets or sets the column span.
    </summary>
<value>The column span.</value>
    */
    int GetColumnSpan ();
    /*

    */
    void SetColumnSpan (int value);
    /*
    <summary>
        Gets or sets the cell style.
    </summary>
<value>The cell style.</value>
    */
    intrusive_ptr<PdfGridCellStyle> GetStyle ();
    /*

    */
    void SetStyle (intrusive_ptr<PdfGridCellStyle> value);
    /*
    <summary>
        Gets or sets the value.
    </summary>
<value>The value.</value>
    */
    intrusive_ptr<Object> GetValue ();
    /*

    */
    void SetValue (intrusive_ptr<Object> value);

    void SetValueByCellGrid(intrusive_ptr<PdfGrid> value);
    void SetValueByCellContent(std::vector<intrusive_ptr<PdfGridCellContent>> value);
    void SetValueByText(LPCWSTR_S value);
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
private:
};
}}