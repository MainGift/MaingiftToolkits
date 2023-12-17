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
        The gray pdf conveter.
    </summary>
*/
class EXPORTS PdfGrayConverter : public virtual Object
{
public:
    PdfGrayConverter();
    PdfGrayConverter(intrusive_ptr<Stream> stream);

    PdfGrayConverter(LPCWSTR_S filePath);
    /*
    <summary>
        Convert to gray pdf document.
    </summary>
    <param name="filePath">The out file path.</param>
    */
    void ToGrayPdf (LPCWSTR_S filePath);
    /*
    <summary>
        Convert to gray pdf document.
    </summary>
    <param name="stream">The out stream.</param>
    */
    void ToGrayPdf (intrusive_ptr<Stream> stream);
    /*

    */
    virtual void Dispose ();
private:
};
}}