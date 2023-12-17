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
class EXPORTS XfaBarcodeField : public virtual XfaField
{
public:
    /*

    */
    int GetLength ();
    /*

    */
    void SetLength (int value);
    /*

    */
    LPCWSTR_S GetValue ();
    /*

    */
    void SetValue (LPCWSTR_S value);
    /*

    */
    //System.Char GetStartChar ();
    /*

    */
    //void SetStartChar (System.Char value);
    /*

    */
    //System.Char GetEndChar ();
    /*

    */
    //void SetEndChar (System.Char value);
private:
};
}}