#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
#include "FileFormat.h"
#include "PdfConformanceLevel.h"
#include "PdfCompressionLevel.h"
#include "PdfColorSpace.h"
//#include "../../common/h/Stream.h"
#include "PdfPageLabels.h"
#include "PdfFileInfo.h"
#include "PdfDocumentTemplate.h"
#include "PdfPageBase.h"
#include "PdfDocumentInformation.h"
#include "PdfViewerPreferences.h"
#include "PdfPageSettings.h"
#include "PdfSectionCollection.h"
#include "PdfPageCollection.h"
#include "PdfForm.h"
#include "PdfBookmarkCollection.h"
#include "PdfAttachmentCollection.h"
#include "PdfDocumentActions.h"
#include "PdfSecurity.h"
#include "PdfUsedFont.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represent common PdfDocumentBase classes.
    </summary>
*/
class EXPORTS PdfDocumentBase : public virtual Object
{
public:
    /*

    */
    void SaveToPostScript (LPCWSTR_S filename);
    /*
    <summary>
        Save the document to doc as stream[].
    </summary>
    <param name="stream">The doc stream.</param>
    <param name="IsDocx">Is docs or doc.</param>
    */
    void SaveToDoc (intrusive_ptr<Stream> stream,bool IsDocx);
    /*

    */
    void SaveToDoc (LPCWSTR_S filename);
    /*
    <summary>
        Closes the document. Releases all common resources.
    </summary>
    */
    void Close ();
    /*
<summary> 
            Closes the document.
    </summary>
    <param name="completely">if set to <c>true</c> the document should close its stream as well.</param>
    */
    virtual void Close (bool completely);
    /*
    <summary>
        Saves the document to the specified stream.
    </summary>
    <param name="stream">The stream object where PDF document will be saved.</param>
    */
    virtual void Save (intrusive_ptr<Stream> stream);
    /*
    <summary>
        Imports a page.
    </summary>
    <param name="ldDoc">The loaded document.</param>
    <param name="page">The page.</param>
    <returns>The page in the result document.</returns>
    */
    intrusive_ptr<PdfPageBase> ImportPage (intrusive_ptr<PdfDocumentBase> ldDoc,intrusive_ptr<PdfPageBase> page);
    /*
    <summary>
        Imports a page.
    </summary>
    <param name="ldDoc">The loaded document.</param>
    <param name="pageIndex">Index of the page.</param>
    <returns>The page in the result document.</returns>
    */
    intrusive_ptr<PdfPageBase> ImportPage (intrusive_ptr<PdfDocumentBase> ldDoc,int pageIndex);
    /*
    <summary>
        Imports a page.
    </summary>
    <param name="ldDoc">The loaded document.</param>
    <param name="pageIndex">Index of the page.</param>
    <param name="resultPageIndex">The page index in the result document.</param>
    <returns>The page in the result document.</returns>
    */
    intrusive_ptr<PdfPageBase> ImportPage (intrusive_ptr<PdfDocumentBase> ldDoc,int pageIndex,int resultPageIndex);
    /*
    <summary>
        Imports a page range from a loaded document.
    </summary>
    <param name="ldDoc">The loaded document.</param>
    <param name="startIndex">The start page index.</param>
    <param name="endIndex">The end page index.</param>
    <returns>The last created page in the result document.</returns>
    */
    intrusive_ptr<PdfPageBase> ImportPageRange (intrusive_ptr<PdfDocumentBase> ldDoc,int startIndex,int endIndex);
    /*
    <summary>
        Imports a page range from a loaded document.
    </summary>
    <param name="ldDoc">The loaded document.</param>
    <param name="startIndex">The start page index.</param>
    <param name="endIndex">The end page index.</param>
    <param name="resultPageIndex">The page index in the result document when startIndex == endIndex.</param>
    <returns>The last created page in the result document.</returns>
    */
    intrusive_ptr<PdfPageBase> ImportPageRange (intrusive_ptr<PdfDocumentBase> ldDoc,int startIndex,int endIndex,int resultPageIndex);
    /*

    */
    virtual void Dispose ();
    /*
    <summary>
        The conformance level.
    </summary>
    */
    virtual PdfConformanceLevel GetConformance ();
    /*

    */
    //virtual void SetConformance (PdfConformanceLevel value);
    /*

    */
    virtual intrusive_ptr<PdfAttachmentCollection> GetAttachments ();
    /*

    */
    virtual PdfColorSpace GetColorSpace ();
    /*

    */
    virtual void SetColorSpace (PdfColorSpace value);
    /*

    */
    virtual intrusive_ptr<PdfForm> GetForm ();
    /*
    <summary>
        Page labels.
    </summary>
    */
    intrusive_ptr<PdfPageLabels> GetPageLabels ();
    /*

    */
    void SetPageLabels (intrusive_ptr<PdfPageLabels> value);
    /*
    <summary>
        Gets the fonts which are available in the PDF document.
    </summary>
<value>Retruns the fonts which are used in the PDF document.</value>
    */
    std::vector<intrusive_ptr<PdfUsedFont>> GetUsedFonts ();
    /*

    */
    intrusive_ptr<PdfSectionCollection> GetSections ();
    /*

    */
    intrusive_ptr<PdfPageSettings> GetPageSettings ();
    /*

    */
    void SetPageSettings (intrusive_ptr<PdfPageSettings> value);
    /*
    <summary>
        Gets or sets a template that is applied to all pages in the document.
    </summary>
<value>The  specifying the default template for the document.</value>
    */
    intrusive_ptr<PdfDocumentTemplate> GetTemplate ();
    /*

    */
    void SetTemplate (intrusive_ptr<PdfDocumentTemplate> value);
    /*
    <summary>
        Gets the pages.
    </summary>
    */
    intrusive_ptr<PdfPageCollection> GetPages ();
    /*
    <summary>
        Gets the security parameters of the document.
    </summary>
    */
    intrusive_ptr<PdfSecurity> GetSecurity ();
    /*
    <summary>
        Gets or sets document's information and properties.
    </summary>
    */
    virtual intrusive_ptr<PdfDocumentInformation> GetDocumentInformation ();
    /*
    <summary>
        Gets or sets a viewer preferences object controlling the way the document is to be 
            presented on the screen or in print.
    </summary>
    */
    intrusive_ptr<PdfViewerPreferences> GetViewerPreferences ();
    /*

    */
    void SetViewerPreferences (intrusive_ptr<PdfViewerPreferences> value);
    /*
    <summary>
        Gets or sets the desired level of stream compression.
    </summary>
<remarks>All new objects should be compressed with this level of the compression.</remarks>
    */
    PdfCompressionLevel GetCompressionLevel ();
    /*

    */
    void SetCompressionLevel (PdfCompressionLevel value);
    /*
    <summary>
        Gets or sets the internal structure of the PDF file.
    </summary>
    */
    intrusive_ptr<PdfFileInfo> GetFileStructure ();
    /*

    */
    void SetFileStructure (intrusive_ptr<PdfFileInfo> value);
    /*
    <summary>
        Gets the additional document's actions.
    </summary>
<value>The  specifying the document action.</value>
    */
    intrusive_ptr<PdfDocumentActions> GetJavaScripts ();
    /*
    <summary>
        Gets the bookmarks.
    </summary>
    */
    virtual intrusive_ptr<PdfBookmarkCollection> GetBookmarks ();
    /*

    */
    //virtual System.Object Clone ();
    /*
    <summary>
        Splits a PDF file to many PDF files, each of them consists of one page from the source file.
    </summary>
    <param name="destFilePattern">Template for destination file names.</param>
<remarks>
            Each destination file will have 'destFileName{0***}' name,
            where *** is an optional format string for the number of the
            page inside of the source document.
            </remarks>
    */
    void Split (LPCWSTR_S destFilePattern);
    /*
    <summary>
        Splits a PDF file to many PDF files, each of them consists of
            one page from the source file.
    </summary>
    <param name="destFilePattern">Template for destination file
            names.</param>
    <param name="startNumber">The number that is use as a start
            point for the page numbering.</param>
<remarks>
            Each destination file will have 'destFileName{0***}' name,
            where *** is an optional format string for the number of the
            page inside of the source document.
            </remarks>
    */
    void Split (LPCWSTR_S destFilePattern,int startNumber);
    /*
    <summary>
        Merges the specified source documents and return destination document.
    </summary>
    <param name="dest">The destination document, where the other documents are merged into.
            If it's null a new document object will be created.</param>
    <param name="sourceDocuments">The source documents.</param>
    <returns>The document containing merged documents.</returns>
    */
    static intrusive_ptr<PdfDocumentBase> Merge (intrusive_ptr<PdfDocumentBase> dest,std::vector<intrusive_ptr<Object>> sourceDocuments);
    /*
    <summary>
        Adds an object to a collection of the objects that will be disposed during document closing.
    </summary>
    <param name="obj">The object that will be disposed during document closing.</param>
    */
    //void DisposeOnClose (System.IDisposable obj);
    /*

    */
    void Save (LPCWSTR_S fileName,FileFormat fileformat);
    /*
    <summary>
        Convert the document to an stream with the file format.
    </summary>
    <param name="stream">
            The stream with the file format.
    </param>
    <param name="fileformat">
            The file format.
            FileFormat.SVG is not supported, because SVG file has no paging,so can't be saved to an stream.
    </param>
    */
    void Save (intrusive_ptr<Stream> stream,FileFormat fileformat);
    /*
    <summary>
        Convert the document to streams with the file format.
    </summary>
    <param name="fileformat">The file format.</param>
    <returns>
            The format file streams.
            FileFormat.PDF:return only one stream(PDF support paging).
            FileFormat.XPS:return only one stream(XPS support paging).
            FileFormat.DOC:return only one stream(DOC support paging).
            FileFormat.DOCX:return only one stream(DOCX support paging).
            FileFormat.XLSX:return only one stream(XLSX support paging).
            FileFormat.PCL:return only one stream(PCL support paging).
            FileFormat.POSTSCRIPT:return only one stream(POSTSCRIPT support paging).
            FileFormat.HTML:return only one stream(HTML support paging).
            FileFormat.SVG:return multiple streams(SVG not support paging,one stream to one page).
            </returns>
    */
    std::vector<intrusive_ptr<Stream>> Save (FileFormat fileformat);
    /*
    <summary>
        Convert the document to streams with the file format.
    </summary>
    <param name="startIndex">The start index.</param>
    <param name="endIndex">The end index.</param>
    <param name="fileformat">The file format.</param>
    <returns>
            The format file streams.
            FileFormat.PDF:return only one stream(PDF support paging).
            FileFormat.XPS:return only one stream(XPS support paging).
            FileFormat.DOC:return only one stream(DOC support paging).
            FileFormat.DOCX:return only one stream(DOCX support paging).
            FileFormat.XLSX:return only one stream(XLSX support paging).
            FileFormat.PCL:return only one stream(PCL support paging).
            FileFormat.POSTSCRIPT:return only one stream(POSTSCRIPT support paging).
            FileFormat.HTML:return only one stream(HTML support paging).
            FileFormat.SVG:return multiple streams(SVG not support paging,one stream to one page).
            </returns>
    */
    std::vector<intrusive_ptr<Stream>> Save (int startIndex,int endIndex,FileFormat fileformat);
    /*
    <summary>
        Saves the document to the specified filename.
    </summary>
    <param name="filename">The filename.</param>
    */
    void Save (LPCWSTR_S filename);
    /*
    <summary>
        Save the document to xps as stream.
    </summary>
    <param name="stream">The xps stream.</param>
    */
    void SaveToXPS (intrusive_ptr<Stream> stream);
    /*

    */
    void SaveToXPS (LPCWSTR_S savefilename);
    /*
    <summary>
        Save the document to svg as stream[].
    </summary>
    <returns>Stream collection</returns>
    */
    std::vector<intrusive_ptr<Stream>> SaveToSVG ();
    /*

    */
    void SaveToHtml (LPCWSTR_S filename);
    /*
    <summary>
        Save the document to html stream.
    </summary>
    <param name="stream">The html stream.</param>
    */
    void SaveToHtml (intrusive_ptr<Stream> stream);
    /*

    */
    void SaveToPcl (intrusive_ptr<Stream> stream);
    /*

    */
    void SaveToPcl (LPCWSTR_S filename);
    /*

    */
    void SaveToPostScript (intrusive_ptr<Stream> stream);
private:
};
}}