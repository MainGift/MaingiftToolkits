#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/RectangleF.h"
#include "PdfActionLinkAnnotation.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the annotation link to external file.
    </summary>
*/
class EXPORTS PdfFileLinkAnnotation : public virtual PdfActionLinkAnnotation
{
public:
    PdfFileLinkAnnotation();
    PdfFileLinkAnnotation(intrusive_ptr<RectangleF> rectangle, LPCWSTR_S fileName);

    /*
<value>A string value specifying the full path to the file to be embedded.</value>
    */
    LPCWSTR_S GetFileName ();
    /*

    */
    void SetFileName (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the action.
    </summary>
<value>The action to be executed when the annotation is activated.</value>
    */
    virtual intrusive_ptr<PdfAction> GetAction ();
    /*

    */
    virtual void SetAction (intrusive_ptr<PdfAction> value);
private:
};
}}