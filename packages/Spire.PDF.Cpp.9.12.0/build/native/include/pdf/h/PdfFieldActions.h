#pragma once
#include "pch.h"
#include "PdfJavaScriptAction.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents actions to be performed as response to field events. 
    </summary>
*/
class EXPORTS PdfFieldActions : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the JavaScript action to be performed when the user types a keystroke 
            into a text field or combo box or modifies the selection in a scrollable list box. 
            This action can check the keystroke for validity and reject or modify it.
    </summary>
<value>A  object specifying the action to be executed when the user types a keystroke.</value>
    */
    intrusive_ptr<PdfJavaScriptAction> GetKeyPressed ();
    /*

    */
    void SetKeyPressed (intrusive_ptr<PdfJavaScriptAction> value);
    /*
    <summary>
        Gets or sets the JavaScript action to be performed before the field is formatted 
            to display its current value.
    </summary>
<value>A  object specifying the action to be executed for formating the field value.</value>
    */
    intrusive_ptr<PdfJavaScriptAction> GetFormat ();
    /*

    */
    void SetFormat (intrusive_ptr<PdfJavaScriptAction> value);
    /*
    <summary>
        Gets or sets the JavaScript action to be performed
            This action can check the new value for validity.
    </summary>
<value>A  object specifying the action to be executed for validating the field value.</value>
    */
    intrusive_ptr<PdfJavaScriptAction> GetValidate ();
    /*

    */
    void SetValidate (intrusive_ptr<PdfJavaScriptAction> value);
    /*
    <summary>
        Gets or sets the JavaScript action to be performed to recalculate the value 
            of this field when that of another field changes.
    </summary>
<value>A  object specifying the action to be executed for calculating the field value.</value>
    */
    intrusive_ptr<PdfJavaScriptAction> GetCalculate ();
    /*

    */
    void SetCalculate (intrusive_ptr<PdfJavaScriptAction> value);
    /*

    */
    intrusive_ptr<PdfAction> GetMouseEnter ();
    /*

    */
    void SetMouseEnter (intrusive_ptr<PdfAction> value);
    /*

    */
    intrusive_ptr<PdfAction> GetMouseLeave ();
    /*

    */
    void SetMouseLeave (intrusive_ptr<PdfAction> value);
    /*
    <summary>
        Gets or sets the action to be performed when the mouse button is released 
            inside the fields area.
    </summary>
<value>A  descendant specifying the action to be executed when the mouse button is released inside the field's area.</value>
    */
    intrusive_ptr<PdfAction> GetMouseUp ();
    /*

    */
    void SetMouseUp (intrusive_ptr<PdfAction> value);
    /*
    <summary>
        Gets or sets the action to be performed when the mouse button is pressed inside the 
            fields area.
    </summary>
<value>A  descendant specifying the action to be executed when the mouse button is pressed inside the field's area.</value>
    */
    intrusive_ptr<PdfAction> GetMouseDown ();
    /*

    */
    void SetMouseDown (intrusive_ptr<PdfAction> value);
    /*
    <summary>
        Gets or sets the action to be performed when the field receives the 
            input focus.
    </summary>
<value>A  descendant specifying the action to be executed when the field receives the input focus.</value>
    */
    intrusive_ptr<PdfAction> GetGotFocus ();
    /*

    */
    void SetGotFocus (intrusive_ptr<PdfAction> value);
    /*
    <summary>
        Gets or sets the action to be performed when the field loses the 
            input focus.
    </summary>
<value>A  descendant specifying the action to be executed when the field losts the input focus.</value>
    */
    intrusive_ptr<PdfAction> GetLostFocus ();
    /*

    */
    void SetLostFocus (intrusive_ptr<PdfAction> value);
private:
};
}}