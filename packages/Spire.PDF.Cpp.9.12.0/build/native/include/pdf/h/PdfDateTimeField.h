#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/RectangleF.h"
#include "PdfFontBase.h"
#include "PdfBrush.h"
#include "PdfStaticField.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents date automated field.
    </summary>
*/
class EXPORTS PdfDateTimeField : public virtual PdfStaticField
{
public:
    PdfDateTimeField();

    PdfDateTimeField(intrusive_ptr<PdfFontBase> font);

    PdfDateTimeField(intrusive_ptr<PdfFontBase> font, intrusive_ptr<PdfBrush> brush);

    PdfDateTimeField(intrusive_ptr<PdfFontBase> font, intrusive_ptr<RectangleF> bounds);
    /*
    <summary>
        Gets or sets the format string.
    </summary>
<value>The format string.</value>
    */
    LPCWSTR_S GetDateFormatString ();
    /*

    */
    void SetDateFormatString (LPCWSTR_S value);
private:
};
}}