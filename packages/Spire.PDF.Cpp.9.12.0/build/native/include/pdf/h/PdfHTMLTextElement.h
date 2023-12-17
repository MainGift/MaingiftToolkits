#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Class that represent HTML text area with the ability to span several pages.
    </summary>
*/
class EXPORTS PdfHTMLTextElement : public virtual Object
{
public:
    /*

    */
    intrusive_ptr<PdfFontBase> GetFont ();
    /*

    */
    void SetFont (intrusive_ptr<PdfFontBase> value);
    /*

    */
    intrusive_ptr<PdfBrush> GetBrush ();
    /*

    */
    void SetBrush (intrusive_ptr<PdfBrush> value);
    /*

    */
    LPCWSTR_S GetHTMLText ();
    /*

    */
    void SetHTMLText (LPCWSTR_S value);
    /*

    */
    TextAlign GetTextAlign ();
    /*

    */
    void SetTextAlign (TextAlign value);
    /*

    */
    intrusive_ptr<PdfLayoutResult> Draw (intrusive_ptr<PdfNewPage> page,intrusive_ptr<RectangleF> layoutRectangle,intrusive_ptr<PdfMetafileLayoutFormat> format);
    /*

    */
    void Draw (intrusive_ptr<PdfCanvas> graphics,intrusive_ptr<RectangleF> layoutRectangle);
    /*

    */
    intrusive_ptr<PdfLayoutResult> Draw (intrusive_ptr<PdfNewPage> page,intrusive_ptr<PointF> location,float width,intrusive_ptr<PdfMetafileLayoutFormat> format);
    /*

    */
    void Draw (intrusive_ptr<PdfCanvas> graphics,intrusive_ptr<PointF> location,float width,float height);
    /*

    */
    intrusive_ptr<PdfLayoutResult> Draw (intrusive_ptr<PdfNewPage> page,intrusive_ptr<PointF> location,float width,float height,intrusive_ptr<PdfMetafileLayoutFormat> format);
private:
};
}}