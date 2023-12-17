#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents base class for markers.
    </summary>
*/
class EXPORTS PdfMarkerBase : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets marker font.
    </summary>
    */
    intrusive_ptr<PdfFontBase> GetFont ();
    /*

    */
    void SetFont (intrusive_ptr<PdfFontBase> value);
    /*
    <summary>
        Gets or sets marker brush.
    </summary>
    */
    intrusive_ptr<PdfBrush> GetBrush ();
    /*

    */
    void SetBrush (intrusive_ptr<PdfBrush> value);
    /*
    <summary>
        Gets or sets marker pen.
    </summary>
    */
    intrusive_ptr<PdfPen> GetPen ();
    /*

    */
    void SetPen (intrusive_ptr<PdfPen> value);
    /*
    <summary>
        Gets or sets the format.
    </summary>
<value>The format.</value>
    */
    intrusive_ptr<PdfStringFormat> GetStringFormat ();
    /*

    */
    void SetStringFormat (intrusive_ptr<PdfStringFormat> value);
    /*
    <summary>
        Gets or sets a value indicating whether the marker is
            situated at the left of the list or at the right of the list.
    </summary>
    */
    PdfListMarkerAlignment GetAlignment ();
    /*

    */
    void SetAlignment (PdfListMarkerAlignment value);
private:
};
}}