#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfGridRowStyle.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Grid cell style
    </summary>
*/
class EXPORTS PdfGridCellStyle : public virtual PdfGridRowStyle
{
public:
    /*
    <summary>
        Get or sets the cell padding.
    </summary>
    <returns>The cell padding.</returns>
    */
    intrusive_ptr<PdfPaddings> GetCellPadding ();
    /*

    */
    void SetCellPadding (intrusive_ptr<PdfPaddings> value);
    /*
    <summary>
        Gets the string format.
    </summary>
<value>The string format.</value>
    */
    intrusive_ptr<PdfStringFormat> GetStringFormat ();
    /*

    */
    void SetStringFormat (intrusive_ptr<PdfStringFormat> value);
    /*
    <summary>
        Gets or sets the border.
    </summary>
<value>The border.</value>
    */
    intrusive_ptr<PdfBorders> GetBorders ();
    /*

    */
    void SetBorders (intrusive_ptr<PdfBorders> value);
    /*
    <summary>
        Gets or sets the background image.
    </summary>
<value>The background image.</value>
    */
    intrusive_ptr<PdfImage> GetBackgroundImage ();
    /*

    */
    void SetBackgroundImage (intrusive_ptr<PdfImage> value);
private:
};
}}