#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfStateWidgetItemCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents collection of text box group items.
    </summary>
*/
class EXPORTS PdfCheckBoxWidgetWidgetItemCollection : public virtual PdfStateWidgetItemCollection
{
public:
    /*
    <summary>
        Gets the  at the specified index.
    </summary>
    */
    intrusive_ptr<PdfCheckBoxWidgetWidgetItem> GetItem (int index);
private:
};
}}