#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfFontFamily.h"
#include "PdfFontBase.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents one of the 14 standard PDF fonts.
    </summary>
*/
class EXPORTS PdfFont : public virtual PdfFontBase
{
public:

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="fontFamily">The font family.</param>
    /// <param name="size">The size.</param>
    PdfFont(PdfFontFamily fontFamily, float size);


    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="fontFamily">The font family.</param>
    /// <param name="size">The size.</param>
    /// <param name="style">The style.</param>
    PdfFont(PdfFontFamily fontFamily, float size, PdfFontStyle style);


    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="prototype">The prototype.</param>
    /// <param name="size">The size.</param>
    PdfFont(intrusive_ptr<PdfFont> prototype, float size);


    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="prototype">The prototype.</param>
    /// <param name="size">The size.</param>
    /// <param name="style">The style.</param>
    PdfFont(intrusive_ptr<PdfFont> prototype, float size, PdfFontStyle style);
    /*
    <summary>
        Gets the FontFamily.
    </summary>
    */
    PdfFontFamily GetFontFamily ();
private:
};
}}