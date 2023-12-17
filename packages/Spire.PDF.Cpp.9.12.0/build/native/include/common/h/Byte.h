#pragma once
//#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

#ifdef _SPIRE_XLS
namespace Spire {
    namespace Xls{
#elif defined(_SPIRE_DOC)
namespace Spire {
    namespace Doc{
#elif defined(_SPIRE_PDF)
namespace Spire {
    namespace Pdf{
#elif defined(_SPIRE_PPT)
namespace Spire {
    namespace Presentation{
#else
namespace Spire {
    namespace Xls{
#endif
/*

*/
class EXPORTS Byte : public virtual Object
{
public:
    Byte();
    Byte(byte value);
    byte Value();
    //    /*
//
//    */
//    //virtual int CompareTo (System.Object value);
//    /*
//
//    */
//    virtual int CompareTo (byte value);
//    /*
//
//    */
//    //virtual bool Equals (System.Object obj);
//    /*
//
//    */
//    virtual bool Equals (byte obj);
//    /*
//
//    */
//    virtual int GetHashCode ();
//    /*
//
//    */
//    static byte Parse (LPCWSTR_S s);
//    /*
//
//    */
//    //static byte Parse (LPCWSTR_S s,System.Globalization.NumberStyles style);
//    /*
//
//    */
//    //static byte Parse (LPCWSTR_S s,System.IFormatProvider provider);
//    /*
//
//    */
//    //static byte Parse (LPCWSTR_S s,System.Globalization.NumberStyles style,System.IFormatProvider provider);
//    /*
//
//    */
//    //static bool TryParse (LPCWSTR_S s,System.Byte& result);
//    /*
//
//    */
//    //static bool TryParse (LPCWSTR_S s,System.Globalization.NumberStyles style,System.IFormatProvider provider,System.Byte& result);
//    /*
//
//    */
//    virtual LPCWSTR_S ToString ();
//    /*
//
//    */
//    LPCWSTR_S ToString (LPCWSTR_S format);
//    /*
//
//    */
//    //virtual LPCWSTR_S ToString (System.IFormatProvider provider);
//    /*
//
//    */
//    //virtual LPCWSTR_S ToString (LPCWSTR_S format,System.IFormatProvider provider);
//    /*
//
//    */
//    //virtual System.TypeCode GetTypeCode ();
//    /*
//
//    */
//    static byte MaxValue ();
//    /*
//
//    */
//    static byte MinValue ();

private:
};
}}