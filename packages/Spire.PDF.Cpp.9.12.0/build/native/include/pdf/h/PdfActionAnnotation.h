#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfAction.h"
#include "PdfActionLinkAnnotation.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the annotation with associated action.
    </summary>
*/
class EXPORTS PdfActionAnnotation : public virtual PdfActionLinkAnnotation
{
public:
    PdfActionAnnotation();
    PdfActionAnnotation(intrusive_ptr<RectangleF> rectangle, intrusive_ptr<PdfAction> action);
private:
};
}}