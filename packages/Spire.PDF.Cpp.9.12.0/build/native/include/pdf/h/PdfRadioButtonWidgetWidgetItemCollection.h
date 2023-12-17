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
        Represents collection of radio box group items.
    </summary>
*/
class EXPORTS PdfRadioButtonWidgetWidgetItemCollection : public virtual PdfStateWidgetItemCollection
{
public:
    /*
    <summary>
        Gets the  at the specified index.
    </summary>
    <returns>Returns  object at the specified index.</returns>
    */
    intrusive_ptr<PdfRadioButtonWidgetItem> GetItem (int index);
private:
};
}}