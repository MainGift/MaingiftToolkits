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
class EXPORTS XfaIntField : public virtual XfaField
{
public:
    /*

    */
    int GetValue ();
    /*

    */
    void SetValue (int value);
private:
};
}}