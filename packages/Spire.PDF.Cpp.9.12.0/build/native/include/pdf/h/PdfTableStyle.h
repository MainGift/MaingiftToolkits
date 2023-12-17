#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents parameters of PdfTable.
    </summary>
*/
class EXPORTS PdfTableStyle : public virtual Object
{
public:
    /*
    <summary>
        get or set the value of fitWidth.
    </summary>
    */
    bool GetIsFixWidth ();
    /*

    */
    void SetIsFixWidth (bool value);
    /*
    <summary>
        Gets or sets the default cell style.
    </summary>
    */
    intrusive_ptr<PdfCellStyle> GetDefaultStyle ();
    /*

    */
    void SetDefaultStyle (intrusive_ptr<PdfCellStyle> value);
    /*
    <summary>
        Gets or sets the odd row cell style.
    </summary>
    */
    intrusive_ptr<PdfCellStyle> GetAlternateStyle ();
    /*

    */
    void SetAlternateStyle (intrusive_ptr<PdfCellStyle> value);
    /*
    <summary>
        Gets or sets a value indicating whether
            to use rows or column captions for forming header.
    </summary>
    */
    PdfHeaderSource GetHeaderSource ();
    /*

    */
    void SetHeaderSource (PdfHeaderSource value);
    /*
    <summary>
        Gets or sets the header rows count.
    </summary>
    */
    int GetHeaderRowCount ();
    /*

    */
    void SetHeaderRowCount (int value);
    /*
    <summary>
        Gets or sets the header cell style.
    </summary>
    */
    intrusive_ptr<PdfCellStyle> GetHeaderStyle ();
    /*

    */
    void SetHeaderStyle (intrusive_ptr<PdfCellStyle> value);
    /*
    <summary>
        Gets or sets a value indicating whether to repeat header on each page.
    </summary>
    */
    bool GetRepeatHeader ();
    /*

    */
    void SetRepeatHeader (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether the header is visible.
    </summary>
<remarks>If the header is made up with ordinary rows they aren't visible
            while this property is set to false.</remarks>
    */
    bool GetShowHeader ();
    /*

    */
    void SetShowHeader (bool value);
    /*
    <summary>
        Gets or sets the cell spacing.
    </summary>
    */
    float GetCellSpacing ();
    /*

    */
    void SetCellSpacing (float value);
    /*
    <summary>
        Gets or sets the cell padding.
    </summary>
    */
    float GetCellPadding ();
    /*

    */
    void SetCellPadding (float value);
    /*
    <summary>
        Gets or sets a value indicating whether the cell borders
            should overlap its neighbour's borders or be drawn in the cell interior.
    </summary>
<remarks>Please, use this property with caution,
            because it might cause unexpected results if borders
            are not the same width and colour.</remarks>
    */
    PdfBorderOverlapStyle GetBorderOverlapStyle ();
    /*

    */
    void SetBorderOverlapStyle (PdfBorderOverlapStyle value);
    /*
    <summary>
        Gets or sets the pen of the table border.
    </summary>
    */
    intrusive_ptr<PdfPen> GetBorderPen ();
    /*

    */
    void SetBorderPen (intrusive_ptr<PdfPen> value);
private:
};
}}