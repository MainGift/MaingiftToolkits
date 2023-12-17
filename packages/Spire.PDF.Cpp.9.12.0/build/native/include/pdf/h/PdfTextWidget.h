#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfPen.h"
#include "PdfBrush.h"
#include "PdfStringFormat.h"
#include "PdfLayoutWidget.h"
#include "PdfFontBase.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the text area with the ability to span several pages.
    </summary>
*/
class EXPORTS PdfTextWidget : public virtual PdfLayoutWidget
{
public:
    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    PdfTextWidget();

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="text">The text.</param>
    PdfTextWidget(LPCWSTR_S text);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="text">The text.</param>
    /// <param name="font">The font.</param>
    PdfTextWidget(LPCWSTR_S text, intrusive_ptr<PdfFontBase> font);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="text">The text.</param>
    /// <param name="font">The font.</param>
    /// <param name="pen">The pen.</param>
    PdfTextWidget(LPCWSTR_S text, intrusive_ptr<PdfFontBase> font, intrusive_ptr<PdfPen> pen);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="text">The text.</param>
    /// <param name="font">The font.</param>
    /// <param name="brush">The brush.</param>
    PdfTextWidget(LPCWSTR_S text, intrusive_ptr<PdfFontBase> font, intrusive_ptr<PdfBrush> brush);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="text">The text.</param>
    /// <param name="font">The font.</param>
    /// <param name="pen">The pen.</param>
    /// <param name="brush">The brush.</param>
    /// <param name="format">The format.</param>
    PdfTextWidget(LPCWSTR_S text, intrusive_ptr<PdfFontBase> font, intrusive_ptr<PdfPen> pen, intrusive_ptr<PdfBrush> brush, intrusive_ptr<PdfStringFormat> format);
    /*
    <summary>
        Gets or sets a value indicating the text that should be printed.
    </summary>
    */
    LPCWSTR_S GetText ();
    /*

    */
    void SetText (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets a pen that will be used to draw the text.
    </summary>
    */
    intrusive_ptr<PdfPen> GetPen ();
    /*

    */
    void SetPen (intrusive_ptr<PdfPen> value);
    /*
    <summary>
        Gets or sets the brush that will be used to draw the text.
    </summary>
    */
    intrusive_ptr<PdfBrush> GetBrush ();
    /*

    */
    void SetBrush (intrusive_ptr<PdfBrush> value);
    /*
    <summary>
        Gets or sets a font that will be used to draw the text.
    </summary>
    */
    intrusive_ptr<PdfFontBase> GetFont ();
    /*

    */
    void SetFont (intrusive_ptr<PdfFontBase> value);
    /*
    <summary>
        Gets or sets text settings that will be used to draw the text.
    </summary>
    */
    intrusive_ptr<PdfStringFormat> GetStringFormat ();
    /*

    */
    void SetStringFormat (intrusive_ptr<PdfStringFormat> value);
    /*
    <summary>
        Draws the text on the page.
    </summary>
    <param name="page">Current page where the text should be drawn.</param>
    <param name="location">Start location on the page.</param>
    <param name="format">Lay outing format.</param>
    <returns>Lay outing result.</returns>
    */
    intrusive_ptr<PdfTextLayoutResult> Draw (intrusive_ptr<PdfNewPage> page,intrusive_ptr<PointF> location,intrusive_ptr<PdfTextLayout> format);
    /*
    <summary>
        Draws the text on the page.
    </summary>
    <param name="page">Current page where the text should be drawn.</param>
    <param name="location">Start location on the page.</param>
    <param name="width">Width of the text bounds.</param>
    <param name="format">Lay outing format.</param>
    <returns>Lay outing result.</returns>
    */
    intrusive_ptr<PdfTextLayoutResult> Draw (intrusive_ptr<PdfNewPage> page,intrusive_ptr<PointF> location,float width,intrusive_ptr<PdfTextLayout> format);
    /*
    <summary>
        Draws the text on the page.
    </summary>
    <param name="page">Current page where the text should be drawn.</param>
    <param name="layoutRectangle">RectangleF structure that specifies the bounds of the text.</param>
    <param name="format">Lay outing format.</param>
    <returns>Lay outing result.</returns>
    */
    intrusive_ptr<PdfTextLayoutResult> Draw (intrusive_ptr<PdfNewPage> page,intrusive_ptr<RectangleF> layoutRectangle,intrusive_ptr<PdfTextLayout> format);
private:
};
}}