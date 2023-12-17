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
class EXPORTS Double : public virtual Object
{
public:
    Double();
    Double(double value);
    double Value();
    ///*

    //*/
    //static bool IsInfinity (double d);
    ///*

    //*/
    //static bool IsPositiveInfinity (double d);
    ///*

    //*/
    //static bool IsNegativeInfinity (double d);
    ///*

    //*/
    //static bool IsNaN (double d);
    ///*

    //*/
    ////virtual int CompareTo (System.Object value);
    ///*

    //*/
    //virtual int CompareTo (double value);
    ///*

    //*/
    ////virtual bool Equals (System.Object obj);
    ///*

    //*/
    //static bool op_Equality (double left,double right);
    ///*

    //*/
    //static bool op_Inequality (double left,double right);
    ///*

    //*/
    //static bool op_LessThan (double left,double right);
    ///*

    //*/
    //static bool op_GreaterThan (double left,double right);
    ///*

    //*/
    //static bool op_LessThanOrEqual (double left,double right);
    ///*

    //*/
    //static bool op_GreaterThanOrEqual (double left,double right);
    ///*

    //*/
    //virtual bool Equals (double obj);
    ///*

    //*/
    //virtual int GetHashCode ();
    ///*

    //*/
    //virtual LPCWSTR_S ToString ();
    ///*

    //*/
    //LPCWSTR_S ToString (LPCWSTR_S format);
    ///*

    //*/
    ////virtual LPCWSTR_S ToString (System.IFormatProvider provider);
    ///*

    //*/
    ////virtual LPCWSTR_S ToString (LPCWSTR_S format,System.IFormatProvider provider);
    ///*

    //*/
    //static double Parse (LPCWSTR_S s);
    ///*

    //*/
    ////static double Parse (LPCWSTR_S s,System.Globalization.NumberStyles style);
    ///*

    //*/
    ////static double Parse (LPCWSTR_S s,System.IFormatProvider provider);
    ///*

    //*/
    ////static double Parse (LPCWSTR_S s,System.Globalization.NumberStyles style,System.IFormatProvider provider);
    ///*

    //*/
    ////static bool TryParse (LPCWSTR_S s,System.Double& result);
    ///*

    //*/
    ////static bool TryParse (LPCWSTR_S s,System.Globalization.NumberStyles style,System.IFormatProvider provider,System.Double& result);
    ///*

    //*/
    ////virtual System.TypeCode GetTypeCode ();
    ///*

    //*/
    //static double MinValue ();
    ///*

    //*/
    //static double MaxValue ();
    ///*

    //*/
    //static double Epsilon ();
    ///*

    //*/
    //static double NegativeInfinity ();
    ///*

    //*/
    //static double PositiveInfinity ();
    ///*

    //*/
    //static double NaN ();

private:
};
}}