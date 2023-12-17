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
        The pdf standard conveter.
    </summary>
*/
class EXPORTS PdfStandardsConverter : public virtual Object
{
public:
    /// <summary>
    /// Construct a new converter.
    /// </summary>
    /// <param name="stream">The pdf file stream.</param>
    PdfStandardsConverter(intrusive_ptr<Stream> stream);

    /// <summary>
    /// Construct a new converter.
    /// </summary>
    /// <param name="filePath">The pdf file path.</param>
    PdfStandardsConverter(LPCWSTR_S filePath);
    /*
    <summary>
        Convert to pdf/a1b standard document.
    </summary>
    <param name="filePath">The out file path.</param>
    */
    void ToPdfA1B (LPCWSTR_S filePath);
    /*
    <summary>
        Convert to pdf/a1b standard document.
    </summary>
    <param name="stream">The out stream.</param>
    */
    void ToPdfA1B (intrusive_ptr<Stream> stream);
    /*
    <summary>
        Convert to pdf/a1a standard document.
    </summary>
    <param name="filePath">The out file path.</param>
    */
    void ToPdfA1A (LPCWSTR_S filePath);
    /*
    <summary>
        Convert to pdf/a1b standard document.
    </summary>
    <param name="stream">The out stream.</param>
    */
    void ToPdfA1A (intrusive_ptr<Stream> stream);
    /*
    <summary>
        Convert to pdf/a2b standard document.
    </summary>
    <param name="filePath">The out file path.</param>
    */
    void ToPdfA2B (LPCWSTR_S filePath);
    /*
    <summary>
        Convert to pdf/a2b standard document.
    </summary>
    <param name="stream">The out stream.</param>
    */
    void ToPdfA2B (intrusive_ptr<Stream> stream);
    /*
    <summary>
        Convert to pdf/a2a standard document.
    </summary>
    <param name="filePath">The out file path.</param>
    */
    void ToPdfA2A (LPCWSTR_S filePath);
    /*
    <summary>
        Convert to pdf/a2a standard document.
    </summary>
    <param name="stream">The out stream.</param>
    */
    void ToPdfA2A (intrusive_ptr<Stream> stream);
    /*
    <summary>
        Convert to pdf/a3b standard document.
    </summary>
    <param name="filePath">The out file path.</param>
    */
    void ToPdfA3B (LPCWSTR_S filePath);
    /*
    <summary>
        Convert to pdf/a3b standard document.
    </summary>
    <param name="stream">The out stream.</param>
    */
    void ToPdfA3B (intrusive_ptr<Stream> stream);
    /*
    <summary>
        Convert to pdf/a2a standard document.
    </summary>
    <param name="filePath">The out file path.</param>
    */
    void ToPdfA3A (LPCWSTR_S filePath);
    /*
    <summary>
        Convert to pdf/a3a standard document.
    </summary>
    <param name="stream">The out stream.</param>
    */
    void ToPdfA3A (intrusive_ptr<Stream> stream);
    /*
    <summary>
        Convert to pdf/x1a2001 standard document.
    </summary>
    <param name="filePath">The out file path.</param>
    */
    void ToPdfX1A2001 (LPCWSTR_S filePath);
    /*
    <summary>
        Convert to pdf/x1a2001 standard document.
    </summary>
    <param name="stream">The out stream.</param>
    */
    void ToPdfX1A2001 (intrusive_ptr<Stream> stream);
    /*

    */
    virtual void Dispose ();
private:
};
}}