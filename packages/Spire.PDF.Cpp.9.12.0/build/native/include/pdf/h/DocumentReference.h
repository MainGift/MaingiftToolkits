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
class EXPORTS DocumentReference : public virtual Object
{
public:
    /*
<remarks />
    */
    LPCWSTR_S GetSource ();
    /*

    */
    void SetSource (LPCWSTR_S value);
private:
};
}}