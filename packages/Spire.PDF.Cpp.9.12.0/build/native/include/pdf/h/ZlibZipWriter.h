#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ZipWriter.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS ZlibZipWriter : public virtual ZipWriter
{
public:
    /*

    */
    virtual void AddEntry (LPCWSTR_S relativePath);
    /*

    */
    virtual void Close ();
    /*

    */
    //virtual int Read (std::vector<BYTE*> buffer,int offset,int count);
    /*

    */
   // virtual void Write (std::vector<BYTE*> buffer,int offset,int count);
    /*

    */
    //virtual long Seek (long offset,System.IO.SeekOrigin origin);
    /*

    */
    virtual void SetLength (long value);
    /*

    */
    virtual void Flush ();
    /*

    */
    virtual long GetPosition ();
    /*

    */
    virtual void SetPosition (long value);
    /*

    */
    virtual long GetLength ();
    /*

    */
    virtual bool GetCanRead ();
    /*

    */
    virtual bool GetCanWrite ();
    /*

    */
    virtual bool GetCanSeek ();
    /*
    <summary>
        Resolves a path by interpreting "." and "..".
    </summary>
    <param name="path">The path to resolve.</param>
    <returns>The resolved path.</returns>
    */
    static LPCWSTR_S ResolvePath (LPCWSTR_S path);
private:
};
}}