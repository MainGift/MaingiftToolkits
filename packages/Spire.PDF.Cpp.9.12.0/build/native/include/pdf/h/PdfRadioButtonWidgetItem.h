#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfStateWidgetItem.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents radio button field of an existing PDF document`s form.
    </summary>
*/
class EXPORTS PdfRadioButtonWidgetItem : public virtual PdfStateWidgetItem
{
public:
    /*
    <summary>
        Gets or sets the value.
    </summary>
<value>The value of the radio button item.</value>
    */
    LPCWSTR_S GetValue ();
    /*

    */
    void SetValue (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets a value indicating whether this  is selected.
    </summary>
    */
    bool GetSelected ();
    /*

    */
    void SetSelected (bool value);
private:
};
}}