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
        Represents collection of button item.
    </summary>
*/
class EXPORTS PdfButtonWidgetItemCollection : public virtual PdfCollection
{
public:
    /*
    <summary>
        Gets the  at the specified index.
    </summary>
    */
    intrusive_ptr<PdfButtonWidgetWidgetItem> GetItem (int index);
private:
};
}}