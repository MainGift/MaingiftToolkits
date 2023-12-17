#pragma once
#include "pch.h"
#include "../h/PdfAnnotationBorder.h"
#include "../h/PdfAnnotationFlags.h"
#include "../h/PdfRGBColor.h"
#include "../h/PdfPageBase.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the base class for annotation objects.
    </summary>
*/
class EXPORTS PdfAnnotation : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the background of the annotations icon when closed.
            The title bar of the annotations pop-up window.
            The border of a link annotation.
    </summary>
<value>The color.</value>
    */
    intrusive_ptr<PdfRGBColor> GetColor ();
    /*

    */
    void SetColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets annotation's modified date.
    </summary>
    */
    intrusive_ptr<DateTime> GetModifiedDate ();
    /*

    */
    void SetModifiedDate (intrusive_ptr<DateTime> value);
    /*
    <summary>
        Gets or sets annotation's border.
    </summary>
    */
    intrusive_ptr<PdfAnnotationBorder> GetBorder ();
    /*

    */
    void SetBorder (intrusive_ptr<PdfAnnotationBorder> value);
    /*

    */
    intrusive_ptr<RectangleF> GetRectangle ();
    /*

    */
    void SetRectangle (intrusive_ptr<RectangleF> value);
    /*
    <summary>
        Gets or sets location of the annotation.
    </summary>
    */
    intrusive_ptr<PointF> GetLocation ();
    /*

    */
    void SetLocation (intrusive_ptr<PointF> value);
    /*
    <summary>
        Gets or sets the name of the annotation.
            Note: The annotation name, a text string uniquely identifying it among all the annotations on its page.
    </summary>
    */
    LPCWSTR_S GetName ();
    /*

    */
    void SetName (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets size of the annotation.
    </summary>
    */
    intrusive_ptr<SizeF> GetSize ();
    /*

    */
    void SetSize (intrusive_ptr<SizeF> value);
    /*
    <summary>
        Gets a page which this annotation is connected to.
    </summary>
    */
    intrusive_ptr<PdfPageBase> GetPage ();
    /*
    <summary>
        Gets or sets content of the annotation.
    </summary>
    */
    LPCWSTR_S GetText ();
    /*

    */
    void SetText (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets annotation flags.
    </summary>
    */
    PdfAnnotationFlags GetFlags ();
    /*

    */
    void SetFlags (PdfAnnotationFlags value);
private:
};
}}