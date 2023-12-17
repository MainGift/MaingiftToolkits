#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/Stream.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        ZipWriter defines an abstract class to write entries into a ZIP file.
            To add a file, first call AddEntry with the relative path, then
            write the content of the file into the stream.
    </summary>
*/
class EXPORTS ZipWriter : public virtual Stream
{
public:
    /*
    <summary>
        Adds an entry to the ZIP file (only writes the header, to write
            the content use Stream methods).
    </summary>
    <param name="relativePath">The relative path of the entry in the ZIP
            file.</param>
    */
    virtual void AddEntry (LPCWSTR_S relativePath);
private:
};
}}