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
        This class provides support for converting PDF into an XPS Document.
    </summary>
*/
class EXPORTS PdfToDocConverter : public virtual Object
{
public:
    PdfToDocConverter();

    /// <summary>
    /// Construct a new converter.
    /// </summary>
    /// <param name="stream">The pdf file stream.</param>
    PdfToDocConverter(intrusive_ptr<Stream> stream);

    /// <summary>
    /// Construct a new converter.
    /// </summary>
    /// <param name="filePath">The pdf file path.</param>
    PdfToDocConverter(LPCWSTR_S filePath);
    /*

    */
    intrusive_ptr<DocxOptions> GetDocxOptions ();
    /*

    */
    void SetDocxOptions (intrusive_ptr<DocxOptions> value);
    /*
    <summary>
        Convert to doc/docx document.
    </summary>
    <param name="fileStream">The out file stream.</param>
    */
    void SaveToDocx (intrusive_ptr<Stream> fileStream);
    /*
    <summary>
        Convert to doc/docx document.
    </summary>
    <param name="fileStream">The out file stream.</param>
    <param name="isDocx">Is docs or doc.</param>
    */
    void SaveToDocx (intrusive_ptr<Stream> fileStream,bool isDocx);
    /*
    <summary>
        Convert to doc/docx document.
    </summary>
    <param name="filename">The out file name.</param>
    */
    void SaveToDocx (LPCWSTR_S filename);
    /*
    <summary>
        Convert to doc/docx document.
    </summary>
    <param name="filename">The out file name.</param>
    <param name="isDocx">Is docs or doc.</param>
    */
    void SaveToDocx (LPCWSTR_S filename,bool isDocx);
private:
};
}}