#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfMarkUpAnnotationWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the loaded text markup annotation class.
    </summary>
*/
class EXPORTS PdfTextMarkupAnnotationWidget : public virtual PdfMarkUpAnnotationWidget 
{
public:
    /*
    <summary>
        Gets or sets the annotation Type.
    </summary>
    */
    PdfTextMarkupAnnotationType GetTextMarkupAnnotationType ();
    /*

    */
    void SetTextMarkupAnnotationType (PdfTextMarkupAnnotationType value);
    /*
    <summary>
        Gets or sets the color.
    </summary>
    */
    intrusive_ptr<PdfRGBColor> GetTextMarkupColor ();
    /*

    */
    void SetTextMarkupColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Represents the Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}