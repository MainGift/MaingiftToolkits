#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfUriAnnotationWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the loaded web link annotation class.
    </summary>
*/
class EXPORTS PdfWebLinkAnnotationWidget : public virtual PdfUriAnnotationWidget
{
public:
    /*
    <summary>
        Represents the Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}