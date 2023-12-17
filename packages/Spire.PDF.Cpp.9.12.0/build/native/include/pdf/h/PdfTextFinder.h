#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Representing the way how to find text on a page.
    </summary>
*/
class EXPORTS PdfTextFinder : public virtual Object
{
public:
    PdfTextFinder(intrusive_ptr<PdfPageBase> page);
    /*

    */
    intrusive_ptr<PdfTextFindOptions> GetOptions ();
    /*

    */
    void SetOptions (intrusive_ptr<PdfTextFindOptions> value);
    /*
    <summary>
        Find target text.
    </summary>
    <param name="text">The target text.</param>
    <returns>A list of text find result.</returns>
    */
    std::vector<intrusive_ptr<PdfTextFragment>> Find(LPCWSTR_S text);
    //System.Collections.Generic.List`1[[Spire.Pdf.Texts.PdfTextFragment, Spire.Pdf, Version=8.10.5.0, Culture=neutral, PublicKeyToken=null]] Find (LPCWSTR_S text);
    /*
    <summary>
        Find all text in the page
    </summary>
    <returns>All text find in the page.</returns>
    */
    std::vector<intrusive_ptr<PdfTextFragment>> FindAllText();
    //System.Collections.Generic.List`1[[Spire.Pdf.Texts.PdfTextFragment, Spire.Pdf, Version=8.10.5.0, Culture=neutral, PublicKeyToken=null]] FindAllText ();
    /*
    <summary>
        Releases all resources used.
    </summary>
    */
    void Dispose ();
private:
};
}}