#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfCancelEventArgs.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Contains information about layout`s element .
    </summary>
*/
class EXPORTS EndPageLayoutEventArgs : public virtual PdfCancelEventArgs
{
public:
    /*
    <summary>
        Gets a result of the lay outing on the page.
    </summary>
    */
    intrusive_ptr<PdfLayoutResult> GetResult ();
    /*
    <summary>
        Gets or sets a value indicating the next page where the element should be layout if the process is not finished or stopped.
    </summary>
<remarks>The default value is null. In this case the element will be layout on the next page.</remarks>
    */
    intrusive_ptr<PdfNewPage> GetNextPage ();
    /*

    */
    void SetNextPage (intrusive_ptr<PdfNewPage> value);
private:
};
}}