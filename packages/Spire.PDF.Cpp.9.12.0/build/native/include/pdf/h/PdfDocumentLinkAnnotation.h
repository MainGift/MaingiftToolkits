#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/RectangleF.h"
#include "PdfDestination.h"
#include "PdfLinkAnnotation.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents annotation object with holds link on another location within a document.
    </summary>
*/
class EXPORTS PdfDocumentLinkAnnotation : public virtual PdfLinkAnnotation
{
public:
    PdfDocumentLinkAnnotation();
    PdfDocumentLinkAnnotation(intrusive_ptr<RectangleF> rectangle);

    PdfDocumentLinkAnnotation(intrusive_ptr<RectangleF> rectangle, intrusive_ptr<PdfDestination> destination);

    /*
    <summary>
        Gets or sets the destination of the annotation.
    </summary>
    */
    intrusive_ptr<PdfDestination> GetDestination ();
    /*

    */
    void SetDestination (intrusive_ptr<PdfDestination> value);
private:
};
}}