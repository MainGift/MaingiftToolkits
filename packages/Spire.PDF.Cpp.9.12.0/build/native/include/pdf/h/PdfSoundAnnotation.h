#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfFileAnnotation.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the sound annotation.
    </summary>
*/
class EXPORTS PdfSoundAnnotation : public virtual PdfFileAnnotation
{
public:
    /*
    <summary>
        Gets or sets the icon to be used in displaying the annotation.
    </summary>
<value>The  enumeration member specifying the icon for the annotation.</value>
    */
    PdfSoundIcon GetIcon ();
    /*

    */
    void SetIcon (PdfSoundIcon value);
    /*
    <summary>
        Gets or sets the sound.
    </summary>
<value>The  object specified a sound for the annotation.</value>
    */
    intrusive_ptr<PdfSound> GetSound ();
    /*

    */
    void SetSound (intrusive_ptr<PdfSound> value);
    /*
<value>The string specifies the file name of the sound annotation.</value>
    */
    virtual LPCWSTR_S GetFileName ();
    /*

    */
    virtual void SetFileName (LPCWSTR_S value);
private:
};
}}