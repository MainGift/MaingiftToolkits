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
        Represents the loaded document link annotation class.
    </summary>
*/
class EXPORTS PdfDocumentLinkAnnotationWidget : public virtual PdfStyledAnnotationWidget
{
public:
    /*
    <summary>
        Gets or Sets the destination of the annotation.
    </summary>
    */
    intrusive_ptr<PdfDestination> GetDestination ();
    /*

    */
    void SetDestination (intrusive_ptr<PdfDestination> value);
    /*
    <summary>
        Represents the Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}