#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfAnnotation.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the base class for link annotations.
    </summary>
*/
class EXPORTS PdfLinkAnnotation : public virtual PdfAnnotation
{
public:
    /*

    */
    PdfHighlightMode GetHighlightMode ();
    /*

    */
    void SetHighlightMode (PdfHighlightMode value);
private:
};
}}