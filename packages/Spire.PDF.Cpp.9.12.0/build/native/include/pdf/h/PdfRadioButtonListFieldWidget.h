#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfStateFieldWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents radio button field of an existing PDF document`s form.
    </summary>
*/
class EXPORTS PdfRadioButtonListFieldWidget : public virtual PdfStateFieldWidget
{
public:
    /*
    <summary>
        Gets the collection of radio button items.
    </summary>
<value>A  that represents the items within the list.</value>
    */
    intrusive_ptr<PdfRadioButtonWidgetWidgetItemCollection> GetWidgetWidgetItems ();
    /*
    <summary>
        Gets or sets the index of the selected item in the list.
    </summary>
<value>The lowest ordinal index of the selected items in the list. The default is -1, which indicates that nothing is selected. </value>
    */
    int GetSelectedIndex ();
    /*

    */
    void SetSelectedIndex (int value);
    /*
    <summary>
        Gets or sets the value of the first selected item in the list. 
    </summary>
<value>A string value specifying the value of the first selected item, null (Nothing in VB.NET) if there is no selected item.</value>
    */
    LPCWSTR_S GetSelectedValue ();
    /*

    */
    void SetSelectedValue (LPCWSTR_S value);
    /*
    <summary>
        Gets the selected item.
    </summary>
<value>Return the item as PdfLoadedRadioButtonItem class</value>
    */
    intrusive_ptr<PdfRadioButtonWidgetItem> GetSelectedItem ();
    /*
    <summary>
        Gets the button style.
    </summary>
    */
    PdfCheckBoxStyle GetButtonStyle ();
    /*
    <summary>
        Gets or sets the value of specified item.
    </summary>
<value>A string value representing the value of the item.</value>
    */
    LPCWSTR_S GetValue ();
    /*

    */
    void SetValue (LPCWSTR_S value);
    /*
    <summary>
        Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}