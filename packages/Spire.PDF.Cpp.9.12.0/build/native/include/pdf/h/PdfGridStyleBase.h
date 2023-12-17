#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
<summary></summary>
*/
class EXPORTS PdfGridStyleBase : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the background brush.
    </summary>
<value>The background brush.</value>
    */
    intrusive_ptr<PdfBrush> GetBackgroundBrush ();
    /*

    */
    void SetBackgroundBrush (intrusive_ptr<PdfBrush> value);
    /*
    <summary>
        Gets or sets the text brush.
    </summary>
<value>The text brush.</value>
    */
    intrusive_ptr<PdfBrush> GetTextBrush ();
    /*

    */
    void SetTextBrush (intrusive_ptr<PdfBrush> value);
    /*
    <summary>
        Gets or sets the text pen.
    </summary>
<value>The text pen.</value>
    */
    intrusive_ptr<PdfPen> GetTextPen ();
    /*

    */
    void SetTextPen (intrusive_ptr<PdfPen> value);
    /*
    <summary>
        Gets or sets the font.
    </summary>
<value>The font.</value>
    */
    intrusive_ptr<PdfFontBase> GetFont ();
    /*

    */
    void SetFont (intrusive_ptr<PdfFontBase> value);
    /*
    <summary>
        Creates a new object that is a copy of the current instance.
    </summary>
    <returns>
            A new object that is a copy of this instance.
            </returns>
    */
    //virtual System.Object Clone ();
private:
};
}}