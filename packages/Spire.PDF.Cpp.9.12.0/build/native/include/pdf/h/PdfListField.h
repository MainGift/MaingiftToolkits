#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfAppearanceField.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents base class form's list fields.
    </summary>
*/
class EXPORTS PdfListField : public virtual PdfAppearanceField
{
public:
    /*
    <summary>
        Gets the items.
    </summary>
<value>The items.</value>
    */
    intrusive_ptr<PdfListFieldItemCollection> GetItems ();
    /*
    <summary>
        Gets or sets the first selected item in the list. 
    </summary>
<value>The index of the selected item.</value>
    */
    virtual int GetSelectedIndex ();
    /*

    */
    virtual void SetSelectedIndex (int value);
    /*
    <summary>
        Gets or sets the value of the first selected item in the list.
    </summary>
<value>The selected value.</value>
    */
    virtual LPCWSTR_S GetSelectedValue ();
    /*

    */
    virtual void SetSelectedValue (LPCWSTR_S value);
    /*
    <summary>
        Gets the first selected item in the list.
    </summary>
<value>The selected item.</value>
    */
    virtual intrusive_ptr<PdfListFieldItem> GetSelectedItem ();
    /*
    <summary>
        Gets or sets the flag indicating if a new value selected is committed immediately without waiting to leave the field.
    </summary>
    */
    bool GetCommitOnSelChange ();
    /*

    */
    void SetCommitOnSelChange (bool value);
private:
};
}}