#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfStyledField.h"
#include "PdfCheckBoxStyle.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents base class for field which can be in checked and unchecked states.
    </summary>
*/
class EXPORTS PdfCheckFieldBase : public virtual PdfStyledField
{
public:
    /*
    <summary>
        Gets or sets the style.
    </summary>
<value>The  object specifies the style of the check box field.</value>
    */
    PdfCheckBoxStyle GetStyle ();
    /*

    */
    void SetStyle (PdfCheckBoxStyle value);
private:
};
}}