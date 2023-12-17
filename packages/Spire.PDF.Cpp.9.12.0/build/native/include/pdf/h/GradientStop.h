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
class EXPORTS GradientStop : public virtual Object
{
public:
    /*
<remarks />
    */
    LPCWSTR_S GetColor ();
    /*

    */
    void SetColor (LPCWSTR_S value);
    /*
<remarks />
    */
    double GetOffset ();
    /*

    */
    void SetOffset (double value);
private:
};
}}