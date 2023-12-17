#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfGridRow : public virtual Object
{
public:
    /*
    <summary>
        Gets the cells.
    </summary>
<value>The cells.</value>
    */
    intrusive_ptr<PdfGridCellCollection> GetCells ();
    /*
    <summary>
        Gets or sets the row style.
    </summary>
<value>The row style.</value>
    */
    intrusive_ptr<PdfGridRowStyle> GetStyle ();
    /*

    */
    void SetStyle (intrusive_ptr<PdfGridRowStyle> value);
    /*
    <summary>
        Gets or sets the height.The height is equal to the content 
            height plus margin plus half of the top and bottom borders.
    </summary>
<value>The height.</value>
    */
    float GetHeight ();
    /*

    */
    void SetHeight (float value);
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
        Applies the cell style to all the cells present in a row.
    </summary>
    <param name="cellStyle">The cell style.</param>
    */
    void ApplyStyle (intrusive_ptr<PdfGridCellStyle> cellStyle);
private:
};
}}