#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/Stream.h"
#include "PdfEmbeddedFileSpecification.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents attachments of the Pdf document.
    </summary>
*/
class EXPORTS PdfAttachment : public virtual PdfEmbeddedFileSpecification
{
public:
    PdfAttachment();

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="fileName">Name of the file.</param>
    PdfAttachment(LPCWSTR_S fileName);

    //PdfAttachment(LPCWSTR_S fileName, std::vector<BYTE*> data);

    /// <summary>
    ///  Initializes a new instance of the  class.
    /// </summary>
    /// <param name="fileName">Name of the file.</param>
    /// <param name="stream">The stream.</param>
    PdfAttachment(LPCWSTR_S fileName, intrusive_ptr<Stream> stream);
private:
};
}}