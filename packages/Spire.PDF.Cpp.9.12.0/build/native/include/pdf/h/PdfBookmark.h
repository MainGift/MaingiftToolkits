#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfBookmarkCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Each instance of this class represents
            an bookmark node in the bookmark tree.
    </summary>
*/
class EXPORTS PdfBookmark : public virtual PdfBookmarkCollection
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
    /*

    */
    void SetExpandBookmark (bool value);
    /*
    <summary>
        It's true,expand node
            It's false,collapse node
    </summary>
    */
    bool GetExpandBookmark ();
    /*
    <summary>
        Gets or sets the Action for the Outline.
    </summary>
    */
    intrusive_ptr<PdfAction> GetAction ();
    /*

    */
    void SetAction (intrusive_ptr<PdfAction> value);
private:
};
}}