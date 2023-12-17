#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfLinkAnnotation.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents base class for link annotations with associated action.
    </summary>
*/
class EXPORTS PdfActionLinkAnnotation : public virtual PdfLinkAnnotation
{
public:
    /*
    <summary>
        Gets or sets the action for the link annotation.
    </summary>
<value>The action to be executed when the link is activated.</value>
    */
    virtual intrusive_ptr<PdfAction> GetAction ();
    /*

    */
    virtual void SetAction (intrusive_ptr<PdfAction> value);
private:
};
}}