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
class EXPORTS MatrixTransform : public virtual Object
{
public:
    /*
<remarks />
    */
    LPCWSTR_S GetMatrix ();
    /*

    */
    void SetMatrix (LPCWSTR_S value);
    /*
<remarks />
    */
    LPCWSTR_S GetKey ();
    /*

    */
    void SetKey (LPCWSTR_S value);
private:
};
}}