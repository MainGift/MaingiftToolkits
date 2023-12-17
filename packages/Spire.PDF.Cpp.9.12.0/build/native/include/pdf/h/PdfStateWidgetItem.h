#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfFieldWidgetItem.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the loaded state item.
    </summary>
*/
class EXPORTS PdfStateWidgetItem : public virtual PdfFieldWidgetItem
{
public:
    /*
    <summary>
        Gets or sets a value indicating whether this  is checked.
    </summary>
    */
    bool GetChecked ();
    /*

    */
    void SetChecked (bool value);
private:
};
}}