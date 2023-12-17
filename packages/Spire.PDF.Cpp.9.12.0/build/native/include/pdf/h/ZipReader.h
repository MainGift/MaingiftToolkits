#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        ZipReader defines an abstract class to read entries from a ZIP file.
    </summary>
*/
class EXPORTS ZipReader : public virtual Object
{
public:
    /*
    <summary>
        Get an entry from a ZIP file.
    </summary>
    <param name="relativePath">The relative path of the entry in the ZIP
            file.</param>
    <returns>A stream containing the uncompressed data.</returns>
    */
    virtual intrusive_ptr<Stream> GetEntry (LPCWSTR_S relativePath);
    /*

    */
    //virtual void ExtractOfficeDocument (LPCWSTR_S directory,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.IO.Stream, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dict);
    /*

    */
    //virtual void ExtractUOFDocument (LPCWSTR_S directory,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.IO.Stream, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dict);
    /*
    <summary>
        Close the ZIP file.
    </summary>
    */
    virtual void Close ();
private:
};
}}