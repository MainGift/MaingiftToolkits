#pragma once
#include "pch.h"
#include "PdfSortedList.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the list item of the list.
    </summary>
*/
class EXPORTS PdfListItem : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets item font.
    </summary>
    */
    intrusive_ptr<PdfFontBase> GetFont ();
    /*

    */
    void SetFont (intrusive_ptr<PdfFontBase> value);
    /*
    <summary>
        Gets or sets item text.
    </summary>
    */
    LPCWSTR_S GetText ();
    /*

    */
    void SetText (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets item string format.
    </summary>
    */
    intrusive_ptr<PdfStringFormat> GetStringFormat ();
    /*

    */
    void SetStringFormat (intrusive_ptr<PdfStringFormat> value);
    /*
    <summary>
        Gets or sets list item pen.
    </summary>
    */
    intrusive_ptr<PdfPen> GetPen ();
    /*

    */
    void SetPen (intrusive_ptr<PdfPen> value);
    /*
    <summary>
        Gets or sets list item brush.
    </summary>
    */
    intrusive_ptr<PdfBrush> GetBrush ();
    /*

    */
    void SetBrush (intrusive_ptr<PdfBrush> value);
    /*
    <summary>
        Gets or sets sublist for item. 
    </summary>
    */
    intrusive_ptr<PdfListBase> GetSubList ();
    /*

    */
    void SetSubList (intrusive_ptr<PdfListBase> value);
    /*
    <summary>
        Gets or sets indent for item.
    </summary>
    */
    float GetTextIndent ();
    /*

    */
    void SetTextIndent (float value);
private:
};
}}