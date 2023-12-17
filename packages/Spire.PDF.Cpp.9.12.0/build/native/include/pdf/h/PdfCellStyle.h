#pragma once
#include "pch.h"
#include "PdfFontBase.h"
#include "PdfStringFormat.h"
#include "PdfPen.h"
#include "PdfBrush.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents information about cell style.
    </summary>
*/
class EXPORTS PdfCellStyle : public virtual Object
{
public:
    PdfCellStyle();

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="font">The font.</param>
    /// <param name="fontBrush">The font brush.</param>
    /// <param name="borderPen">The border pen.</param>
    PdfCellStyle(intrusive_ptr<PdfFontBase> font, intrusive_ptr<PdfBrush> fontBrush, intrusive_ptr<PdfPen> borderPen);

    /*
    <summary>
        Gets or sets the font.
    </summary>
    */
    intrusive_ptr<PdfFontBase> GetFont ();
    /*

    */
    void SetFont (intrusive_ptr<PdfFontBase> value);
    /*
    <summary>
        Gets or sets the string format of the cell text.
    </summary>
    */
    intrusive_ptr<PdfStringFormat> GetStringFormat ();
    /*

    */
    void SetStringFormat (intrusive_ptr<PdfStringFormat> value);
    /*
    <summary>
        Gets or sets the font which will be used to draw text outlines.
    </summary>
<remarks>It should be null for default text representation.</remarks>
    */
    intrusive_ptr<PdfPen> GetTextPen ();
    /*

    */
    void SetTextPen (intrusive_ptr<PdfPen> value);
    /*
    <summary>
        Gets or sets the brush which will be used to draw font.
    </summary>
<remarks>This brush will be used to fill glyphs interior, which is the default.</remarks>
    */
    intrusive_ptr<PdfBrush> GetTextBrush ();
    /*

    */
    void SetTextBrush (intrusive_ptr<PdfBrush> value);
    /*
    <summary>
        Gets or sets the pen with which the border will be drawn.
    </summary>
    */
    intrusive_ptr<PdfPen> GetBorderPen ();
    /*

    */
    void SetBorderPen (intrusive_ptr<PdfPen> value);
    /*
    <summary>
        Gets or sets the brush with which the background will be drawn.
    </summary>
<remarks>It's null by default.</remarks>
    */
    intrusive_ptr<PdfBrush> GetBackgroundBrush ();
    /*

    */
    void SetBackgroundBrush (intrusive_ptr<PdfBrush> value);
private:
};
}}