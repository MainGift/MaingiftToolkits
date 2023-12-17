#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/RectangleF.h"
#include "PdfSingleValueField.h"
#include "PdfFontBase.h"
#include "PdfBrush.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represent automatic field which contains document's author name.
    </summary>
*/
class EXPORTS PdfDocumentAuthorField : public virtual PdfSingleValueField
{
public:
    PdfDocumentAuthorField();

    PdfDocumentAuthorField(intrusive_ptr<PdfFontBase> font);

    PdfDocumentAuthorField(intrusive_ptr<PdfFontBase> font, intrusive_ptr<PdfBrush> brush);

    PdfDocumentAuthorField(intrusive_ptr<PdfFontBase> font, intrusive_ptr<RectangleF> bounds);
private:
};
}}