#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/Font.h"
#include "PdfFontStyle.h"
#include "PdfFontBase.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
         Represents TrueType font.
     </summary>
            [System.Security.Permissions.PermissionSet( System.Security.Permissions.SecurityAction.Assert, Name = "FullTrust" )]
        
*/
class EXPORTS PdfTrueTypeFont : public virtual PdfFontBase
{
public:
    //PdfTrueTypeFont(intrusive_ptr<Font> font);

    //PdfTrueTypeFont(intrusive_ptr<Font> font, bool unicode);

    //PdfTrueTypeFont(intrusive_ptr<Font> font, float size);

    //PdfTrueTypeFont(intrusive_ptr<Font> font, float size, bool unicode);

    // <summary>
    // Initializes a new instance of the  class.
    // </summary>
    // <param name="fontFile">The font file.</param>
    // <param name="size">The size.</param>
    PdfTrueTypeFont(LPCWSTR_S fontFile, float size);

    // <summary>
    // Initializes a new instance of the class.
    // </summary>
    // <param name="fontFile">The font file.</param>
    // <param name="size">The size.</param>
    // <param name="style">The style.</param>
    PdfTrueTypeFont(LPCWSTR_S fontFile, float size, PdfFontStyle style);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="fontName">The font name.</param>
    /// <param name="emSize">The font size.</param>
    /// <param name="style">The font style.</param>
    /// <param name="unicode">if set to <c>true</c> [unicode].</param>
    PdfTrueTypeFont(LPCWSTR_S fontName, float size, PdfFontStyle style, bool unicode);

    // <summary>
    // Initializes a new instance of the  class.
    // </summary>
    // <param name="prototype">The prototype.</param>
    // <param name="size">The size.</param>
    PdfTrueTypeFont(intrusive_ptr<PdfTrueTypeFont> prototype, float size);
    /*

    */
    bool GetUnicode ();
    /*

    */
    virtual void Dispose ();
private:
};
}}