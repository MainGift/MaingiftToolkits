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
class EXPORTS Encoding : public virtual Object
{
public:
    //static std::vector<System.Byte> Convert (intrusive_ptr<Encoding> srcEncoding,intrusive_ptr<Encoding> dstEncoding,std::vector<System.Byte> bytes);
    //static void RegisterProvider (intrusive_ptr<Encoding>Provider provider);
    static intrusive_ptr<Encoding> GetEncoding (int codepage);
    //static intrusive_ptr<Encoding> GetEncoding (int codepage,System.Text.EncoderFallback encoderFallback,System.Text.DecoderFallback decoderFallback);
    static intrusive_ptr<Encoding> GetEncoding (LPCWSTR_S name);
    //static intrusive_ptr<Encoding> GetEncoding (LPCWSTR_S name,System.Text.EncoderFallback encoderFallback,System.Text.DecoderFallback decoderFallback);
    //static std::vector<intrusive_ptr<Encoding>Info> GetEncodings ();
    //virtual std::vector<System.Byte> GetPreamble ();
    virtual LPCWSTR_S GetBodyName ();
    virtual LPCWSTR_S GetHeaderName ();
    virtual LPCWSTR_S GetWebName ();
    virtual int GetWindowsCodePage ();
    virtual bool GetIsBrowserDisplay ();
    virtual bool GetIsBrowserSave ();
    virtual bool GetIsMailNewsDisplay ();
    virtual bool GetIsMailNewsSave ();
    virtual bool GetIsSingleByte ();
    //System.Text.EncoderFallback GetEncoderFallback ();
    //void SetEncoderFallback (System.Text.EncoderFallback value);
    //System.Text.DecoderFallback GetDecoderFallback ();
    //void SetDecoderFallback (System.Text.DecoderFallback value);
    //virtual System.Object Clone ();
    bool GetIsReadOnly ();
    static intrusive_ptr<Encoding> GetASCII ();
    //virtual int GetByteCount (std::vector<System.Char> chars);
    //virtual int GetByteCount (LPCWSTR_S s);
    //virtual int GetByteCount (System.Char* chars,int count);
    //virtual std::vector<System.Byte> GetBytes (std::vector<System.Char> chars);
    //virtual std::vector<System.Byte> GetBytes (std::vector<System.Char> chars,int index,int count);
    virtual std::vector<byte> GetBytes (LPCWSTR_S s);
    //virtual int GetBytes (LPCWSTR_S s,int charIndex,int charCount,std::vector<System.Byte> bytes,int byteIndex);
    //virtual int GetCharCount (std::vector<System.Byte> bytes);
    //virtual int GetCharCount (System.Byte* bytes,int count);
    //virtual std::vector<System.Char> GetChars (std::vector<System.Byte> bytes);
    //virtual std::vector<System.Char> GetChars (std::vector<System.Byte> bytes,int index,int count);
    LPCWSTR_S GetString (BYTE* bytes,int byteCount);
    virtual int GetCodePage ();
    bool IsAlwaysNormalized ();
    //virtual bool IsAlwaysNormalized (System.Text.NormalizationForm form);
    //virtual System.Text.Decoder GetDecoder ();
    static intrusive_ptr<Encoding> GetDefault ();
    //virtual System.Text.Encoder GetEncoder ();
    //virtual LPCWSTR_S GetString (std::vector<System.Byte> bytes);
    //virtual LPCWSTR_S GetString (std::vector<System.Byte> bytes,int index,int count);
    static intrusive_ptr<Encoding> GetUnicode ();
    static intrusive_ptr<Encoding> GetBigEndianUnicode ();
    static intrusive_ptr<Encoding> GetUTF7 ();
    static intrusive_ptr<Encoding> GetUTF8 ();
    static intrusive_ptr<Encoding> GetUTF32 ();
    //virtual bool Equals (System.Object value);
    virtual int GetHashCode ();
    //static std::vector<System.Byte> Convert (intrusive_ptr<Encoding> srcEncoding,intrusive_ptr<Encoding> dstEncoding,std::vector<System.Byte> bytes,int index,int count);
    virtual LPCWSTR_S GetEncodingName ();
    //virtual int GetByteCount (std::vector<System.Char> chars,int index,int count);
    //virtual int GetBytes (std::vector<System.Char> chars,int charIndex,int charCount,std::vector<System.Byte> bytes,int byteIndex);
    //virtual int GetBytes (System.Char* chars,int charCount,System.Byte* bytes,int byteCount);
    //virtual int GetCharCount (std::vector<System.Byte> bytes,int index,int count);
    //virtual int GetChars (std::vector<System.Byte> bytes,int byteIndex,int byteCount,std::vector<System.Char> chars,int charIndex);
    //virtual int GetChars (System.Byte* bytes,int byteCount,System.Char* chars,int charCount);
    virtual int GetMaxByteCount (int charCount);
    virtual int GetMaxCharCount (int byteCount);
private:
};
}}