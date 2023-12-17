#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfPageBase.h"
#include "PdfDocumentBase.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a page loaded from a document.
    </summary>
*/
class EXPORTS PdfPageWidget : public virtual PdfPageBase
{
public:
    /*
    <summary>
        Gets the size of the page.
    </summary>
    */
    virtual intrusive_ptr<SizeF> GetSize ();
    /*
    <summary>
        Get the visible region of the page.
    </summary>
    */
    virtual intrusive_ptr<SizeF> GetActualSize ();
    /*
    <summary>
        Gets the document.
    </summary>
    */
    virtual intrusive_ptr<PdfDocumentBase> GetDocument ();
private:
};
}}