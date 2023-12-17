#pragma once
#include "common.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "TimeSpan.h"
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
class EXPORTS DateTime : public virtual Object
{
public:
    DateTime();
    DateTime(int year, int month, int day, int hour=0, int minute=0, int second=0, int millisecond=0);
    /*

    */
    intrusive_ptr<DateTime> Add (intrusive_ptr<TimeSpan> value);
    /*

    */
    intrusive_ptr<DateTime> AddDays (double value);
    /*

    */
    intrusive_ptr<DateTime> AddHours (double value);
    /*

    */
    intrusive_ptr<DateTime> AddMilliseconds (double value);
    /*

    */
    intrusive_ptr<DateTime> AddMinutes (double value);
    /*

    */
    intrusive_ptr<DateTime> AddMonths (int months);
    /*

    */
    intrusive_ptr<DateTime> AddSeconds (double value);
    /*

    */
    intrusive_ptr<DateTime> AddTicks (long value);
    /*

    */
    intrusive_ptr<DateTime> AddYears (int value);
    /*

    */
    static int Compare (intrusive_ptr<DateTime> t1,intrusive_ptr<DateTime> t2);
    /*

    */
    //virtual int CompareTo (System.Object value);
    /*

    */
    virtual int CompareTo (intrusive_ptr<DateTime> value);
    /*

    */
    static int DaysInMonth (int year,int month);
    /*

    */
    //virtual bool Equals (System.Object value);
    /*

    */
    virtual bool Equals (intrusive_ptr<DateTime> value);
    /*

    */
    static bool Equals (intrusive_ptr<DateTime> t1,intrusive_ptr<DateTime> t2);
    /*

    */
    static intrusive_ptr<DateTime> FromBinary (long dateData);
    /*

    */
    static intrusive_ptr<DateTime> FromFileTime (long fileTime);
    /*

    */
    static intrusive_ptr<DateTime> FromFileTimeUtc (long fileTime);
    /*

    */
    static intrusive_ptr<DateTime> FromOADate (double d);
    /*

    */
    bool IsDaylightSavingTime ();
    /*

    */
    //static intrusive_ptr<DateTime> SpecifyKind (intrusive_ptr<DateTime> value,System.DateTimeKind kind);
    /*

    */
    long ToBinary ();
    /*

    */
    intrusive_ptr<DateTime> GetDate ();
    /*

    */
    int GetDay ();
    /*

    */
    //System.DayOfWeek GetDayOfWeek ();
    /*

    */
    int GetDayOfYear ();
    /*

    */
    virtual int GetHashCode ();
    /*

    */
    int GetHour ();
    /*

    */
    //System.DateTimeKind GetKind ();
    /*

    */
    int GetMillisecond ();
    /*

    */
    int GetMinute ();
    /*

    */
    int GetMonth ();
    /*

    */
    static intrusive_ptr<DateTime> GetNow ();
    /*

    */
    static intrusive_ptr<DateTime> GetUtcNow ();
    /*

    */
    int GetSecond ();
    /*

    */
    long GetTicks ();
    /*

    */
    intrusive_ptr<TimeSpan> GetTimeOfDay ();
    /*

    */
    static intrusive_ptr<DateTime> GetToday ();
    /*

    */
    int GetYear ();
    /*

    */
    static bool IsLeapYear (int year);
    /*

    */
    static intrusive_ptr<DateTime> Parse (LPCWSTR_S s);
    /*

    */
    //static intrusive_ptr<DateTime> Parse (LPCWSTR_S s,System.IFormatProvider provider);
    /*

    */
    //static intrusive_ptr<DateTime> ParseExact (LPCWSTR_S s,LPCWSTR_S format,System.IFormatProvider provider);
    /*

    */
    intrusive_ptr<TimeSpan> Subtract (intrusive_ptr<DateTime> value);
    /*

    */
    intrusive_ptr<DateTime> Subtract (intrusive_ptr<TimeSpan> value);
    /*

    */
    double ToOADate ();
    /*

    */
    long ToFileTime ();
    /*

    */
    long ToFileTimeUtc ();
    /*

    */
    intrusive_ptr<DateTime> ToLocalTime ();
    /*

    */
    virtual LPCWSTR_S ToString ();
    /*

    */
    LPCWSTR_S ToString (LPCWSTR_S format);
    /*

    */
    //virtual LPCWSTR_S ToString (System.IFormatProvider provider);
    /*

    */
    //virtual LPCWSTR_S ToString (LPCWSTR_S format,System.IFormatProvider provider);
    /*

    */
    intrusive_ptr<DateTime> ToUniversalTime ();
    /*

    */
    //static bool TryParse (LPCWSTR_S s,System.DateTime& result);
    /*

    */
    static intrusive_ptr<DateTime> op_Addition (intrusive_ptr<DateTime> d,intrusive_ptr<TimeSpan> t);
    /*

    */
    static intrusive_ptr<DateTime> op_Subtraction (intrusive_ptr<DateTime> d,intrusive_ptr<TimeSpan> t);
    /*

    */
    static intrusive_ptr<TimeSpan> op_Subtraction (intrusive_ptr<DateTime> d1,intrusive_ptr<DateTime> d2);
    /*

    */
    static bool op_Equality (intrusive_ptr<DateTime> d1,intrusive_ptr<DateTime> d2);
    /*

    */
    static bool op_Inequality (intrusive_ptr<DateTime> d1,intrusive_ptr<DateTime> d2);
    /*

    */
    static bool op_LessThan (intrusive_ptr<DateTime> t1,intrusive_ptr<DateTime> t2);
    /*

    */
    static bool op_LessThanOrEqual (intrusive_ptr<DateTime> t1,intrusive_ptr<DateTime> t2);
    /*

    */
    static bool op_GreaterThan (intrusive_ptr<DateTime> t1,intrusive_ptr<DateTime> t2);
    /*

    */
    static bool op_GreaterThanOrEqual (intrusive_ptr<DateTime> t1,intrusive_ptr<DateTime> t2);
    /*

    */
    std::vector<LPCWSTR_S> GetDateTimeFormats ();
    /*

    */
    //std::vector<LPCWSTR_S> GetDateTimeFormats (System.IFormatProvider provider);
    /*

    */
    //std::vector<LPCWSTR_S> GetDateTimeFormats (System.Char format);
    /*

    */
    //std::vector<LPCWSTR_S> GetDateTimeFormats (System.Char format,System.IFormatProvider provider);
    /*

    */
    //virtual System.TypeCode GetTypeCode ();
    /*

    */
    //static intrusive_ptr<DateTime> Parse (LPCWSTR_S s,System.IFormatProvider provider,System.Globalization.DateTimeStyles styles);
    /*

    */
    //static intrusive_ptr<DateTime> ParseExact (LPCWSTR_S s,LPCWSTR_S format,System.IFormatProvider provider,System.Globalization.DateTimeStyles style);
    /*

    */
    //static intrusive_ptr<DateTime> ParseExact (LPCWSTR_S s,std::vector<LPCWSTR_S> formats,System.IFormatProvider provider,System.Globalization.DateTimeStyles style);
    /*

    */
    LPCWSTR_S ToLongDateString ();
    /*

    */
    LPCWSTR_S ToLongTimeString ();
    /*

    */
    LPCWSTR_S ToShortTimeString ();
    /*

    */
    //static bool TryParseExact (LPCWSTR_S s,LPCWSTR_S format,System.IFormatProvider provider,System.Globalization.DateTimeStyles style,System.DateTime& result);
    /*

    */
    //static bool TryParseExact (LPCWSTR_S s,std::vector<LPCWSTR_S> formats,System.IFormatProvider provider,System.Globalization.DateTimeStyles style,System.DateTime& result);
    /*

    */
    LPCWSTR_S ToShortDateString ();
    /*

    */
    //static bool TryParse (LPCWSTR_S s,System.IFormatProvider provider,System.Globalization.DateTimeStyles styles,System.DateTime& result);
    /*

    */
    static intrusive_ptr<DateTime> MinValue ();
    /*

    */
    static intrusive_ptr<DateTime> MaxValue ();
private:
};
}}