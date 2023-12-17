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
        Represents automatic field to display number of pages in section.
    </summary>
*/
class EXPORTS PdfSectionPageCountField : public virtual PdfMultipleNumberValueField
{
public:
    PdfSectionPageCountField();

    PdfSectionPageCountField(intrusive_ptr<PdfFontBase> font);

    PdfSectionPageCountField(intrusive_ptr<PdfFontBase> font, intrusive_ptr<PdfBrush> brush);

    PdfSectionPageCountField(intrusive_ptr<PdfFontBase> font, intrusive_ptr<RectangleF> bounds);
private:
};
}}