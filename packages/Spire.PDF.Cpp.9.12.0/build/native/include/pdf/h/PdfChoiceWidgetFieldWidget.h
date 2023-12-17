#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfStyledFieldWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a choice field of an existing PDF document`s form.
    </summary>
*/
class EXPORTS PdfChoiceWidgetFieldWidget : public virtual PdfStyledFieldWidget
{
public:
    /*
    <summary>
        Gets the collection of choice items.
    </summary>
    */
    intrusive_ptr<PdfListWidgetItemCollection> GetValues ();
    /*
    <summary>
        Gets or sets the first selected item in the list.
    </summary>
    */
    std::vector<int> GetSelectedIndex ();
    /*

    */
    void SetSelectedIndex (std::vector<int> value);
    /*
    <summary>
        Gets or sets the value of the first selected item in the list.
    </summary>
    */
    LPCWSTR_S GetSelectedValue ();
    /*

    */
    void SetSelectedValue (LPCWSTR_S value);
    /*
    <summary>
        Gets the first selected item in the list.
    </summary>
    */
    intrusive_ptr<PdfListWidgetItemCollection> GetSelectedWidgetItem ();
    /*
    <summary>
        Gets the first selected item in the list.
    </summary>
    */
    intrusive_ptr<PdfListWidgetItemCollection> GetSelectedItem ();
    /*
    <summary>
        Gets or sets the flag indicating if a new value selected is committed immediately without waiting to leave the field.
    </summary>
    */
    bool GetCommitOnSelChange ();
    /*

    */
    void SetCommitOnSelChange (bool value);
    /*
    <summary>
        Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}