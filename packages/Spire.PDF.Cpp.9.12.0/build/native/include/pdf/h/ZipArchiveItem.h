#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS ZipArchiveItem : public virtual Object
{
public:
    /*

    */
    LPCWSTR_S GetItemName ();
    /*

    */
    void SetItemName (LPCWSTR_S value);
    /*

    */
    CompressionMethod GetCompressionMethod ();
    /*

    */
    void SetCompressionMethod (CompressionMethod value);
    /*

    */
    CompressionLevel GetCompressionLevel ();
    /*

    */
    void SetCompressionLevel (CompressionLevel value);
    /*

    */
    //System.UInt32 GetCrc32 ();
    /*

    */
    intrusive_ptr<Stream> GetDataStream ();
    /*

    */
    long GetCompressedSize ();
    /*

    */
    long GetOriginalSize ();
    /*

    */
    bool GetControlStream ();
    /*

    */
    bool GetCompressed ();
    /*

    */
    //System.IO.FileAttributes GetExternalAttributes ();
    /*

    */
    //void SetExternalAttributes (System.IO.FileAttributes value);
    /*

    */
    bool GetOptimizedDecompress ();
    /*

    */
    void SetOptimizedDecompress (bool value);
    /*

    */
    void Update (intrusive_ptr<ZippedContentStream> stream);
    /*

    */
    void Update (intrusive_ptr<Stream> newDataStream,bool controlStream);
    /*

    */
    void ResetFlags ();
    /*

    */
    static intrusive_ptr<Stream> CloneStream (intrusive_ptr<Stream> stream);
    /*

    */
    virtual void Dispose ();
private:
};
}}