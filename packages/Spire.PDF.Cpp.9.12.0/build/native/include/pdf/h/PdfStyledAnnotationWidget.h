#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfAnnotationWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the PdfLoadedStyledAnnotation.
    </summary>
*/
class EXPORTS PdfStyledAnnotationWidget : public virtual PdfAnnotationWidget
{
public:
    /*
    <summary>
        Gets or sets the color.
    </summary>
<value>The color.</value>
    */
    intrusive_ptr<PdfRGBColor> GetColor ();
    /*

    */
    void SetColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets or sets the text.
    </summary>
<value>The text.</value>
    */
    LPCWSTR_S GetText ();
    /*

    */
    void SetText (LPCWSTR_S value);
    /*

    */
    intrusive_ptr<RectangleF> GetBounds ();
    /*

    */
    void SetBounds (intrusive_ptr<RectangleF> value);
    /*
    <summary>
        Gets or sets the annotation's border.
    </summary>
    */
    intrusive_ptr<PdfAnnotationBorder> GetBorder ();
    /*

    */
    void SetBorder (intrusive_ptr<PdfAnnotationBorder> value);
    /*
    <summary>
        Gets or sets the location.
    </summary>
    */
    intrusive_ptr<PointF> GetLocation ();
    /*

    */
    void SetLocation (intrusive_ptr<PointF> value);
    /*
    <summary>
        Gets or sets the size.
    </summary>
    */
    intrusive_ptr<SizeF> GetSize ();
    /*

    */
    void SetSize (intrusive_ptr<SizeF> value);
    /*
    <summary>
        Gets or sets the annotation flags.
    </summary>
    */
    PdfAnnotationFlags GetAnnotationFlags ();
    /*

    */
    void SetAnnotationFlags (PdfAnnotationFlags value);
    /*
    <summary>
        Represents the Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}