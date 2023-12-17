#pragma once
#include "pch.h"
#include "XFAForm.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS XfaField : public virtual Object
{
public:
    /*

    */
    LPCWSTR_S GetName ();
    /*

    */
    intrusive_ptr<XFAForm> GetXfaForm ();
    /*

    */
    LPCWSTR_S GetFieldType ();
private:
};
}}