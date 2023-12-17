#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfBookmark.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents loaded bookmark class.
    </summary>
*/
class EXPORTS PdfBookmarkWidget : public virtual PdfBookmark
{
public:
    /*
    <summary>
        Gets or sets the outline destination.
    </summary>
    */
    virtual intrusive_ptr<PdfDestination> GetDestination ();
    /*

    */
    virtual void SetDestination (intrusive_ptr<PdfDestination> value);
    /*
    <summary>
        Gets or sets the outline title.
    </summary>
<remarks>The outline title is the text,
            which appears in the outline tree as a tree node.</remarks>
    */
    virtual LPCWSTR_S GetTitle ();
    /*

    */
    virtual void SetTitle (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the color.
    </summary>
    */
    virtual intrusive_ptr<PdfRGBColor> GetColor ();
    /*

    */
    virtual void SetColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets or sets the text style.
    </summary>
    */
    virtual PdfTextStyle GetDisplayStyle ();
    /*

    */
    virtual void SetDisplayStyle (PdfTextStyle value);
private:
};
}}