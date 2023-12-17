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
        Represents the loaded unique resource identifier annotation class.
    </summary>
*/
class EXPORTS PdfUriAnnotationWidget : public virtual PdfStyledAnnotationWidget
{
public:
    /*
    <summary>
        Gets or sets the unique resource identifier text of the annotation.
    </summary>
    */
    LPCWSTR_S GetUri ();
    /*

    */
    void SetUri (LPCWSTR_S value);
    /*
    <summary>
        Represents the Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}