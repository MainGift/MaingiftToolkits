#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/Stream.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfToLinearizedPdfConverter : public virtual Object
{
public:
    PdfToLinearizedPdfConverter();
    /// <summary>
    /// Construct a new converter.
    /// </summary>
    /// <param name="stream">The pdf file stream.</param>
    PdfToLinearizedPdfConverter(intrusive_ptr<Stream> stream);

    /// <summary>
    /// Construct a new converter.
    /// </summary>
    /// <param name="filePath">The pdf file path.</param>
    PdfToLinearizedPdfConverter(LPCWSTR_S filePath);
    /*
    <summary>
        Convert to linearized pdf document.
    </summary>
    <param name="filePath">The out file path.</param>
    */
    void ToLinearizedPdf (LPCWSTR_S filePath);
    /*
    <summary>
        Convert to linearized pdf document.
    </summary>
    <param name="stream">The out stream.</param>
    */
    void ToLinearizedPdf (intrusive_ptr<Stream> stream);
    /*

    */
    void Dispose ();
private:
};
}}