#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents end layout event arguments.
    </summary>
*/
class EXPORTS EndItemLayoutEventArgs : public virtual Object
{
public:
    /*
    <summary>
        Gets the item that layout.
    </summary>
<value>The item that layout.</value>
    */
    intrusive_ptr<PdfListItem> GetItem ();
    /*
    <summary>
        Gets the page in which item ended layout.
    </summary>
<value>The page in which item ended layout.</value>
    */
    intrusive_ptr<PdfPageBase> GetPage ();
private:
};
}}