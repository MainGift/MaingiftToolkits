#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfChoiceWidgetFieldWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the combo box field of an existing item.
    </summary>
*/
class EXPORTS PdfComboBoxWidgetFieldWidget : public virtual PdfChoiceWidgetFieldWidget
{
public:
    /*
    <summary>
        Gets or sets a value indicating whether this  is editable.
    </summary>
<value>True if the drop down list is editable, false otherwise. Default is false.</value>
    */
    bool GetEditable ();
    /*

    */
    void SetEditable (bool value);
    /*
    <summary>
        Gets the collection of combo box items.
    </summary>
    */
    intrusive_ptr<PdfComboBoxWidgetItemCollection> GetWidgetItems ();
    /*

    */
    LPCWSTR_S GetSelectedValue ();
    /*

    */
    void SetSelectedValue (LPCWSTR_S value);
    /*
    <summary>
        Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}