#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/RectangleF.h"
#include "PdfCheckFieldBase.h"
#include "PdfForm.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents an item of a radio button list.
    </summary>
*/
class EXPORTS PdfRadioButtonListItem : public virtual PdfCheckFieldBase
{
public:
    PdfRadioButtonListItem();

    PdfRadioButtonListItem(LPCWSTR_S value);
    /*
    <summary>
        Gets the form of the field.
    </summary>
<value>The  object of the field.</value>
    */
    virtual intrusive_ptr<PdfForm> GetForm ();
    /*
    <summary>
        Gets or sets the bounds.
    </summary>
    */
    virtual intrusive_ptr<RectangleF> GetBounds ();
    /*

    */
    virtual void SetBounds (intrusive_ptr<RectangleF> value);
    /*
    <summary>
        Gets or sets the value.
    </summary>
<value>The value.</value>
    */
    LPCWSTR_S GetValue ();
    /*

    */
    void SetValue (LPCWSTR_S value);
private:
};
}}