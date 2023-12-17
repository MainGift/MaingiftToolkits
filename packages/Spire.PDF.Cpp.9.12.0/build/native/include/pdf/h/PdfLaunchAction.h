#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfAction.h"
#include "PdfFilePathType.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents an action which launches an application or opens or prints a document.
    </summary>
*/
class EXPORTS PdfLaunchAction : public virtual PdfAction
{
public:
    PdfLaunchAction();
    PdfLaunchAction(LPCWSTR_S fileName);

    PdfLaunchAction(LPCWSTR_S fileName, PdfFilePathType path);
    /*
    <summary>
        Gets or sets file to be launched.
    </summary>
    */
    LPCWSTR_S GetFileName ();
    /*

    */
    void SetFileName (LPCWSTR_S value);
    /*
    <summary>
        Indicates the target document should be opened in a new window or not.
    </summary>
    */
    bool GetIsNewWindow ();
    /*

    */
    void SetIsNewWindow (bool value);
private:
};
}}