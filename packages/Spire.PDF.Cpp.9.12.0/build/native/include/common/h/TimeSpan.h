#pragma once
#include "common.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
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
class EXPORTS TimeSpan : public virtual Object
{
public:
    TimeSpan();
    TimeSpan(int days, int hours, int minutes, int seconds, int milliseconds);
    TimeSpan(long ticks);
    /*

    */
    long GetTicks ();
    /*

    */
    int GetDays ();
    /*

    */
    int GetHours ();
    /*

    */
    int GetMilliseconds ();
    /*

    */
    int GetMinutes ();
    /*

    */
    int GetSeconds ();
    /*

    */
    double GetTotalDays ();
    /*

    */
    double GetTotalHours ();
    /*

    */
    double GetTotalMilliseconds ();
    /*

    */
    double GetTotalMinutes ();
    /*

    */
    double GetTotalSeconds ();
    /*

    */
    intrusive_ptr<TimeSpan> Add (intrusive_ptr<TimeSpan> ts);
    /*

    */
    static int Compare (intrusive_ptr<TimeSpan> t1,intrusive_ptr<TimeSpan> t2);
    /*

    */
    //virtual int CompareTo (System.Object value);
    /*

    */
    virtual int CompareTo (intrusive_ptr<TimeSpan> value);
    /*

    */
    static intrusive_ptr<TimeSpan> FromDays (double value);
    /*

    */
    intrusive_ptr<TimeSpan> Duration ();
    /*

    */
    //virtual bool Equals (System.Object value);
    /*

    */
    virtual bool Equals (intrusive_ptr<TimeSpan> obj);
    /*

    */
    static bool Equals (intrusive_ptr<TimeSpan> t1,intrusive_ptr<TimeSpan> t2);
    /*

    */
    virtual int GetHashCode ();
    /*

    */
    static intrusive_ptr<TimeSpan> FromHours (double value);
    /*

    */
    static intrusive_ptr<TimeSpan> FromMilliseconds (double value);
    /*

    */
    static intrusive_ptr<TimeSpan> FromMinutes (double value);
    /*

    */
    intrusive_ptr<TimeSpan> Negate ();
    /*

    */
    static intrusive_ptr<TimeSpan> FromSeconds (double value);
    /*

    */
    intrusive_ptr<TimeSpan> Subtract (intrusive_ptr<TimeSpan> ts);
    /*

    */
    static intrusive_ptr<TimeSpan> FromTicks (long value);
    /*

    */
    static intrusive_ptr<TimeSpan> Parse (LPCWSTR_S s);
    /*

    */
    //static intrusive_ptr<TimeSpan> Parse (LPCWSTR_S input,System.IFormatProvider formatProvider);
    /*

    */
    //static intrusive_ptr<TimeSpan> ParseExact (LPCWSTR_S input,LPCWSTR_S format,System.IFormatProvider formatProvider);
    /*

    */
    //static intrusive_ptr<TimeSpan> ParseExact (LPCWSTR_S input,std::vector<LPCWSTR_S> formats,System.IFormatProvider formatProvider);
    /*

    */
    //static bool TryParse (LPCWSTR_S s,System.TimeSpan& result);
    /*

    */
    //static bool TryParse (LPCWSTR_S input,System.IFormatProvider formatProvider,System.TimeSpan& result);
    /*

    */
    //static bool TryParseExact (LPCWSTR_S input,LPCWSTR_S format,System.IFormatProvider formatProvider,System.TimeSpan& result);
    /*

    */
    //static bool TryParseExact (LPCWSTR_S input,std::vector<LPCWSTR_S> formats,System.IFormatProvider formatProvider,System.TimeSpan& result);
    /*

    */
    virtual LPCWSTR_S ToString ();
    /*

    */
    LPCWSTR_S ToString (LPCWSTR_S format);
    /*

    */
    //virtual LPCWSTR_S ToString (LPCWSTR_S format,System.IFormatProvider formatProvider);
    /*

    */
    static intrusive_ptr<TimeSpan> op_UnaryNegation (intrusive_ptr<TimeSpan> t);
    /*

    */
    static intrusive_ptr<TimeSpan> op_Subtraction (intrusive_ptr<TimeSpan> t1,intrusive_ptr<TimeSpan> t2);
    /*

    */
    static intrusive_ptr<TimeSpan> op_UnaryPlus (intrusive_ptr<TimeSpan> t);
    /*

    */
    static intrusive_ptr<TimeSpan> op_Addition (intrusive_ptr<TimeSpan> t1,intrusive_ptr<TimeSpan> t2);
    /*

    */
    static bool op_Equality (intrusive_ptr<TimeSpan> t1,intrusive_ptr<TimeSpan> t2);
    /*

    */
    static bool op_Inequality (intrusive_ptr<TimeSpan> t1,intrusive_ptr<TimeSpan> t2);
    /*

    */
    static bool op_LessThan (intrusive_ptr<TimeSpan> t1,intrusive_ptr<TimeSpan> t2);
    /*

    */
    static bool op_LessThanOrEqual (intrusive_ptr<TimeSpan> t1,intrusive_ptr<TimeSpan> t2);
    /*

    */
    static bool op_GreaterThan (intrusive_ptr<TimeSpan> t1,intrusive_ptr<TimeSpan> t2);
    /*

    */
    static bool op_GreaterThanOrEqual (intrusive_ptr<TimeSpan> t1,intrusive_ptr<TimeSpan> t2);
    /*

    */
    //static intrusive_ptr<TimeSpan> ParseExact (LPCWSTR_S input,LPCWSTR_S format,System.IFormatProvider formatProvider,System.Globalization.TimeSpanStyles styles);
    /*

    */
    //static intrusive_ptr<TimeSpan> ParseExact (LPCWSTR_S input,std::vector<LPCWSTR_S> formats,System.IFormatProvider formatProvider,System.Globalization.TimeSpanStyles styles);
    /*

    */
    //static bool TryParseExact (LPCWSTR_S input,LPCWSTR_S format,System.IFormatProvider formatProvider,System.Globalization.TimeSpanStyles styles,System.TimeSpan& result);
    /*

    */
    //static bool TryParseExact (LPCWSTR_S input,std::vector<LPCWSTR_S> formats,System.IFormatProvider formatProvider,System.Globalization.TimeSpanStyles styles,System.TimeSpan& result);
    /*

    */
    static intrusive_ptr<TimeSpan> Zero ();
    /*

    */
    static intrusive_ptr<TimeSpan> MaxValue ();
    /*

    */
    static intrusive_ptr<TimeSpan> MinValue ();
    /*

    */
    static long TicksPerMillisecond ();
    /*

    */
    static long TicksPerSecond ();
    /*

    */
    static long TicksPerMinute ();
    /*

    */
    static long TicksPerHour ();
    /*

    */
    static long TicksPerDay ();
private:
};
}}