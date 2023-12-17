#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents base class for all action types.
    </summary>
*/
class EXPORTS PdfAction : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the next action to be performed after the action represented by this instance.
    </summary>
    */
    intrusive_ptr<PdfAction> GetNextAction ();
    /*

    */
    void SetNextAction (intrusive_ptr<PdfAction> value);
private:
};
}}