#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfFontStyle.h"
#include "PdfCjkFontFamily.h"
#include "PdfFontBase.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the standard CJK fonts.
    </summary>
*/
class EXPORTS PdfCjkStandardFont : public virtual PdfFontBase
{
public:
    PdfCjkStandardFont(PdfCjkFontFamily fontFamily, float size, PdfFontStyle style);

    PdfCjkStandardFont(PdfCjkFontFamily fontFamily, float size);

    PdfCjkStandardFont(intrusive_ptr<PdfCjkStandardFont> prototype, float size);

    PdfCjkStandardFont(intrusive_ptr<PdfCjkStandardFont> prototype, float size, PdfFontStyle style);
    /*
    <summary>
        Gets the font family.
    </summary>
    */
    PdfCjkFontFamily GetFontFamily ();
private:
};
}}