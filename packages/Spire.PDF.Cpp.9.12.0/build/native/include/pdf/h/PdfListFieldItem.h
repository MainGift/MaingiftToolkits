#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents an item of the list fields.
    </summary>
*/
class EXPORTS PdfListFieldItem : public virtual Object
{
public:
    PdfListFieldItem();

    PdfListFieldItem(LPCWSTR_S text, LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the text.
    </summary>
<value>The text of the list item field.</value>
    */
    LPCWSTR_S GetText ();
    /*

    */
    void SetText (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the value.
    </summary>
<value>The value of the list item field.</value>
    */
    LPCWSTR_S GetValue ();
    /*

    */
    void SetValue (LPCWSTR_S value);
private:
};
}}