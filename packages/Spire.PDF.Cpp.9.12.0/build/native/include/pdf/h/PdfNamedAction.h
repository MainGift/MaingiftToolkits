#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfAction.h"
#include "PdfActionDestination.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents an action which perfoms the named action.
    </summary>
*/
class EXPORTS PdfNamedAction : public virtual PdfAction
{
public:
    PdfNamedAction();
    PdfNamedAction(PdfActionDestination destination);
    /*
    <summary>
        Gets or sets the destination.
    </summary>
<value>The  object representing destination of an action.</value>
    */
    PdfActionDestination GetDestination ();
    /*

    */
    void SetDestination (PdfActionDestination value);
private:
};
}}