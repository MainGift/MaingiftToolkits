#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/Stream.h"
#include "ZipArchiveItem.h"
#include "IFileNamePreprocessor.h"
#include "CompressionLevel.h"
#include "CompressorCreator.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS ZipArchive : public virtual Object
{
public:
    /*

    */
    intrusive_ptr<ZipArchiveItem> GetItem (int index);
    /*

    */
    intrusive_ptr<ZipArchiveItem> GetItem (LPCWSTR_S itemName);
    /*

    */
    int GetCount ();
    /*

    */
    //System.Collections.Generic.List`1[[Spire.Compression.Zip.ZipArchiveItem, Spire.Pdf, Version=8.10.5.0, Culture=neutral, PublicKeyToken=null]] GetItems ();
    /*

    */
    //intrusive_ptr<IFileNamePreprocessor> GetFileNamePreprocessor ();
    /*

    */
    void SetFileNamePreprocessor (intrusive_ptr<IFileNamePreprocessor> value);
    /*

    */
    CompressionLevel GetDefaultCompressionLevel ();
    /*

    */
    void SetDefaultCompressionLevel (CompressionLevel value);
    /*

    */
    bool GetCheckCrc ();
    /*

    */
    void SetCheckCrc (bool value);
    /*

    */
    bool GetUseNetCompression ();
    /*

    */
    void SetUseNetCompression (bool value);
    /*

    */
    //static long FindValueFromEnd (intrusive_ptr<Stream> stream,System.UInt32 value,int maxCount);
    /*

    */
    static int ReadInt32 (intrusive_ptr<Stream> stream);
    /*

    */
    //static System.Int16 ReadInt16 (intrusive_ptr<Stream> stream);
    /*

    */
    intrusive_ptr<ZipArchiveItem> AddDirectory (LPCWSTR_S directoryName);
    /*

    */
    intrusive_ptr<ZipArchiveItem> AddFile (LPCWSTR_S fileName);
    /*

    */
    //intrusive_ptr<ZipArchiveItem> AddItem (LPCWSTR_S itemName,intrusive_ptr<Stream> data,bool bControlStream,System.IO.FileAttributes attributes);
    /*

    */
    intrusive_ptr<ZipArchiveItem> AddItem (intrusive_ptr<ZipArchiveItem> item);
    /*

    */
    void RemoveItem (LPCWSTR_S itemName);
    /*

    */
    void RemoveAt (int index);
    /*

    */
    //void Remove (System.Text.RegularExpressions.Regex mask);
    /*

    */
    void UpdateItem (LPCWSTR_S itemName,intrusive_ptr<Stream> newDataStream,bool controlStream);
    /*

    */
    //void UpdateItem (LPCWSTR_S itemName,intrusive_ptr<Stream> newDataStream,bool controlStream,System.IO.FileAttributes attributes);
    /*

    */
    //void UpdateItem (LPCWSTR_S itemName,std::vector<BYTE*> newData);
    /*

    */
    void Save (LPCWSTR_S outputFileName);
    /*

    */
    void Save (LPCWSTR_S outputFileName,bool createFilePath);
    /*

    */
    void Save (intrusive_ptr<Stream> stream,bool closeStream);
    /*

    */
    void Open (LPCWSTR_S inputFileName);
    /*

    */
    void Open (intrusive_ptr<Stream> stream,bool closeStream);
    /*

    */
    long LocateBlockWithSignature (int signature,intrusive_ptr<Stream> stream,int minimumBlockSize,int maximumVariableData);
    /*

    */
    void Open (intrusive_ptr<Stream> stream);
    /*

    */
    void Close ();
    /*

    */
    int Find (LPCWSTR_S itemName);
    /*

    */
    //int Find (System.Text.RegularExpressions.Regex itemRegex);
    /*

    */
    intrusive_ptr<ZipArchive> Clone ();
    /*

    */
    virtual void Dispose ();
    /*

    */
    intrusive_ptr<CompressorCreator> CreateCompressor ();
private:
};
}}