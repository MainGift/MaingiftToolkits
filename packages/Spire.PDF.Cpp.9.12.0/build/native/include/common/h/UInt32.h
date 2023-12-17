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
class EXPORTS UInt32 : public virtual Object
{
public:
    UInt32();
    UInt32(unsigned int value);
    unsigned int Value();
    ///*

    //*/
    ////virtual int CompareTo (System.Object value);
    ///*

    //*/
    //virtual int CompareTo (UInt32* value);
    ///*

    //*/
    ////virtual bool Equals (System.Object obj);
    ///*

    //*/
    //virtual bool Equals (UInt32* obj);
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
    //static UInt32* Parse (LPCWSTR_S s);
    ///*

    //*/
    ////static UInt32* Parse (LPCWSTR_S s,System.Globalization.NumberStyles style);
    ///*

    //*/
    ////static UInt32* Parse (LPCWSTR_S s,System.IFormatProvider provider);
    ///*

    //*/
    ////static UInt32* Parse (LPCWSTR_S s,System.Globalization.NumberStyles style,System.IFormatProvider provider);
    ///*

    //*/
    ////static bool TryParse (LPCWSTR_S s,System.UInt32& result);
    ///*

    //*/
    ////static bool TryParse (LPCWSTR_S s,System.Globalization.NumberStyles style,System.IFormatProvider provider,System.UInt32& result);
    ///*

    //*/
    ////virtual System.TypeCode GetTypeCode ();
    ///*

    //*/
    //static UInt32* MaxValue ();
    ///*

    //*/
    //static UInt32* MinValue ();

private:
};
}}