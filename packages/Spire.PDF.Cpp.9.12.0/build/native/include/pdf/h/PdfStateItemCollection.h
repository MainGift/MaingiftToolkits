#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents state item collection.
    </summary>
*/
class EXPORTS PdfStateItemCollection : public virtual PdfCollection
{
public:
    /*
    <summary>
        Gets the  at the specified index.
    </summary>
<value>The index of specified  item.</value>
    */
    intrusive_ptr<PdfStateWidgetItem> GetItem (int index);
private:
};
}}