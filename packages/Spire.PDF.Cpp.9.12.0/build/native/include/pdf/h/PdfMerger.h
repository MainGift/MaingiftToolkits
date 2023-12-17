#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        The class can be used to merge pdf documents
    </summary>
*/
class EXPORTS PdfMerger : public virtual Object
{
public:
    /*
    <summary>
        Merge the PDF documents.
    </summary>
    <param name="inputFiles">The input PDF documents.</param>
    <param name="outputFile">The output PDF document.</param>
    <param name="pdfMergeOptions">Some options when do merge operation.</param>
    */
    static void Merge (std::vector<LPCWSTR_S> inputFiles,LPCWSTR_S outputFile,intrusive_ptr<MergerOptions> pdfMergeOptions);
    /*
    <summary>
        Merge the PDF documents.
    </summary>
    <param name="inputFiles">The input PDF documents.</param>
    <param name="outputFile">The output PDF document.</param>
    <param name="pdfMergeOptions">Some options when do merge operation.</param>
    */
    static void Merge (std::vector<intrusive_ptr<Stream>> inputFiles,intrusive_ptr<Stream> outputFile,intrusive_ptr<MergerOptions> pdfMergeOptions);
private:
};
}}