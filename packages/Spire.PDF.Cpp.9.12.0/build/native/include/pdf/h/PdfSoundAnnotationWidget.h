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
        Represents the loaded sound annotation class.
    </summary>
*/
class EXPORTS PdfSoundAnnotationWidget : public virtual PdfStyledAnnotationWidget
{
public:
    /*
    <summary>
        Gets or sets the sound of the annotation.
    </summary>
    */
    intrusive_ptr<PdfSound> GetSound ();
    /*

    */
    void SetSound (intrusive_ptr<PdfSound> value);
    /*
    <summary>
        Gets the filename of the annotation.
    </summary>
    */
    LPCWSTR_S GetFileName ();
    /*
    <summary>
        Gets or sets the icon of the annotation.
    </summary>
    */
    PdfSoundIcon GetIcon ();
    /*

    */
    void SetIcon (PdfSoundIcon value);
    /*
    <summary>
        Represents the Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}