#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfPageBase.h"
#include "PdfCheckFieldBase.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents check box field in the PDF form.
    </summary>
*/
class EXPORTS PdfCheckBoxField : public virtual PdfCheckFieldBase
{
public:
    PdfCheckBoxField();

    PdfCheckBoxField(intrusive_ptr<PdfPageBase> page, LPCWSTR_S name);
    /*
    <summary>
        Gets or sets a value indicating whether this  is checked.
    </summary>
<value>
  <c>true</c> if checked; otherwise, <c>false</c>.</value>
    */
    bool GetChecked ();
    /*

    */
    void SetChecked (bool value);
private:
};
}}