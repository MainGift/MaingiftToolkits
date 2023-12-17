#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/PointF.h"
//#include "../../common/h/RectangleF.h"
#include "PdfAnnotation.h"
#include "PdfFontBase.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the text markup annotation.
    </summary>
*/
class EXPORTS PdfTextMarkupAnnotation : public virtual PdfAnnotation
{
public:
    PdfTextMarkupAnnotation();
    /// <summary>
    /// Initializes new instance of  class.
    /// </summary>
    /// <param name="markupTitle">The markup annotation title.</param>
    /// <param name="text">The string specifies the text of the annotation.</param>
    /// <param name="markupText">The string specifies the markup text of the annotation.</param>
    /// <param name="point">The location of the markup text annotation.</param>
    /// <param name="pdfFont">The  specifies the text appearance of the markup text annotation.</param>
    PdfTextMarkupAnnotation(LPCWSTR_S markupTitle, LPCWSTR_S text, LPCWSTR_S markupText, intrusive_ptr<PointF> point, intrusive_ptr<PdfFontBase> pdfFont);

    /// <summary>
    /// Initializes new instance of  class.
    /// </summary>
    /// <param name="title">The title of the annotation.</param>
    /// <param name="text">The text of the annotation.</param> 
    /// <param name="rect">The bounds of the annotation.</param>
    /// <param name="font">The font of the annotation.</param>
    PdfTextMarkupAnnotation(LPCWSTR_S title, LPCWSTR_S text, intrusive_ptr<RectangleF> rect, intrusive_ptr<PdfFontBase> font);

    /// <summary>
    /// Initializes new instance of  class.
    /// </summary>       
    /// <param name="title">The title of the annotation.</param>
    /// <param name="text">The text of the annotation.</param>     
    /// <param name="rect">The bounds of the annotation.</param>
    PdfTextMarkupAnnotation(LPCWSTR_S title, LPCWSTR_S text, intrusive_ptr<RectangleF> rect);

    /// <summary>
    /// Initializes new instance of  class.
    /// </summary>
    /// <param name="rectangle">The bounds of the annotation.</param>
    PdfTextMarkupAnnotation(intrusive_ptr<RectangleF> rectangle);
    /*
    <summary>
        Gets or sets TextMarkupAnnotationType .
    </summary>
    */
    PdfTextMarkupAnnotationType GetTextMarkupAnnotationType ();
    /*

    */
    void SetTextMarkupAnnotationType (PdfTextMarkupAnnotationType value);
    /*
    <summary>
        Gets or sets text markup color.
    </summary>
    */
    intrusive_ptr<PdfRGBColor> GetTextMarkupColor ();
    /*

    */
    void SetTextMarkupColor (intrusive_ptr<PdfRGBColor> value);
private:
};
}}