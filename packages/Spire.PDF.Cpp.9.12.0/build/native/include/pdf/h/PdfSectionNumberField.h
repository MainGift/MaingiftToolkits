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
        Represents automatic field to display
    </summary>
*/
class EXPORTS PdfSectionNumberField : public virtual PdfMultipleNumberValueField
{
public:
    PdfSectionNumberField();

    PdfSectionNumberField(intrusive_ptr<PdfFontBase> font);

    PdfSectionNumberField(intrusive_ptr<PdfFontBase> font, intrusive_ptr<PdfBrush> brush);

    PdfSectionNumberField(intrusive_ptr<PdfFontBase> font, intrusive_ptr<RectangleF> bounds);
private:
};
}}