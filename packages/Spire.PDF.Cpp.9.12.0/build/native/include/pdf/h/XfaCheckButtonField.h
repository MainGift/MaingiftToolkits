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
class EXPORTS XfaCheckButtonField : public virtual XfaField
{
public:
    /*

    */
    //System.Collections.Generic.List`1[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetItems ();
    /*

    */
    bool GetChecked ();
    /*

    */
    void SetChecked (bool value);
private:
};
}}