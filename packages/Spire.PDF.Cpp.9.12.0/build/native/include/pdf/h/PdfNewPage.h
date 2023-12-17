#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfPageBase.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a single PDF page.
    </summary>
*/
class EXPORTS PdfNewPage : public virtual PdfPageBase
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
        Gets a collection of the annotations of the page.
    </summary>
    */
    intrusive_ptr<PdfAnnotationCollection> GetAnnotations ();
private:
};
}}