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
        Represents page number field.
    </summary>
*/
class EXPORTS PdfPageNumberField : public virtual PdfMultipleNumberValueField
{
public:
    PdfPageNumberField();

    PdfPageNumberField(intrusive_ptr<PdfFontBase> font);

    PdfPageNumberField(intrusive_ptr<PdfFontBase> font, intrusive_ptr<PdfBrush> brush);

    PdfPageNumberField(intrusive_ptr<PdfFontBase> font, intrusive_ptr<RectangleF> bounds);
private:
};
}}