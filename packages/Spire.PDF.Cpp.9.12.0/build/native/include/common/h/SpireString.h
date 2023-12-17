#pragma once
//#include "pch.h"
#include "common.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IEnumerable.h"
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
class EXPORTS SpireString : public virtual Object
{
public:
    SpireString();
    SpireString(LPCWSTR_S value);
    LPCWSTR_S Value();
    ///*

    //*/
    //static LPCWSTR_S Join (LPCWSTR_S separator,std::vector<LPCWSTR_S> value);
    ///*

    //*/
    //static LPCWSTR_S Join (LPCWSTR_S separator,std::vector<System.Object> values);
    ///*

    //*/
    ////static LPCWSTR_S Join (LPCWSTR_S separator,System.Collections.Generic.IEnumerable`1[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] values);
    ///*

    //*/
    //static LPCWSTR_S Join (LPCWSTR_S separator,std::vector<LPCWSTR_S> value,int startIndex,int count);
    ///*

    //*/
    ////virtual bool Equals (System.Object obj);
    ///*

    //*/
    //virtual bool Equals (LPCWSTR_S value);
    ///*

    //*/
    ////bool Equals (LPCWSTR_S value,System.StringComparison comparisonType);
    ///*

    //*/
    //static bool Equals (LPCWSTR_S a,LPCWSTR_S b);
    ///*

    //*/
    ////static bool Equals (LPCWSTR_S a,LPCWSTR_S b,System.StringComparison comparisonType);
    ///*

    //*/
    //static bool op_Equality (LPCWSTR_S a,LPCWSTR_S b);
    ///*

    //*/
    //static bool op_Inequality (LPCWSTR_S a,LPCWSTR_S b);
    ///*

    //*/
    //void CopyTo (int sourceIndex,std::vector<Char*> destination,int destinationIndex,int count);
    ///*

    //*/
    //std::vector<Char*> ToCharArray ();
    ///*

    //*/
    //std::vector<Char*> ToCharArray (int startIndex,int length);
    ///*

    //*/
    //static bool IsNullOrEmpty (LPCWSTR_S value);
    ///*

    //*/
    //static bool IsNullOrWhiteSpace (LPCWSTR_S value);
    ///*

    //*/
    //virtual int GetHashCode ();
    ///*

    //*/
    //std::vector<LPCWSTR_S> Split (std::vector<Char*> separator);
    ///*

    //*/
    //std::vector<LPCWSTR_S> Split (std::vector<Char*> separator,int count);
    ///*

    //*/
    ////std::vector<LPCWSTR_S> Split (std::vector<Char*> separator,System.StringSplitOptions options);
    ///*

    //*/
    ////std::vector<LPCWSTR_S> Split (std::vector<Char*> separator,int count,System.StringSplitOptions options);
    ///*

    //*/
    ////std::vector<LPCWSTR_S> Split (std::vector<LPCWSTR_S> separator,System.StringSplitOptions options);
    ///*

    //*/
    ////std::vector<LPCWSTR_S> Split (std::vector<LPCWSTR_S> separator,int count,System.StringSplitOptions options);
    ///*

    //*/
    //LPCWSTR_S Substring (int startIndex);
    ///*

    //*/
    //LPCWSTR_S Substring (int startIndex,int length);
    ///*

    //*/
    //LPCWSTR_S Trim (std::vector<Char*> trimChars);
    ///*

    //*/
    //LPCWSTR_S TrimStart (std::vector<Char*> trimChars);
    ///*

    //*/
    //LPCWSTR_S TrimEnd (std::vector<Char*> trimChars);
    ///*

    //*/
    //bool IsNormalized ();
    ///*

    //*/
    ////bool IsNormalized (System.Text.NormalizationForm normalizationForm);
    ///*

    //*/
    //LPCWSTR_S Normalize ();
    ///*

    //*/
    ////LPCWSTR_S Normalize (System.Text.NormalizationForm normalizationForm);
    ///*

    //*/
    //static int Compare (LPCWSTR_S strA,LPCWSTR_S strB);
    ///*

    //*/
    //static int Compare (LPCWSTR_S strA,LPCWSTR_S strB,bool ignoreCase);
    ///*

    //*/
    ////static int Compare (LPCWSTR_S strA,LPCWSTR_S strB,System.StringComparison comparisonType);
    ///*

    //*/
    ////static int Compare (LPCWSTR_S strA,LPCWSTR_S strB,intrusive_ptr<CultureInfo> culture,System.Globalization.CompareOptions options);
    ///*

    //*/
    //static int Compare (LPCWSTR_S strA,LPCWSTR_S strB,bool ignoreCase,intrusive_ptr<CultureInfo> culture);
    ///*

    //*/
    //static int Compare (LPCWSTR_S strA,int indexA,LPCWSTR_S strB,int indexB,int length);
    ///*

