#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfCollection.h"
#include "PdfStateWidgetItem.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the collection of loaded state item.
    </summary>
*/
class EXPORTS PdfStateWidgetItemCollection : public virtual PdfCollection
{
public:
    /*
    <summary>
        Gets the  at the specified index.
    </summary>
    */
    intrusive_ptr<PdfStateWidgetItem> GetItem (int index);
private:
};
}}