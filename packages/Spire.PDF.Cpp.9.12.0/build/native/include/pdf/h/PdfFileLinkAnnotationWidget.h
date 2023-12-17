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
        Represents the loaded file link annotation class.
    </summary>
*/
class EXPORTS PdfFileLinkAnnotationWidget : public virtual PdfStyledAnnotationWidget
{
public:
    /*
    <summary>
         Gets or sets the filename of the annotation.
    </summary>
    */
    LPCWSTR_S GetFileName ();
    /*

    */
    void SetFileName (LPCWSTR_S value);
    /*
    <summary>
        Represents the Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}