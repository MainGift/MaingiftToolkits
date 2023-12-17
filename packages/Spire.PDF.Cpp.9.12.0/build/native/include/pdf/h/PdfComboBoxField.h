#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IPdfComboBoxField.h"
#include "PdfPageBase.h"
#include "PdfListField.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents combo box field in the PDF Form.
    </summary>
*/
class EXPORTS PdfComboBoxField : public virtual PdfListField/*,public virtual IPdfComboBoxField*/
{
public:
    PdfComboBoxField();
    PdfComboBoxField(intrusive_ptr<PdfPageBase> page, LPCWSTR_S name);
    /*
    <summary>
        Gets or sets a value indicating whether this  is editable.
    </summary>
<value>
  <c>true</c> if editable; otherwise, <c>false</c>.</value>
    */
    virtual bool GetEditable ();
    /*

    */
    virtual void SetEditable (bool value);
private:
};
}}