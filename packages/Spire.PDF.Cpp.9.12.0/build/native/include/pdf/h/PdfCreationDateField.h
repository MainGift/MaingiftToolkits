#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/RectangleF.h"
#include "PdfFontBase.h"
#include "PdfBrush.h"
#include "PdfSingleValueField.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents class to display creation date of the document.
    </summary>
*/
class EXPORTS PdfCreationDateField : public virtual PdfSingleValueField
{
public:
    PdfCreationDateField();

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="font">The font.</param>
    PdfCreationDateField(intrusive_ptr<PdfFontBase> font);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="font">The font.</param>
    /// <param name="brush">The brush.</param>
    PdfCreationDateField(intrusive_ptr<PdfFontBase> font, intrusive_ptr<PdfBrush> brush);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="font">A object that specifies the font attributes (the family name, the size, and the style of the font) to use. </param>
    /// <param name="bounds">Specifies the location and size of the field.</param>
    PdfCreationDateField(intrusive_ptr<PdfFontBase> font, intrusive_ptr<RectangleF> bounds);
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