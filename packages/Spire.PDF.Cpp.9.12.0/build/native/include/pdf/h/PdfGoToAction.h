#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfAction.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents an action which goes to a destination in the current document.
    </summary>
*/
class EXPORTS PdfGoToAction : public virtual PdfAction
{
public:
    PdfGoToAction();

    PdfGoToAction(intrusive_ptr<PdfDestination> destination);

    PdfGoToAction(intrusive_ptr<PdfNewPage> page);
    /*
    <summary>
        Gets or sets the destination.
    </summary>
<value>The destination.</value>
    */
    intrusive_ptr<PdfDestination> GetDestination ();
    /*

    */
    void SetDestination (intrusive_ptr<PdfDestination> value);
private:
};
}}