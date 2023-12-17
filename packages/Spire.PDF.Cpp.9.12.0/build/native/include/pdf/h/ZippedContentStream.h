#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/Stream.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS ZippedContentStream : public virtual Stream
{
public:
    /*

    */
    virtual bool GetCanRead ();
    /*

    */
    virtual bool GetCanSeek ();
    /*

    */
    virtual bool GetCanWrite ();
    /*

    */
    virtual long GetLength ();
    /*

    */
    virtual long GetPosition ();
    /*

    */
    virtual void SetPosition (long value);
    /*

    */
    intrusive_ptr<Stream> GetZippedContent ();
    /*

    */
    //System.UInt32 GetCrc32 ();
    /*

    */
    long GetUnzippedSize ();
    /*

    */
    virtual void Flush ();
    /*

    */
    //virtual int Read (std::vector<BYTE*> buffer,int offset,int count);
    /*

    */
    //virtual long Seek (long offset,System.IO.SeekOrigin origin);
    /*

    */
    virtual void SetLength (long value);
    /*

    */
    //virtual void Write (std::vector<BYTE*> buffer,int offset,int count);
private:
};
}}