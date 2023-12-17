#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the content that can be written in a grid cell.
    </summary>
*/
class EXPORTS PdfGridCellContent : public virtual Object
{
public:
    PdfGridCellContent();
    /*

    */
    void SetImageLocation (intrusive_ptr<PointF> value);
    /*

    */
    LPCWSTR_S GetText ();
    /*

    */
    void SetText (LPCWSTR_S value);
    /*

    */
    intrusive_ptr<PdfBrush> GetBrush ();
    /*

    */
    void SetBrush (intrusive_ptr<PdfBrush> value);
    /*

    */
    intrusive_ptr<PdfFontBase> GetFont ();
    /*

    */
    void SetFont (intrusive_ptr<PdfFontBase> value);
    /*

    */
    intrusive_ptr<PdfImage> GetImage ();
    /*

    */
    void SetImage (intrusive_ptr<PdfImage> value);
    /*

    */
    intrusive_ptr<SizeF> GetImageSize ();
    /*

    */
    void SetImageSize (intrusive_ptr<SizeF> value);
    /*

    */
    bool GetImageNewline ();
    /*

    */
    void SetImageNewline (bool value);
    /*

    */
    intrusive_ptr<PdfStringFormat> GetStringFormat ();
    /*

    */
    void SetStringFormat (intrusive_ptr<PdfStringFormat> value);
private:
};
}}