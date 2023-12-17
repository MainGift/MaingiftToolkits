#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        This class provides support for converting ofd into pdf or image.
    </summary>
*/
class EXPORTS OfdConverter : public virtual Object
{
public:
    OfdConverter(LPCWSTR_S filename);

    /// <summary>
    /// Initializes a new instance of the class.
    /// </summary>
    /// <param name="fileStream">The ofd file stream.</param>
    OfdConverter(intrusive_ptr<Stream> fileStream);
    /*
    <summary>
        Gets the document page count.
    </summary>
    */
    int GetPageCount ();
    /*
    <summary>
        Save ofd document to pdf.
    </summary>
    <param name="filename">A relative or absolute path for the file.</param>
    */
    void ToPdf (LPCWSTR_S filename);
    /*
    <summary>
        Save ofd document to pdf.
    </summary>
    <param name="stream">The pdf file stream.</param>
    */
    void ToPdf (intrusive_ptr<Stream> stream);
    /*
    <summary>
        Saves OFD document page as image
    </summary>
    <param name="pageIndex">Page index</param>
    <returns>Returns page as Image</returns>
    */
    intrusive_ptr<Image> ToImage (int pageIndex);
    /*
    <summary>
        Saves OFD document page as image
    </summary>
    <param name="pageIndex">Page index</param>
    <param name="dpiX">Pictures X resolution</param>
    <param name="dpiY">Pictures Y resolution</param>
    <returns>Returns page as Image</returns>
    */
    intrusive_ptr<Image> ToImage (int pageIndex,int dpiX,int dpiY);
    /*

    */
    void Dispose ();
private:
};
}}