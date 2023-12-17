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
class EXPORTS PolyQuadraticBezierSegment : public virtual Object
{
public:
    /*
<remarks />
    */
    LPCWSTR_S GetPoints ();
    /*

    */
    void SetPoints (LPCWSTR_S value);
    /*
<remarks />
    */
    bool GetIsStroked ();
    /*

    */
    void SetIsStroked (bool value);
private:
};
}}