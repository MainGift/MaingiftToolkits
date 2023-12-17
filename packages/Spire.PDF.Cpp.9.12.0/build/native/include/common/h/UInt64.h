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
class EXPORTS UInt64 : public virtual Object
{
public:
    UInt64();
    UInt64(unsigned long value);
    unsigned long Value();
    ///*

    //*/
    ////virtual int CompareTo (System.Object value);
    ///*

    //*/
    //virtual int CompareTo (UInt64* value);
    ///*

    //*/
    ////virtual bool Equals (System.Object obj);
    ///*

    //*/
    //virtual bool Equals (UInt64* obj);
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
    //static UInt64* Parse (LPCWSTR_S s);
    ///*

    //*/
    ////static UInt64* Parse (LPCWSTR_S s,System.Globalization.NumberStyles style);
    ///*

    //*/
    ////static UInt64* Parse (LPCWSTR_S s,System.IFormatProvider provider);
    ///*

    //*/
    ////static UInt64* Parse (LPCWSTR_S s,System.Globalization.NumberStyles style,System.IFormatProvider provider);
    ///*

    //*/
    ////static bool TryParse (LPCWSTR_S s,System.UInt64& result);
    ///*

    //*/
    ////static bool TryParse (LPCWSTR_S s,System.Globalization.NumberStyles style,System.IFormatProvider provider,System.UInt64& result);
    ///*

    //*/
    ////virtual System.TypeCode GetTypeCode ();
    ///*

    //*/
    //static UInt64* MaxValue ();
    ///*

    //*/
    //static UInt64* MinValue ();

private:
};
}}