    //*/
    //static int Compare (LPCWSTR_S strA,int indexA,LPCWSTR_S strB,int indexB,int length,bool ignoreCase);
    ///*

    //*/
    //static int Compare (LPCWSTR_S strA,int indexA,LPCWSTR_S strB,int indexB,int length,bool ignoreCase,intrusive_ptr<CultureInfo> culture);
    ///*

    //*/
    ////static int Compare (LPCWSTR_S strA,int indexA,LPCWSTR_S strB,int indexB,int length,intrusive_ptr<CultureInfo> culture,System.Globalization.CompareOptions options);
    ///*

    //*/
    ////static int Compare (LPCWSTR_S strA,int indexA,LPCWSTR_S strB,int indexB,int length,System.StringComparison comparisonType);
    ///*

    //*/
    ////virtual int CompareTo (System.Object value);
    ///*

    //*/
    //virtual int CompareTo (LPCWSTR_S strB);
    ///*

    //*/
    //static int CompareOrdinal (LPCWSTR_S strA,LPCWSTR_S strB);
    ///*

    //*/
    //static int CompareOrdinal (LPCWSTR_S strA,int indexA,LPCWSTR_S strB,int indexB,int length);
    ///*

    //*/
    //bool Contains (LPCWSTR_S value);
    ///*

    //*/
    //bool EndsWith (LPCWSTR_S value);
    ///*

    //*/
    ////bool EndsWith (LPCWSTR_S value,System.StringComparison comparisonType);
    ///*

    //*/
    //bool EndsWith (LPCWSTR_S value,bool ignoreCase,intrusive_ptr<CultureInfo> culture);
    ///*

    //*/
    //int IndexOf (Char* value);
    ///*

    //*/
    //int IndexOf (Char* value,int startIndex);
    ///*

    //*/
    //int IndexOfAny (std::vector<Char*> anyOf);
    ///*

    //*/
    //int IndexOfAny (std::vector<Char*> anyOf,int startIndex);
    ///*

    //*/
    //int IndexOf (LPCWSTR_S value);
    ///*

    //*/
    //int IndexOf (LPCWSTR_S value,int startIndex);
    ///*

    //*/
    //int IndexOf (LPCWSTR_S value,int startIndex,int count);
    ///*

    //*/
    ////int IndexOf (LPCWSTR_S value,System.StringComparison comparisonType);
    ///*

    //*/
    ////int IndexOf (LPCWSTR_S value,int startIndex,System.StringComparison comparisonType);
    ///*

    //*/
    ////int IndexOf (LPCWSTR_S value,int startIndex,int count,System.StringComparison comparisonType);
    ///*

    //*/
    //int LastIndexOf (Char* value);
    ///*

    //*/
    //int LastIndexOf (Char* value,int startIndex);
    ///*

    //*/
    //int LastIndexOfAny (std::vector<Char*> anyOf);
    ///*

    //*/
    //int LastIndexOfAny (std::vector<Char*> anyOf,int startIndex);
    ///*

    //*/
    //int LastIndexOf (LPCWSTR_S value);
    ///*

    //*/
    //int LastIndexOf (LPCWSTR_S value,int startIndex);
    ///*

    //*/
    //int LastIndexOf (LPCWSTR_S value,int startIndex,int count);
    ///*

    //*/
    ////int LastIndexOf (LPCWSTR_S value,System.StringComparison comparisonType);
    ///*

    //*/
    ////int LastIndexOf (LPCWSTR_S value,int startIndex,System.StringComparison comparisonType);
    ///*

    //*/
    ////int LastIndexOf (LPCWSTR_S value,int startIndex,int count,System.StringComparison comparisonType);
    ///*

    //*/
    //LPCWSTR_S PadLeft (int totalWidth);
    ///*

    //*/
    //LPCWSTR_S PadLeft (int totalWidth,Char* paddingChar);
    ///*

    //*/
    //LPCWSTR_S PadRight (int totalWidth);
    ///*

    //*/
    //LPCWSTR_S PadRight (int totalWidth,Char* paddingChar);
    ///*

    //*/
    //bool StartsWith (LPCWSTR_S value);
    ///*

    //*/
    ////bool StartsWith (LPCWSTR_S value,System.StringComparison comparisonType);
    ///*

    //*/
    //bool StartsWith (LPCWSTR_S value,bool ignoreCase,intrusive_ptr<CultureInfo> culture);
    ///*

    //*/
    //LPCWSTR_S ToLower ();
    ///*

    //*/
    //LPCWSTR_S ToLower (intrusive_ptr<CultureInfo> culture);
    ///*

    //*/
    //LPCWSTR_S ToLowerInvariant ();
    ///*

    //*/
    //LPCWSTR_S ToUpper ();
    ///*

