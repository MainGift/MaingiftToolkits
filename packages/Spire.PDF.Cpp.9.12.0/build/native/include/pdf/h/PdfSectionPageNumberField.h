#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/RectangleF.h"
#include "PdfFontBase.h"
#include "PdfBrush.h"
#include "PdfMultipleNumberValueField.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents automatic field to display page number within a section.
    </summary>
*/
class EXPORTS PdfSectionPageNumberField : public virtual PdfMultipleNumberValueField
{
public:
    PdfSectionPageNumberField();

    PdfSectionPageNumberField(intrusive_ptr<PdfFontBase> font);

    PdfSectionPageNumberField(intrusive_ptr<PdfFontBase> font, intrusive_ptr<PdfBrush> brush);

    PdfSectionPageNumberField(intrusive_ptr<PdfFontBase> font, intrusive_ptr<RectangleF> bounds);
private:
};
}}