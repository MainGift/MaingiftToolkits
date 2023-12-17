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
        Represents check box of an existing PDF document`s form. 
    </summary>
*/
class EXPORTS PdfCheckBoxWidgetFieldWidget : public virtual PdfStateFieldWidget
{
public:
    /*
    <summary>
        Gets or sets a value indicating whether this  is checked.
    </summary>
<value>True if the check box is checked, false otherwise. </value>
    */
    bool GetChecked ();
    /*

    */
    void SetChecked (bool value);
    /*
    <summary>
        Gets the collection check box items.
    </summary>
    */
    intrusive_ptr<PdfCheckBoxWidgetWidgetItemCollection> GetWidgetWidgetItems ();
    /*
    <summary>
        Set the export value.
    </summary>
    <param name="exportValue">The export value</param>
    */
    void SetExportValue (LPCWSTR_S exportValue);
    /*
    <summary>
        Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}