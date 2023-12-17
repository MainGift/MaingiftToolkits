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
class EXPORTS XfaChoiceListField : public virtual XfaField
{
public:
    /*

    */
    bool GetIsMultiSelect ();
    /*

    */
    //System.Collections.Generic.List`1[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetItems ();
    /*

    */
    LPCWSTR_S GetEvents ();
    /*

    */
    LPCWSTR_S GetSelectedItem ();
    /*

    */
    void SetSelectedItem (LPCWSTR_S value);
    /*

    */
    //System.Collections.Generic.List`1[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetSelectedItems ();
    /*

    */
    //void SetSelectedItems (System.Collections.Generic.List`1[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] value);
private:
};
}}