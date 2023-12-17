#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfAction.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfGotoNameAction : public virtual PdfAction
{
public:
    /*
    <summary>
        Gets or sets the destination.
    </summary>
<value>The destination.</value>
    */
    LPCWSTR_S GetDestination ();
    /*

    */
    void SetDestination (LPCWSTR_S value);
private:
};
}}