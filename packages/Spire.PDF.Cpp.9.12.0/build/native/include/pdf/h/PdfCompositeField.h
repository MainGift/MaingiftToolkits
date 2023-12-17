#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfMultipleValueField.h"
#include "PdfFontBase.h"
#include "PdfCompositeField.h"
#include "PdfAutomaticField.h"
#include "PdfBrush.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents class which can concatenate multiple automatic fields into single string.
    </summary>
*/
class EXPORTS PdfCompositeField : public virtual PdfMultipleValueField
{
public:
    PdfCompositeField();

    PdfCompositeField(intrusive_ptr<PdfFontBase> font);

    PdfCompositeField(intrusive_ptr<PdfFontBase> font, intrusive_ptr<PdfBrush> brush);

    PdfCompositeField(intrusive_ptr<PdfFontBase> font, LPCWSTR_S text);

    PdfCompositeField(intrusive_ptr<PdfFontBase> font, intrusive_ptr<PdfBrush> brush, LPCWSTR_S text);

    PdfCompositeField(LPCWSTR_S text, std::vector< intrusive_ptr<PdfAutomaticField>> list);

    PdfCompositeField(intrusive_ptr<PdfFontBase> font, LPCWSTR_S text, std::vector<intrusive_ptr<PdfAutomaticField>> list);

    PdfCompositeField(intrusive_ptr<PdfFontBase> font, intrusive_ptr<PdfBrush> brush, LPCWSTR_S text, std::vector< intrusive_ptr<PdfAutomaticField>> list);
    /*
    <summary>
        Gets or sets the text.
    </summary>
<value>The wide-character string to be drawn.</value>
    */
    LPCWSTR_S GetText ();
    /*

    */
    void SetText (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the automatic fields.
    </summary>
<value>The automatic fields.</value>
    */
    std::vector<intrusive_ptr<PdfAutomaticField>> GetAutomaticFields ();
    /*

    */
    void SetAutomaticFields (std::vector< intrusive_ptr<PdfAutomaticField>> value);
private:
};
}}