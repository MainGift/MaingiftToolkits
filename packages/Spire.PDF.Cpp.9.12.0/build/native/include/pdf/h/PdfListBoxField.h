#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfPageBase.h"
#include "PdfListField.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents list box field of the PDF form.
    </summary>
*/
class EXPORTS PdfListBoxField : public virtual PdfListField
{
public:
    PdfListBoxField();
    PdfListBoxField(intrusive_ptr<PdfPageBase> page, LPCWSTR_S name);
    /*
    <summary>
        Gets or sets a value indicating whether the field is multiselectable.
    </summary>
<value>
  <c>true</c> if multiselectable; otherwise, <c>false</c>.</value>
    */
    bool GetMultiSelect ();
    /*

    */
    void SetMultiSelect (bool value);
private:
};
}}