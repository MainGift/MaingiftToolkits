#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Convert HTML to PDF with plugin. 
            <para>For more details, please check https://www.e-iceblue.com/Tutorials/Spire.PDF/Spire.PDF-Program-Guide/Convert-HTML-to-PDF-with-New-Plugin.html </para></summary>
*/
class EXPORTS Qt_HtmlConverter : public virtual Object
{
public:
    /*
    <summary>
        Sets the path of the folder which cantains the HTMLConverter.dll
            and other dll files required for conversion.
    </summary>
    */
    static LPCWSTR_S GetPluginPath ();
    /*

    */
    static void SetPluginPath (LPCWSTR_S value);
    /*
    <summary>
         Convert an html page to a pdf file. The Qt html engine plugin is required.
             During conversion, JavaScript is enabled, default timeout is 30 seconds.
             The page size of output pdf file is A4 and margin is 90 (left-right) and 72 (top-bottom).
     </summary>
    <param name="url">Url address of the html page.</param>
    <param name="fileName">The output pdf file name.</param>
            [Obsolete("This method may be removed in the future.")]
        
    */
    static void Convert (LPCWSTR_S url,LPCWSTR_S fileName);
    /*
    <summary>
         Convert an html page to a pdf file. The Qt html engine plugin is required.
             During conversion, JavaScript is enabled, default timeout is 30 seconds.
             The page size of output pdf file is A4 and margin is 90 (left-right) and 72 (top-bottom).
     </summary>
    <param name="url">Url address of the html page.</param>
    <param name="stream">The output pdf Stream.</param>
            [Obsolete("This method may be removed in the future.")]
        
    */
    static void Convert (LPCWSTR_S url,intrusive_ptr<Stream> stream);
    /*
    <summary>
        Convert an html page to a pdf file. The Qt html engine plugin is required.
            During conversion, JavaScript is enabled, default timeout is 30 seconds.
            The page size of output pdf file is A4 and margin is 90 (left-right) and 72 (top-bottom).
    </summary>
    <param name="url">Url address of the html page.</param>
    <param name="fileName">The output pdf file name.</param>
    <param name="urlHtml">the load htmlcode or url </param>
    */
    static void Convert (LPCWSTR_S url,LPCWSTR_S fileName,LoadHtmlType urlHtml);
    /*
    <summary>
        Convert an html page to a pdf stream. The Qt html engine plugin is required.
            During conversion, JavaScript is enabled, default timeout is 30 seconds.
            The page size of output pdf file is A4 and margin is 90 (left-right) and 72 (top-bottom).
    </summary>
    <param name="url">Url address of the html page.</param>
    <param name="stream">The output pdf stream.</param>
    <param name="urlHtml">the load htmlcode or url </param>
    */
    static void Convert (LPCWSTR_S url,intrusive_ptr<Stream> stream,LoadHtmlType urlHtml);
    /*
    <summary>
         Convert an html page to a pdf file. The Qt html engine plugin is required.
     </summary>
    <param name="url">Url address of the html page.</param>
    <param name="fileName">The output pdf file name.</param>
    <param name="enableJavaScript">Indicates whether enable JavaScript.</param>
    <param name="timeout">The timeout of loading html.</param>
    <param name="pageSize">The page size of output pdf file.</param>
    <param name="margins">The margins of output pdf file.</param>
            [Obsolete("This method may be removed in the future.")]
        
    */
    static void Convert (LPCWSTR_S url,LPCWSTR_S fileName,bool enableJavaScript,int timeout,intrusive_ptr<SizeF> pageSize,intrusive_ptr<PdfMargins> margins);
    /*
    <summary>
         Convert an html page to a pdf stream. The Qt html engine plugin is required.
     </summary>
    <param name="url">Url address of the html page.</param>
    <param name="stream">The output pdf stream.</param>
    <param name="enableJavaScript">Indicates whether enable JavaScript.</param>
    <param name="timeout">The timeout of loading html.</param>
    <param name="pageSize">The page size of output pdf file.</param>
    <param name="margins">The margins of output pdf file.</param>
            [Obsolete("This method may be removed in the future.")]
        
    */
    static void Convert (LPCWSTR_S url,intrusive_ptr<Stream> stream,bool enableJavaScript,int timeout,intrusive_ptr<SizeF> pageSize,intrusive_ptr<PdfMargins> margins);
    /*
    <summary>
         Convert an html page to a pdf file. The Qt html engine plugin is required.
    </summary>
    <param name="url">Url address of the html page.</param>
    <param name="fileName">The output pdf file name.</param>
    <param name="enableJavaScript">Indicates whether enable JavaScript.</param>
    <param name="timeout">The timeout of loading html.</param>
    <param name="pageSize">The page size of output pdf file.</param>
    <param name="margins">The margins of output pdf file.</param>
    <param name="urlHtml">url or htmlcontent</param>
    */
    static void Convert (LPCWSTR_S url,LPCWSTR_S fileName,bool enableJavaScript,int timeout,intrusive_ptr<SizeF> pageSize,intrusive_ptr<PdfMargins> margins,LoadHtmlType urlHtml);
    /*
    <summary>
        Convert an html page to a pdf file. The Qt html engine plugin is required.
    </summary>
    <param name="url">Url address of the html page.</param>
    <param name="stream">The output pdf stream.</param>
    <param name="enableJavaScript">Indicates whether enable JavaScript.</param>
    <param name="timeout">The timeout of loading html.</param>
    <param name="pageSize">The page size of output pdf file.</param>
    <param name="margins">The margins of output pdf file.</param>
    <param name="urlHtml">url or htmlcontent</param>
    */
    static void Convert (LPCWSTR_S url,intrusive_ptr<Stream> stream,bool enableJavaScript,int timeout,intrusive_ptr<SizeF> pageSize,intrusive_ptr<PdfMargins> margins,LoadHtmlType urlHtml);
private:
};
}}