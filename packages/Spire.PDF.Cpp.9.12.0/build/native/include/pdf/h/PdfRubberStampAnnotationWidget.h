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
        Represents the loaded rubber stamp annotation class.
    </summary>
*/
class EXPORTS PdfRubberStampAnnotationWidget : public virtual PdfMarkUpAnnotationWidget
{
public:
    /*
    <summary>
        Gets or sets the icon of the annotation.
    </summary>
    */
    PdfRubberStampAnnotationIcon GetIcon ();
    /*

    */
    void SetIcon (PdfRubberStampAnnotationIcon value);
    /*
    <summary>
        Represents the Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}