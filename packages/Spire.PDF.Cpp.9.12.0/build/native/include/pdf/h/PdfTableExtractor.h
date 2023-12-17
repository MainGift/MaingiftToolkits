#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represent the pdf table extractor.
    </summary>
*/
class EXPORTS PdfTableExtractor : public virtual Object
{
public:
    PdfTableExtractor(intrusive_ptr<PdfDocument> document);
    /*
    <summary>
        Extract table from the pdf document
    </summary>
    <param name="pageIndex">pageIndex</param>
    <returns>An array of PdfTable.</returns>
    */
    std::vector<intrusive_ptr<Utilities_PdfTable>> ExtractTable (int pageIndex);
    /*

    */
    virtual void Dispose ();
private:
};
}}