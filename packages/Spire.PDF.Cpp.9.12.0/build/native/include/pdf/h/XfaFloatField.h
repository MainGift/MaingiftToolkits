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
class EXPORTS XfaFloatField : public virtual XfaField
{
public:
    /*

    */
    float GetValue ();
    /*

    */
    void SetValue (float value);
private:
};
}}