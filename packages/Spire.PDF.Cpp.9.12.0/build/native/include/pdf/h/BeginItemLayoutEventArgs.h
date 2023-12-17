#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents begin layout event arguments.
    </summary>
*/
class EXPORTS BeginItemLayoutEventArgs : public virtual Object
{
public:
    /*
    <summary>
        Gets the item.
    </summary>
<value>The item that layout.</value>
    */
    intrusive_ptr<PdfListItem> GetItem ();
    /*
    <summary>
        Gets the page.
    </summary>
<value>The page in which item start layout.</value>
    */
    intrusive_ptr<PdfPageBase> GetPage ();
private:
};
}}