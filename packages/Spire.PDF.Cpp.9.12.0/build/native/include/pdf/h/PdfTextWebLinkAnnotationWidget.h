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
        Represents the loaded text web link annotation class.
    </summary>
*/
class EXPORTS PdfTextWebLinkAnnotationWidget : public virtual PdfStyledAnnotationWidget
{
public:
    /*
    <summary>
        Gets or sets the Url.
    </summary>
    */
    LPCWSTR_S GetUrl ();
    /*

    */
    void SetUrl (LPCWSTR_S value);
    /*
    <summary>
        Represents the Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}