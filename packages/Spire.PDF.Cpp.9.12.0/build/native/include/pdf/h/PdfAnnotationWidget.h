#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfAnnotation.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the base class for loaded annotation classes.
    </summary>
*/
class EXPORTS PdfAnnotationWidget : public virtual PdfAnnotation
{
public:
    /*
    <summary>
        Gets and sets the Page.
    </summary>
    */
    intrusive_ptr<PdfPageBase> GetPageWidget ();
    /*

    */
    void SetPageWidget (intrusive_ptr<PdfPageBase> value);
    /*
    <summary>
        Sets the name of the field.
    </summary>
    <param name="name">New name of the field.</param>
    */
    void SetText (LPCWSTR_S text);
    /*
    <summary>
        Represents the Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}