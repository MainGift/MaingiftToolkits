#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents an action for the document.
    </summary>
*/
class EXPORTS PdfDocumentActions : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the action to execute when the document is opened. 
    </summary>
<value>A  specifying the action to be executed when documents opens in the viewer. </value>
    */
    intrusive_ptr<PdfAction> GetAfterOpenAction ();
    /*

    */
    void SetAfterOpenAction (intrusive_ptr<PdfAction> value);
    /*
    <summary>
        Gets or sets the action to be performed before the document is closed.
    </summary>
<value>A  object specifying the action to be executed before the document is closed. </value>
    */
    intrusive_ptr<PdfJavaScriptAction> GetBeforeCloseAction ();
    /*

    */
    void SetBeforeCloseAction (intrusive_ptr<PdfJavaScriptAction> value);
    /*
    <summary>
        Gets or sets the java script action to be performed before the document is saved.
    </summary>
<value>A  object specifying the action to be executed before the document is saved. </value>
    */
    intrusive_ptr<PdfJavaScriptAction> GetBeforeSaveAction ();
    /*

    */
    void SetBeforeSaveAction (intrusive_ptr<PdfJavaScriptAction> value);
    /*
    <summary>
        Gets or sets the jave script action to be performed after the document is saved.
    </summary>
<value>A  object specifying the action to be executed after the document is saved.</value>
    */
    intrusive_ptr<PdfJavaScriptAction> GetAfterSaveAction ();
    /*

    */
    void SetAfterSaveAction (intrusive_ptr<PdfJavaScriptAction> value);
    /*
    <summary>
        Gets or sets the action to be performed before the document is printed.
    </summary>
<value>A  object specifying the action to be executed before the document is printed. </value>
    */
    intrusive_ptr<PdfJavaScriptAction> GetBeforePrintAction ();
    /*

    */
    void SetBeforePrintAction (intrusive_ptr<PdfJavaScriptAction> value);
    /*
    <summary>
        Gets or sets the action to be performed after the document is printed.
    </summary>
<value>A  object specifying the action to be executed after the document is printed. .</value>
    */
    intrusive_ptr<PdfJavaScriptAction> GetAfterPrintAction ();
    /*

    */
    void SetAfterPrintAction (intrusive_ptr<PdfJavaScriptAction> value);
private:
};
}}