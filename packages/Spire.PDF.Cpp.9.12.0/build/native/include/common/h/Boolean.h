#pragma once
#include "common.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
#ifdef _SPIRE_XLS
namespace Xls{
#elif defined(_SPIRE_DOC)
namespace Doc{
#elif defined(_SPIRE_PDF)
namespace Pdf{
#elif defined(_SPIRE_PPT)
namespace Presentation{
#else
namespace Xls{
#endif
/*

*/
class EXPORTS Boolean : public virtual Object
{
public:
    Boolean();
    Boolean(bool value);
    bool Value();
    ///*

    //*/
    //virtual int GetHashCode ();
    ///*

    //*/
    ////virtual bool Equals (System.Object obj);
    ///*

    //*/
    //virtual bool Equals (bool obj);
    ///*

    //*/
    ////virtual int CompareTo (System.Object obj);
    ///*

    //*/
    //virtual int CompareTo (bool value);
    ///*

    //*/
    //static bool Parse (LPCWSTR_S value);
    ///*

    //*/
    ////virtual System.TypeCode GetTypeCode ();
    ///*

    //*/
    //virtual LPCWSTR_S ToString ();
    ///*

    //*/
    ////virtual LPCWSTR_S ToString (System.IFormatProvider provider);
    ///*

    //*/
    ////static bool TryParse (LPCWSTR_S value,System.Boolean& result);
    ///*

    //*/
    //static LPCWSTR_S TrueString ();
    ///*

    //*/
    //static LPCWSTR_S FalseString ();
private:
};
}}