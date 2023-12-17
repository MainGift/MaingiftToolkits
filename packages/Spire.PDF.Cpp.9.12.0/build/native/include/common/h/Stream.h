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
    class EXPORTS Stream : public virtual Object
{
public:
    Stream();
    Stream(BYTE* buf, int count);
    Stream(std::istream&);
    Stream(LPCWSTR_S intPtrFileName);
    ~Stream();
    virtual bool GetCanTimeout ();
    virtual int GetReadTimeout ();
    virtual void SetReadTimeout (int value);
    virtual int GetWriteTimeout ();
    virtual void SetWriteTimeout (int value);
    //virtual System.Threading.Tasks.Task CopyToAsync (intrusive_ptr<Stream> destination,int bufferSize,System.Threading.CancellationToken cancellationToken);
    virtual void Close ();
    virtual void Dispose ();
    //virtual System.IAsyncResult BeginRead (std::vector<System.Byte> buffer,int offset,int count,System.AsyncCallback callback,System.Object state);
    //virtual int EndRead (System.IAsyncResult asyncResult);
    //virtual System.Threading.Tasks.Task`1[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] ReadAsync (std::vector<System.Byte> buffer,int offset,int count,System.Threading.CancellationToken cancellationToken);
    //virtual System.IAsyncResult BeginWrite (std::vector<System.Byte> buffer,int offset,int count,System.AsyncCallback callback,System.Object state);
    //virtual void EndWrite (System.IAsyncResult asyncResult);
    //virtual System.Threading.Tasks.Task WriteAsync (std::vector<System.Byte> buffer,int offset,int count,System.Threading.CancellationToken cancellationToken);
    //virtual int ReadByte ();
    //virtual void WriteByte (BYTE value);
    //static intrusive_ptr<Stream> Synchronized (intrusive_ptr<Stream> stream);
    virtual bool GetCanRead ();
    virtual bool GetCanSeek ();
    virtual bool GetCanWrite ();
    virtual std::vector<byte> ToArray();
    virtual long GetLength ();
    virtual long GetPosition ();
    virtual void SetPosition (long value);
    //System.Threading.Tasks.Task CopyToAsync (intrusive_ptr<Stream> destination);
    //System.Threading.Tasks.Task CopyToAsync (intrusive_ptr<Stream> destination,int bufferSize);
    void CopyTo (intrusive_ptr<Stream> destination);
    void CopyTo (intrusive_ptr<Stream> destination,int bufferSize);
    virtual void Flush ();
    //System.Threading.Tasks.Task FlushAsync ();
    //virtual System.Threading.Tasks.Task FlushAsync (System.Threading.CancellationToken cancellationToken);
    //System.Threading.Tasks.Task`1[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] ReadAsync (std::vector<System.Byte> buffer,int offset,int count);
    //System.Threading.Tasks.Task WriteAsync (std::vector<System.Byte> buffer,int offset,int count);
    //virtual long Seek (long offset,System.IO.SeekOrigin origin);
    //virtual void SetLength (long value);
    //virtual int Read (BYTE* buffer,int offset,int count);
    //virtual void Write (BYTE* buffer,int offset,int count);
    //static intrusive_ptr<Stream> Null ();
    void Save(std::ostream& stream);
    void Save(LPCWSTR_S intPtrFileName);
private:
};
}}