#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Provides data for PageAdded event.
    </summary>
<remarks>
            This event raised on adding the pages. 
            </remarks>
*/
class EXPORTS PageAddedEventArgs : public virtual Object
{
public:
    /*
    <summary>
        Gets the newly added page.
    </summary>
<value>a  object representing the page which is added in the document.</value>
    */
    intrusive_ptr<PdfNewPage> GetPage ();
private:
};
}}