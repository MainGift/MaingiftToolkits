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
        Represents the free text annotation widget.
    </summary>
*/
class EXPORTS PdfFreeTextAnnotationWidget : public virtual PdfMarkUpAnnotationWidget
{
public:
    /*
    <summary>
        Gets or sets the date and time when the annotation was most recently modified.
    </summary>
    */
    intrusive_ptr<DateTime> GetModifiedDate ();
    /*

    */
    void SetModifiedDate (intrusive_ptr<DateTime> value);
    /*
    <summary>
        Gets or sets the rectangular diffecences array
    </summary>
    */
    std::vector<float> GetRectangularDifferenceArray ();
    /*

    */
    void SetRectangularDifferenceArray (std::vector<float> value);
    /*
    <summary>
        Gets a name describing the intent of the free text annotation.
    </summary>
    */
    PdfAnnotationIntent GetIntent ();
    /*
    <summary>
        Get the line ending style
    </summary>
    */
    PdfLineEndingStyle GetLineEndingStyle ();
    /*
    <summary>
        Get the callout line
    </summary>
    */
    std::vector<intrusive_ptr<PointF>> GetCalloutLines ();
    /*
    <summary>
        Gets the border width.
    </summary>
    */
    float GetBorderWidth ();
    /*
    <summary>
        Gets the border color
    </summary>
    */
    intrusive_ptr<PdfRGBColor> GetBorderColor ();
    /*
    <summary>
        Gets the border style
    </summary>
    */
    PdfBorderStyle GetBorderStyle ();
    /*
    <summary>
        Represents the Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}