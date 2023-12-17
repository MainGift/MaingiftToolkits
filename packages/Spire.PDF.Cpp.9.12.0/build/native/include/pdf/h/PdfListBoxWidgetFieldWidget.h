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
        Represents loaded list box field.
    </summary>
*/
class EXPORTS PdfListBoxWidgetFieldWidget : public virtual PdfChoiceWidgetFieldWidget
{
public:
    /*
    <summary>
        Gets or sets a value indicating whether the field is multiselectable..
    </summary>
    */
    bool GetMultiSelect ();
    /*

    */
    void SetMultiSelect (bool value);
    /*
    <summary>
        Gets the items.
    </summary>
<value>The collection of list box items.</value>
    */
    intrusive_ptr<PdfListWidgetFieldItemCollection> GetItems ();
    /*
    <summary>
        Form field identifier
    </summary>
    */
    int ObjectID ();
private:
};
}}