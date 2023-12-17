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
class EXPORTS XfaDoubleField : public virtual XfaField
{
public:
    /*

    */
    double GetValue ();
    /*

    */
    void SetValue (double value);
private:
};
}}