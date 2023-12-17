#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "EndPageLayoutEventArgs.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Contains information about layout`s element .
    </summary>
*/
class EXPORTS EndTextPageLayoutEventArgs : public virtual EndPageLayoutEventArgs
{
public:
    /*
    <summary>
        Gets a result of the lay outing on the page.
    </summary>
    */
    intrusive_ptr<PdfTextLayoutResult> GetResult ();
private:
};
}}