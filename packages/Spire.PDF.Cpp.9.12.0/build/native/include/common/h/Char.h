#pragma once
//#include "pch.h"

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
class EXPORTS Char : public virtual Object
{
public:
    Char();
    Char(char value);
    char Value();
    ///*

    //*/
    //virtual int GetHashCode ();
    ///*

    //*/
    ////virtual bool Equals (System.Object obj);
    ///*

    //*/
    //virtual bool Equals (Char* obj);
    ///*

    //*/
    ////virtual int CompareTo (System.Object value);
    ///*

    //*/
    //virtual int CompareTo (Char* value);
    ///*

    //*/
    //virtual LPCWSTR_S ToString ();
    ///*

    //*/
    ////virtual LPCWSTR_S ToString (System.IFormatProvider provider);
    ///*

    //*/
    //static LPCWSTR_S ToString (Char* c);
    ///*

    //*/
    //static Char* Parse (LPCWSTR_S s);
    ///*

    //*/
    ////static bool TryParse (LPCWSTR_S s,System.Char& result);
    ///*

    //*/
    //static bool IsDigit (Char* c);
    ///*

    //*/
    //static bool IsLetter (Char* c);
    ///*

    //*/
    //static bool IsWhiteSpace (Char* c);
    ///*

    //*/
    //static bool IsUpper (Char* c);
    ///*

    //*/
    //static bool IsLower (Char* c);
    ///*

    //*/
    //static bool IsPunctuation (Char* c);
    ///*

    //*/
    //static bool IsLetterOrDigit (Char* c);
    ///*

    //*/
    //static Char* ToUpper (Char* c,intrusive_ptr<CultureInfo> culture);
    ///*

    //*/
    //static Char* ToUpper (Char* c);
    ///*

    //*/
    //static Char* ToUpperInvariant (Char* c);
    ///*

    //*/
    //static Char* ToLower (Char* c,intrusive_ptr<CultureInfo> culture);
    ///*

    //*/
    //static Char* ToLower (Char* c);
    ///*

    //*/
    //static Char* ToLowerInvariant (Char* c);
    ///*

    //*/
    ////virtual System.TypeCode GetTypeCode ();
    ///*

    //*/
    //static bool IsControl (Char* c);
    ///*

    //*/
    //static bool IsControl (LPCWSTR_S s,int index);
    ///*

    //*/
    //static bool IsDigit (LPCWSTR_S s,int index);
    ///*

    //*/
    //static bool IsLetter (LPCWSTR_S s,int index);
    ///*

    //*/
    //static bool IsLetterOrDigit (LPCWSTR_S s,int index);
    ///*

    //*/
    //static bool IsLower (LPCWSTR_S s,int index);
    ///*

    //*/
    //static bool IsNumber (Char* c);
    ///*

    //*/
    //static bool IsNumber (LPCWSTR_S s,int index);
    ///*

    //*/
    //static bool IsPunctuation (LPCWSTR_S s,int index);
    ///*

    //*/
    //static bool IsSeparator (Char* c);
    ///*

    //*/
    //static bool IsSeparator (LPCWSTR_S s,int index);
    ///*

    //*/
    //static bool IsSurrogate (Char* c);
    ///*

    //*/
    //static bool IsSurrogate (LPCWSTR_S s,int index);
    ///*

    //*/
    //static bool IsSymbol (Char* c);
    ///*

    //*/
    //static bool IsSymbol (LPCWSTR_S s,int index);
    ///*

    //*/
    //static bool IsUpper (LPCWSTR_S s,int index);
    ///*

    //*/
    //static bool IsWhiteSpace (LPCWSTR_S s,int index);
    ///*

    //*/
    ////static System.Globalization.UnicodeCategory GetUnicodeCategory (Char* c);
    ///*

    //*/
    ////static System.Globalization.UnicodeCategory GetUnicodeCategory (LPCWSTR_S s,int index);
    ///*

    //*/
    //static double GetNumericValue (Char* c);
    ///*

    //*/
    //static double GetNumericValue (LPCWSTR_S s,int index);
    ///*

    //*/
    //static bool IsHighSurrogate (Char* c);
    ///*

    //*/
    //static bool IsHighSurrogate (LPCWSTR_S s,int index);
    ///*

    //*/
    //static bool IsLowSurrogate (Char* c);
    ///*

    //*/
    //static bool IsLowSurrogate (LPCWSTR_S s,int index);
    ///*

    //*/
    //static bool IsSurrogatePair (LPCWSTR_S s,int index);
    ///*

    //*/
    //static bool IsSurrogatePair (Char* highSurrogate,Char* lowSurrogate);
    ///*

    //*/
    //static LPCWSTR_S ConvertFromUtf32 (int utf32);
    ///*

    //*/
    //static int ConvertToUtf32 (Char* highSurrogate,Char* lowSurrogate);
    ///*

    //*/
    //static int ConvertToUtf32 (LPCWSTR_S s,int index);
    ///*

    //*/
    //static Char* MaxValue ();
    ///*

    //*/
    //static Char* MinValue ();

private:
};
}}