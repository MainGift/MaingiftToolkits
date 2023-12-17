#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
<remarks />
*/
class EXPORTS NamedElement : public virtual Object
{
public:
    /*
<remarks />
    */
    LPCWSTR_S GetNameReference ();
    /*

    */
    void SetNameReference (LPCWSTR_S value);
private:
};
}}