#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents loaded list item.
    </summary>
*/
class EXPORTS PdfListWidgetItem : public virtual Object
{
public:
    PdfListWidgetItem();
    PdfListWidgetItem(LPCWSTR_S text, LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the text.
    </summary>
<value>A string value representing the display text of the item. </value>
    */
    LPCWSTR_S GetText ();
    /*

    */
    void SetText (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the value.
    </summary>
<value>A string value representing the value of the item. </value>
    */
    LPCWSTR_S GetValue ();
    /*

    */
    void SetValue (LPCWSTR_S value);
private:
};
}}