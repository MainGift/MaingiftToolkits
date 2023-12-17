#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfFontStyle.h"
#include "PdfFontType.h"
#include "PdfFontBase.h"
#include "PdfPageBase.h"

#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the used fonts in a PDF document.
    </summary>
*/
class EXPORTS PdfUsedFont : public virtual Object
{
public:
    /*
    <summary>
        Gets the name.
    </summary>
<value>The name.</value>
    */
    LPCWSTR_S GetName ();
    /*
    <summary>
        Gets the size.
    </summary>
<value>The size.</value>
    */
    float GetSize ();
    /*
    <summary>
        Gets the style.
    </summary>
<value>The style.</value>
    */
    PdfFontStyle GetStyle ();
    /*
    <summary>
        Gets the type.
    </summary>
<value>The type.</value>
    */
    PdfFontType GetType ();
    /*
    <summary>
        Replaces the specified new font.
    </summary>
    <param name="newFont">The new font.</param>
    */
    void Replace (intrusive_ptr<PdfFontBase> fontToReplace);
    /*
    <summary>
        Scale the font size specified page.
    </summary>
    <param name="page">modified page</param>
    <param name="fontNames">the names of the fonts to be scaled</param>
    <param name="factor">scale factor</param>
    */
    static void ScaleFontSize (intrusive_ptr<PdfPageBase> page,std::vector<LPCWSTR_S> fontNames,float factor);
    /*
    <summary>
        Dispose font
    </summary>
    */
    virtual void Dispose ();
private:
};
}}