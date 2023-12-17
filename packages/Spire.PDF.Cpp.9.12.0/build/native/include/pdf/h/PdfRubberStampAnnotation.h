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
    <summary>
        Represents the Rubber Stamp annotation for a PDF document.
    </summary>
*/
class EXPORTS PdfRubberStampAnnotation : public virtual PdfAnnotation
{
public:
    PdfRubberStampAnnotation();

    PdfRubberStampAnnotation(intrusive_ptr<RectangleF> rectangle);

    PdfRubberStampAnnotation(intrusive_ptr<RectangleF> rectangle, LPCWSTR_S text);
    /*
    <summary>
        Gets or sets the annotation's icon. 
    </summary>
<value>A  enumeration member specifying the icon for the annotation when it is displayed in closed state. </value>
    */
    PdfRubberStampAnnotationIcon GetIcon ();
    /*

    */
    void SetIcon (PdfRubberStampAnnotationIcon value);
    /*
    <summary>
        Gets or sets appearance of the annotation.
    </summary>
    */
    intrusive_ptr<PdfAppearance> GetAppearance ();
    /*

    */
    void SetAppearance (intrusive_ptr<PdfAppearance> value);
    /*
    <summary>
        Gets or set the name of the annotation,the entry is deleted by default when the 
            input value is an empty string
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
    /*
    <summary>
        Gets or sets the creation date.
    </summary>
    */
    intrusive_ptr<DateTime> GetCreationDate ();
    /*

    */
    void SetCreationDate (intrusive_ptr<DateTime> value);
private:
};
}}