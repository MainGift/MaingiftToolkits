#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/Color.h"
#include "PdfPageBase.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the text replace.
    </summary>
*/
class EXPORTS PdfTextReplacer : public virtual Object
{
public:
    PdfTextReplacer(intrusive_ptr<PdfPageBase> page);
    /*
    <summary>
        Replaces the target text in the page.
    </summary>
    <param name="oldText">The old text.</param>
    <param name="newText">The new text.</param>
    */
    void ReplaceText (LPCWSTR_S oldText,LPCWSTR_S newText);
    /*
    <summary>
        Replaces all the text in the page.
    </summary>
    <param name="oldText">The old text</param>
    <param name="newText">The new text</param>
    */
    void ReplaceAllText (LPCWSTR_S oldText,LPCWSTR_S newText);
    /*
    <summary>
        Replaces all target text in the page.
    </summary>
    <param name="oldText">The old text</param>
    <param name="newText">The new text</param>
    <param name="textColor">The color of the new text.</param>
    */
    void ReplaceAllText (LPCWSTR_S oldText,LPCWSTR_S newText, intrusive_ptr<Color> textColor);
    /*
    <summary>
        Releases all resources used.
    </summary>
    */
    void Dispose ();
private:
};
}}