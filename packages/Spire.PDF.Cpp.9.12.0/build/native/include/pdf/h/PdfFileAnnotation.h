#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfAnnotation.h"
#include "PdfAppearance.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a base class for file attachment annotation. 
    </summary>
*/
class EXPORTS PdfFileAnnotation : public virtual PdfAnnotation
{
public:
    /*
    <summary>
        Gets or sets file name of the annotation.
    </summary>
    */
    virtual LPCWSTR_S GetFileName ();
    /*

    */
    virtual void SetFileName (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets appearance of the annotation.
    </summary>
    */
    intrusive_ptr<PdfAppearance> GetAppearance ();
    /*

    */
    void SetAppearance (intrusive_ptr<PdfAppearance> value);
private:
};
}}