    //*/
    //LPCWSTR_S ToUpper (intrusive_ptr<CultureInfo> culture);
    ///*

    //*/
    //LPCWSTR_S ToUpperInvariant ();
    ///*

    //*/
    //virtual LPCWSTR_S ToString ();
    ///*

    //*/
    ////virtual LPCWSTR_S ToString (System.IFormatProvider provider);
    ///*

    //*/
    ////virtual System.Object Clone ();
    ///*

    //*/
    //LPCWSTR_S Trim ();
    ///*

    //*/
    //LPCWSTR_S Insert (int startIndex,LPCWSTR_S value);
    ///*

    //*/
    //LPCWSTR_S Replace (Char* oldChar,Char* newChar);
    ///*

    //*/
    //LPCWSTR_S Replace (LPCWSTR_S oldValue,LPCWSTR_S newValue);
    ///*

    //*/
    //LPCWSTR_S Remove (int startIndex,int count);
    ///*

    //*/
    //LPCWSTR_S Remove (int startIndex);
    ///*

    //*/
    ////static LPCWSTR_S Format (LPCWSTR_S format,System.Object arg0);
    ///*

    //*/
    ////static LPCWSTR_S Format (LPCWSTR_S format,System.Object arg0,System.Object arg1);
    ///*

    //*/
    ////static LPCWSTR_S Format (LPCWSTR_S format,System.Object arg0,System.Object arg1,System.Object arg2);
    ///*

    //*/
    ////static LPCWSTR_S Format (System.IFormatProvider provider,LPCWSTR_S format,System.Object arg0);
    ///*

    //*/
    ////static LPCWSTR_S Format (System.IFormatProvider provider,LPCWSTR_S format,System.Object arg0,System.Object arg1);
    ///*

    //*/
    ////static LPCWSTR_S Format (System.IFormatProvider provider,LPCWSTR_S format,System.Object arg0,System.Object arg1,System.Object arg2);
    ///*

    //*/
    //static LPCWSTR_S Copy (LPCWSTR_S str);
    ///*

    //*/
    ////static LPCWSTR_S Concat (System.Object arg0);
    ///*

    //*/
    ////static LPCWSTR_S Concat (System.Object arg0,System.Object arg1);
    ///*

    //*/
    ////static LPCWSTR_S Concat (System.Object arg0,System.Object arg1,System.Object arg2);
    ///*

    //*/
    ////static LPCWSTR_S Concat (System.Object arg0,System.Object arg1,System.Object arg2,System.Object arg3);
    ///*

    //*/
    //static LPCWSTR_S Concat (std::vector<System.Object> args);
    ///*

    //*/
    ////static LPCWSTR_S Concat (System.Collections.Generic.IEnumerable`1[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] values);
    ///*

    //*/
    //static LPCWSTR_S Concat (LPCWSTR_S str0,LPCWSTR_S str1);
    ///*

    //*/
    //static LPCWSTR_S Concat (LPCWSTR_S str0,LPCWSTR_S str1,LPCWSTR_S str2);
    ///*

    //*/
    //static LPCWSTR_S Concat (LPCWSTR_S str0,LPCWSTR_S str1,LPCWSTR_S str2,LPCWSTR_S str3);
    ///*

    //*/
    //static LPCWSTR_S Concat (std::vector<LPCWSTR_S> values);
    ///*

    //*/
    //static LPCWSTR_S Intern (LPCWSTR_S str);
    ///*

    //*/
    //static LPCWSTR_S IsInterned (LPCWSTR_S str);
    ///*

    //*/
    ////virtual System.TypeCode GetTypeCode ();
    ///*

    //*/
    ////System.CharEnumerator GetEnumerator ();
    ///*

    //*/
    //static LPCWSTR_S Join (LPCWSTR_S separator,IEnumerable`1 values);
    ///*

    //*/
    //Char* GetChars (int index);
    ///*

    //*/
    //int GetLength ();
    ///*

    //*/
    //static LPCWSTR_S Concat (IEnumerable`1 values);
    ///*

    //*/
    //int IndexOf (Char* value,int startIndex,int count);
    ///*

    //*/
    //int IndexOfAny (std::vector<Char*> anyOf,int startIndex,int count);
    ///*

    //*/
    //int LastIndexOf (Char* value,int startIndex,int count);
    ///*

    //*/
    //int LastIndexOfAny (std::vector<Char*> anyOf,int startIndex,int count);
    ///*

    //*/
    //static LPCWSTR_S Format (LPCWSTR_S format,std::vector<System.Object> args);
    ///*

    //*/
    ////static LPCWSTR_S Format (System.IFormatProvider provider,LPCWSTR_S format,std::vector<System.Object> args);
    ///*

    //*/
    //static LPCWSTR_S Empty ();

private:
};
}}