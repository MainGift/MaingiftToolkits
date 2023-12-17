#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XfaField.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS XfaDateTimeField : public virtual XfaField
{
public:
    /*

    */
    LPCWSTR_S GetValue ();
    /*

    */
    void SetValue (LPCWSTR_S value);
    /*

    */
    LPCWSTR_S GetDateTimeFormats ();
private:
};
}}