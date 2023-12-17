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
class EXPORTS Int64 : public virtual Object
{
public:
    Int64();
    Int64(long value);
    long Value();
    ///*

    //*/
    ////virtual int CompareTo (System.Object value);
    ///*

    //*/
    //virtual int CompareTo (long value);
    ///*

    //*/
    ////virtual bool Equals (System.Object obj);
    ///*

    //*/
    //virtual bool Equals (long obj);
    ///*

    //*/
    //virtual int GetHashCode ();
    ///*

    //*/
    //virtual LPCWSTR_S ToString ();
    ///*

    //*/
    ////virtual LPCWSTR_S ToString (System.IFormatProvider provider);
    ///*

    //*/
    //LPCWSTR_S ToString (LPCWSTR_S format);
    ///*

    //*/
    ////virtual LPCWSTR_S ToString (LPCWSTR_S format,System.IFormatProvider provider);
    ///*

    //*/
    //static long Parse (LPCWSTR_S s);
    ///*

    //*/
    ////static long Parse (LPCWSTR_S s,System.Globalization.NumberStyles style);
    ///*

    //*/
    ////static long Parse (LPCWSTR_S s,System.IFormatProvider provider);
    ///*

    //*/
    ////static long Parse (LPCWSTR_S s,System.Globalization.NumberStyles style,System.IFormatProvider provider);
    ///*

    //*/
    ////static bool TryParse (LPCWSTR_S s,System.Int64& result);
    ///*

    //*/
    ////static bool TryParse (LPCWSTR_S s,System.Globalization.NumberStyles style,System.IFormatProvider provider,System.Int64& result);
    ///*

    //*/
    ////virtual System.TypeCode GetTypeCode ();
    ///*

    //*/
    //static long MaxValue ();
    ///*

    //*/
    //static long MinValue ();

private:
};
}}