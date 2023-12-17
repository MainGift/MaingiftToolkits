#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents additional actions of the annotations.
    </summary>
*/
class EXPORTS PdfAnnotationActions : public virtual Object
{
public:
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
        Gets or sets the action to be performed when the mouse button is pressed inside the 
            annotations active area.
    </summary>
<value>The mouse down action.</value>
    */
    intrusive_ptr<PdfAction> GetMouseDown ();
    /*

    */
    void SetMouseDown (intrusive_ptr<PdfAction> value);
    /*
    <summary>
        Gets or sets the action to be performed when the mouse button is released 
            inside the annotations active area..
    </summary>
<value>The mouse up action.</value>
    */
    intrusive_ptr<PdfAction> GetMouseUp ();
    /*

    */
    void SetMouseUp (intrusive_ptr<PdfAction> value);
    /*
    <summary>
        Gets or sets the action to be performed when the annotation receives the 
            input focus.
    </summary>
<value>The got focus action.</value>
    */
    intrusive_ptr<PdfAction> GetGotFocus ();
    /*

    */
    void SetGotFocus (intrusive_ptr<PdfAction> value);
    /*
    <summary>
        Gets or sets the action to be performed when the annotation loses the 
            input focus.
    </summary>
<value>The lost focus action.</value>
    */
    intrusive_ptr<PdfAction> GetLostFocus ();
    /*

    */
    void SetLostFocus (intrusive_ptr<PdfAction> value);
    /*

    */
    intrusive_ptr<PdfJavaScriptAction> GetCaculate ();
    /*

    */
    void SetCaculate (intrusive_ptr<PdfJavaScriptAction> value);
    /*

    */
    intrusive_ptr<PdfJavaScriptAction> GetValidate ();
    /*

    */
    void SetValidate (intrusive_ptr<PdfJavaScriptAction> value);
    /*

    */
    intrusive_ptr<PdfJavaScriptAction> GetKeyPressed ();
    /*

    */
    void SetKeyPressed (intrusive_ptr<PdfJavaScriptAction> value);
    /*

    */
    intrusive_ptr<PdfJavaScriptAction> GetFormat ();
    /*

    */
    void SetFormat (intrusive_ptr<PdfJavaScriptAction> value);
private:
};
}}