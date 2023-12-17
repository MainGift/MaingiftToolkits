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
class EXPORTS Single : public virtual Object
{
public:
    Single();
    Single(float value);
    float Value();
    ///*

    //*/
    //static bool IsInfinity (float f);
    ///*

    //*/
    //static bool IsPositiveInfinity (float f);
    ///*

    //*/
    //static bool IsNegativeInfinity (float f);
    ///*

    //*/
    //static bool IsNaN (float f);
    ///*

    //*/
    ////virtual int CompareTo (System.Object value);
    ///*

    //*/
    //virtual int CompareTo (float value);
    ///*

    //*/
    //static bool op_Equality (float left,float right);
    ///*

    //*/
    //static bool op_Inequality (float left,float right);
    ///*

    //*/
    //static bool op_LessThan (float left,float right);
    ///*

    //*/
    //static bool op_GreaterThan (float left,float right);
    ///*

    //*/
    //static bool op_LessThanOrEqual (float left,float right);
    ///*

    //*/
    //static bool op_GreaterThanOrEqual (float left,float right);
    ///*

    //*/
    ////virtual bool Equals (System.Object obj);
    ///*

    //*/
    //virtual bool Equals (float obj);
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
    //static float Parse (LPCWSTR_S s);
    ///*

    //*/
    ////static float Parse (LPCWSTR_S s,System.Globalization.NumberStyles style);
    ///*

    //*/
    ////static float Parse (LPCWSTR_S s,System.IFormatProvider provider);
    ///*

    //*/
    ////static float Parse (LPCWSTR_S s,System.Globalization.NumberStyles style,System.IFormatProvider provider);
    ///*

    //*/
    ////static bool TryParse (LPCWSTR_S s,System.Single& result);
    ///*

    //*/
    ////static bool TryParse (LPCWSTR_S s,System.Globalization.NumberStyles style,System.IFormatProvider provider,System.Single& result);
    ///*

    //*/
    ////virtual System.TypeCode GetTypeCode ();
    ///*

    //*/
    //static float MinValue ();
    ///*

    //*/
    //static float Epsilon ();
    ///*

    //*/
    //static float MaxValue ();
    ///*

    //*/
    //static float PositiveInfinity ();
    ///*

    //*/
    //static float NegativeInfinity ();
    ///*

    //*/
    //static float NaN ();

private:
};
}}