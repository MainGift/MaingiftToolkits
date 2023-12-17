#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        ZipFactory provides instances of IZipReader and IZipWriter.
    </summary>
*/
class EXPORTS ZipFactory : public virtual Object
{
public:
    /*
    <summary>
        Provides an instance of IZipWriter.
    </summary>
    <param name="path">The path of the ZIP file to create.</param>
    <returns></returns>
    */
    static intrusive_ptr<ZipWriter> CreateArchive (LPCWSTR_S path);
    /*

    */
    static intrusive_ptr<ZipWriter> CreateArchive (intrusive_ptr<Stream> stream);
    /*
    <summary>
        Provides an instance of IZipReader.
    </summary>
    <param name="path">The path of the ZIP file to read.</param>
    <returns></returns>
    */
    static intrusive_ptr<ZipReader> OpenArchive (LPCWSTR_S path);
    /*

    */
    static intrusive_ptr<ZipReader> OpenArchive (intrusive_ptr<Stream> stream);
private:
};
}}