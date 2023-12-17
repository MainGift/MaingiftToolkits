#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfDestination.h"
#include "PdfAction.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents an embedded go-to action which allows jumping to or from a PDF file that is embedded in another PDF file.
    </summary>
*/
class EXPORTS PdfEmbeddedGoToAction : public virtual PdfAction
{
public:
    PdfEmbeddedGoToAction();
    PdfEmbeddedGoToAction(LPCWSTR_S fileName, intrusive_ptr<PdfDestination> dest, bool newWindow);
    /*
    <summary>
        Indicates the target document should be opened in a new window or not.
    </summary>
    */
    bool GetIsNewWindow ();
    /*

    */
    void SetIsNewWindow (bool value);
    /*
    <summary>
        The target document name.
    </summary>
    */
    LPCWSTR_S GetFileName ();
    /*

    */
    void SetFileName (LPCWSTR_S value);
    /*
    <summary>
        The destination in the target document to jump to.
    </summary>
    */
    intrusive_ptr<PdfDestination> GetDestination ();
private:
};
}}