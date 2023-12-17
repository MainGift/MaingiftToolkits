#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/RectangleF.h"
#include "PdfAnnotation.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfFreeTextAnnotation : public virtual PdfAnnotation
{
public:
    PdfFreeTextAnnotation();
    PdfFreeTextAnnotation(intrusive_ptr<RectangleF> rectangle);
    /*

    */
    PdfLineEndingStyle GetLineEndingStyle ();
    /*

    */
    void SetLineEndingStyle (PdfLineEndingStyle value);
    /*

    */
    PdfAnnotationIntent GetAnnotationIntent ();
    /*

    */
    void SetAnnotationIntent (PdfAnnotationIntent value);
    /*

    */
    LPCWSTR_S GetMarkupText ();
    /*

    */
    void SetMarkupText (LPCWSTR_S value);
    /*

    */
    float GetOpacity ();
    /*

    */
    void SetOpacity (float value);
    /*

    */
    intrusive_ptr<PdfFontBase> GetFont ();
    /*

    */
    void SetFont (intrusive_ptr<PdfFontBase> value);
    /*

    */
    std::vector<intrusive_ptr<PointF>> GetCalloutLines ();
    /*

    */
    void SetCalloutLines (std::vector< intrusive_ptr<PointF>> value);
    /*

    */
    intrusive_ptr<PdfRGBColor> GetTextMarkupColor ();
    /*

    */
    void SetTextMarkupColor (intrusive_ptr<PdfRGBColor> value);
    /*

    */
    intrusive_ptr<PdfRGBColor> GetBorderColor ();
    /*

    */
    void SetBorderColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets or sets the rectangular diffecences
    </summary>
    */
    std::vector<int> GetRectangleDifferences ();
    /*

    */
    void SetRectangleDifferences (std::vector<float> value);
    /*
    <summary>
        Gets or sets the user who created the annotation.
    </summary>
    */
    LPCWSTR_S GetAuthor ();
    /*

    */
    void SetAuthor (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the annotation's subject.
    </summary>
    */
    LPCWSTR_S GetSubject ();
    /*

    */
    void SetSubject (LPCWSTR_S value);
private:
};
}}