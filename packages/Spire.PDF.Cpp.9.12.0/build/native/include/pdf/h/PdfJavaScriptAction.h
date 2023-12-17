#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfAction.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents an action which performs java script action in pdf document.
    </summary>
*/
class EXPORTS PdfJavaScriptAction : public virtual PdfAction
{
public:
    PdfJavaScriptAction();
    PdfJavaScriptAction(LPCWSTR_S javaScript);
    /*
    <summary>
        Gets or sets the javascript code to be executed when this action is executed. 
     </summary>
<value>A string value representing valid javascript code to be executed. </value>
    */
    LPCWSTR_S GetScript ();
    /*

    */
    void SetScript (LPCWSTR_S value);
private:
};
}}