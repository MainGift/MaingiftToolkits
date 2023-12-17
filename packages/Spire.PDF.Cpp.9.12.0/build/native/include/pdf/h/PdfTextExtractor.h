#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represent the pdf text extractor.
    </summary>
*/
class EXPORTS PdfTextExtractor : public virtual Object
{
public:
    PdfTextExtractor(intrusive_ptr<PdfPageBase> page);
    /*
    <summary>
        Extract text from the page.
    </summary>
    <param name="options">The options.</param>
    <returns>The Extracted Text.</returns>
    */
    LPCWSTR_S ExtractText (intrusive_ptr<PdfTextExtractOptions> options);
private:
};
}}