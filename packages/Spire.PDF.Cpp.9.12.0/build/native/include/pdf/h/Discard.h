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
class EXPORTS Discard : public virtual Object
{
public:
    /*
<remarks />
    */
    LPCWSTR_S GetSentinelPage ();
    /*

    */
    void SetSentinelPage (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetTarget ();
    /*

    */
    void SetTarget (LPCWSTR_S value);
private:
};
}}