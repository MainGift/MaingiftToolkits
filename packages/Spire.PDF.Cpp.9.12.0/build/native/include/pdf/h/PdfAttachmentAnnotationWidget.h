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
        Represents the attachment annotation from the loaded document.
    </summary>
*/
class EXPORTS PdfAttachmentAnnotationWidget : public virtual PdfStyledAnnotationWidget
{
public:
    /*
    <summary>
        Gets or sets the icon of the annotation.
    </summary>
    */
    PdfAttachmentIcon GetIcon ();
    /*

    */
    void SetIcon (PdfAttachmentIcon value);
    /*
    <summary>
         Gets the attachment file name of the annotation.
    </summary>
    */
    LPCWSTR_S GetFileName ();
    /*

    */
    //std::vector<BYTE*> GetData ();
    /*
    <summary>
        Represents the Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}