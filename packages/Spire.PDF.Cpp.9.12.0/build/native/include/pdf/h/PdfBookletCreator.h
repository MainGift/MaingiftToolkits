#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a booklet creator, which allows to create a booklet from a Pdf document.
    </summary>
*/
class EXPORTS PdfBookletCreator : public virtual Object
{
public:
    /*
    <summary>
        Thie method creates a booklet
    </summary>
    <param name="document">The loaded document.</param>
    <param name="outfile">The out file</param>
    <param name="pageSize">Size of the page.</param>
    */
    static void CreateBooklet (intrusive_ptr<PdfDocument> document,LPCWSTR_S outfile,intrusive_ptr<SizeF> pageSize);
    /*
    <summary>
        Thie method creates a booklet
    </summary>
    <param name="document">The loaded document.</param>
    <param name="outStream">The out stream</param>
    <param name="pageSize">Size of the page.</param>
    */
    static void CreateBooklet (intrusive_ptr<PdfDocument> document,intrusive_ptr<Stream> outStream,intrusive_ptr<SizeF> pageSize);
    /*
    <summary>
        Thie method creates a booklet
    </summary>
    <param name="document">The loaded document.</param>
    <param name="outStream">The out stream</param>
    <param name="pageSize">Size of the page.</param>
    <param name="bookletOptions">Set BookletBinding,default value Left.</param>
    */
    static void CreateBooklet (intrusive_ptr<PdfDocument> document,intrusive_ptr<Stream> outStream,intrusive_ptr<SizeF> pageSize,intrusive_ptr<BookletOptions> bookletOptions);
private:
};
}}