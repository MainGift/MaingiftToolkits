#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfStyledAnnotationWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the loaded pop up annotation class.
    </summary>
*/
class EXPORTS PdfPopupAnnotationWidget : public virtual PdfStyledAnnotationWidget
{
public:
    /*
    <summary>
        Gets or sets the open option of the popup annotation.
    </summary>
    */
    bool GetOpen ();
    /*

    */
    void SetOpen (bool value);
    /*
    <summary>
        Gets or sets the icon of the annotation.
    </summary>
    */
    PdfPopupIcon GetIcon ();
    /*

    */
    void SetIcon (PdfPopupIcon value);
    /*
    <summary>
        Represents the Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}