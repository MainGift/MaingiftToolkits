#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/RectangleF.h"
#include "PdfFontBase.h"
#include "PdfBrush.h"
#include "PdfNumberStyle.h"
#include "PdfSingleValueField.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents total page count automatic field.
    </summary>
*/
class EXPORTS PdfPageCountField : public virtual PdfSingleValueField
{
public:
    PdfPageCountField();

    PdfPageCountField(intrusive_ptr<PdfFontBase> font);

    PdfPageCountField(intrusive_ptr<PdfFontBase> font, intrusive_ptr<PdfBrush> brush);

    PdfPageCountField(intrusive_ptr<PdfFontBase> font, intrusive_ptr<RectangleF> bounds);
    /*
    <summary>
        Gets or sets the number style.
    </summary>
<value>The number style.</value>
    */
    PdfNumberStyle GetNumberStyle ();
    /*

    */
    void SetNumberStyle (PdfNumberStyle value);
private:
};
}}