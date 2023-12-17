#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfPageBase.h"
#include "PdfField.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents radio button field in the PDF form.
    </summary>
*/
class EXPORTS PdfRadioButtonListField : public virtual PdfField
{
public:
    PdfRadioButtonListField();
    PdfRadioButtonListField(intrusive_ptr<PdfPageBase> page, LPCWSTR_S name);
    /*
    <summary>
        Gets or sets the first selected item in the list. 
    </summary>
<value>The index of the selected item.</value>
    */
    int GetSelectedIndex ();
    /*

    */
    void SetSelectedIndex (int value);
    /*
    <summary>
        Gets or sets the value of the first selected item in the list.
    </summary>
<value>The selected value of the list field.</value>
    */
    LPCWSTR_S GetSelectedValue ();
    /*

    */
    void SetSelectedValue (LPCWSTR_S value);
    /*
    <summary>
        Gets the first selected item in the list.
    </summary>
<value>The selected item of the field.</value>
    */
    intrusive_ptr<PdfRadioButtonListItem> GetSelectedItem ();
    /*
    <summary>
        Gets the items of the radio button field.
    </summary>
<value>The radio button field item collection.</value>
    */
    intrusive_ptr<PdfRadioButtonItemCollection> GetItems ();
private:
};
}}