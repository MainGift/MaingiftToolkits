#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/Stream.h"
#include "FileFormat.h"
#include "PdfConformanceLevel.h"
#include "PdfCompressionLevel.h"
#include "PdfColorSpace.h"
#include "PdfImageType.h"
#include "PdfDocumentBase.h"
#include "PdfCollection.h"
#include "PdfPageLabels.h"
#include "PdfPieceInfo.h"
#include "PdfConvertOptions.h"
#include "PdfFileInfo.h"
#include "DrawPageInBookletEventHandler.h"
#include "PdfDocumentTemplate.h"
#include "PdfPageBase.h"
#include "PdfDocumentInformation.h"
#include "PdfViewerPreferences.h"
#include "PdfPageSettings.h"
#include "PdfSectionCollection.h"
#include "XmpMetadata.h"
#include "PdfHtmlLayoutFormat.h"
#include "PdfLayerCollection.h"
#include "PdfPageCollection.h"
#include "PdfForm.h"
#include "PdfBookmarkCollection.h"
#include "PdfAttachmentCollection.h"
#include "PdfToHtmlParameter.h"
#include "PdfAction.h"
#include "PdfJavaScriptAction.h"
#include "PdfDocumentActions.h"
#include "PdfPrintSettings.h"
#include "PdfSecurity.h"
#include "Collections_PdfCollection.h"
#include "PdfDocument.h"
#include "PdfGoToAction.h"
#include "ImageFormatType.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
class EXPORTS PdfDocument : public virtual Object
{
public:
    /// <summary>
    /// Initializes a new instance of the class.
    /// </summary>
    PdfDocument();
    ~PdfDocument();

    /// <summary>
    /// Initializes a new instance of the class.
    /// </summary>
    /// <param name="filename">The path to source pdf file.</param>
    /// <remarks>This constructor imports an existing pdf file into the document object. It automatically populates the Pages collection with the pages of the given document. </remarks>
    PdfDocument(LPCWSTR_S filename);

    /// <summary>
    /// Initializes a new instance of the class.
    /// </summary>
    /// <param name="filename">The path to source PDF document.</param>
    /// <param name="password">The password (user or owner) of the encrypted document.</param>
    PdfDocument(LPCWSTR_S filename, LPCWSTR_S password);

    //PdfDocument(PdfConformanceLevel Pdflevel);

    //PdfDocument(std::vector<BYTE*> bytes);

    //PdfDocument(std::vector<BYTE*> bytes, LPCWSTR_S password);

    /// <summary>
    /// Initializes a new instance of the class.
    /// </summary>
    /// <param name="stream">The stream with the file.</param>
    PdfDocument(intrusive_ptr<Stream> stream);

    /// <summary>
    /// Initializes a new instance.
    /// </summary>
    /// <param name="stream">The stream with the file.</param>
    /// <param name="password">The password (user or owner) of the encrypted document.</param>
    PdfDocument(intrusive_ptr<Stream> stream, LPCWSTR_S password);

    static intrusive_ptr<PdfDocument> CreatePdfDocument();
    
    /// <summary>
    /// Closes the document.
    /// </summary>
    /// <remarks>The document is disposed after calling the Close method. So, the document can not be saved if Close method was invoked.</remarks>
    void Close ();
    
    /// <summary>
    /// Releases unmanaged resources and performs other cleanup operations before the
    ///  is reclaimed by garbage collection.
    /// </summary>
    virtual void Dispose ();
    static void SetCustomFontsFolders (LPCWSTR_S fontPath);
    static void ClearCustomFontsFolders ();
    bool GetUseHighQualityImage ();
    void SetUseHighQualityImage (bool value);
    //intrusive_ptr<PdfToHtmlParameter> GetSetPdfToHtmlParameter ();
    //void SetSetPdfToHtmlParameter (intrusive_ptr<PdfToHtmlParameter> value);
    bool GetAllowCreateForm ();
    void SetAllowCreateForm (bool value);
    bool GetUsePsDirectlyForConvert ();
    void SetUsePsDirectlyForConvert (bool value);
    bool GetUseInvariantCulture ();
    void SetUseInvariantCulture (bool value);
    intrusive_ptr<PdfConvertOptions> GetConvertOptions ();
    intrusive_ptr<PdfDocumentBase> GetPDFStandard ();
    void SetPDFStandard (intrusive_ptr<PdfDocumentBase> value);
    PdfConformanceLevel GetConformance ();
    intrusive_ptr<PdfAttachmentCollection> GetAttachments ();
    intrusive_ptr<PdfBookmarkCollection> GetBookmarks ();
    PdfColorSpace GetColorSpace ();
    void SetColorSpace (PdfColorSpace value);
    intrusive_ptr<PdfDocumentInformation> GetDocumentInformation ();
    intrusive_ptr<PdfDocumentActions> GetJavaScripts ();
    intrusive_ptr<PdfForm> GetForm ();
    intrusive_ptr<PdfPageLabels> GetPageLabels ();
    void SetPageLabels (intrusive_ptr<PdfPageLabels> value);
    intrusive_ptr<PdfPieceInfo> GetDocumentPieceInfo ();
    void SetDocumentPieceInfo (intrusive_ptr<PdfPieceInfo> value);
    intrusive_ptr<PdfPageCollection> GetPages ();
    std::vector<intrusive_ptr<PdfUsedFont>> GetUsedFonts ();
    PdfCompressionLevel GetCompressionLevel ();
    void SetCompressionLevel (PdfCompressionLevel value);
    intrusive_ptr<PdfPageSettings> GetPageSettings ();
    void SetPageSettings (intrusive_ptr<PdfPageSettings> value);
    intrusive_ptr<PdfSectionCollection> GetSections ();
    intrusive_ptr<PdfFileInfo> GetFileInfo ();
    void SetFileInfo (intrusive_ptr<PdfFileInfo> value);
    intrusive_ptr<PdfSecurity> GetSecurity ();
    intrusive_ptr<PdfViewerPreferences> GetViewerPreferences ();
    void SetViewerPreferences (intrusive_ptr<PdfViewerPreferences> value);
    intrusive_ptr<PdfGoToAction> GetAfterOpenAction ();
    //intrusive_ptr<PdfAction> GetAfterOpenAction();
    void SetAfterOpenAction (intrusive_ptr<PdfAction> value);
    void SetAfterOpenAction();
    intrusive_ptr<PdfJavaScriptAction> GetAfterPrintAction ();
    void SetAfterPrintAction (intrusive_ptr<PdfJavaScriptAction> value);
    intrusive_ptr<PdfJavaScriptAction> GetAfterSaveAction ();
    void SetAfterSaveAction (intrusive_ptr<PdfJavaScriptAction> value);
    intrusive_ptr<PdfJavaScriptAction> GetBeforeCloseAction ();
    void SetBeforeCloseAction (intrusive_ptr<PdfJavaScriptAction> value);
    intrusive_ptr<PdfJavaScriptAction> GetBeforePrintAction ();
    void SetBeforePrintAction (intrusive_ptr<PdfJavaScriptAction> value);
    intrusive_ptr<PdfJavaScriptAction> GetBeforeSaveAction ();
    void SetBeforeSaveAction (intrusive_ptr<PdfJavaScriptAction> value);
    //intrusive_ptr<XmpMetadata> GetXmpMetaData ();
    intrusive_ptr<PdfDocumentTemplate> GetTemplate ();
    static bool GetEnableFontCache ();
    static void SetEnableFontCache (bool value);
    //System.Object GetTag ();
    //void SetTag (System.Object value);
    bool GetIsEncrypted ();
    bool GetIsPortfolio ();
    intrusive_ptr<PdfLayerCollection> GetLayers ();
    intrusive_ptr<Collections_PdfCollection> GetCollection ();

    /// <summary>
    /// Initializes a new instance of the class.
    /// </summary>
    /// <param name="filename">The path to source pdf file.</param>
    /// <remarks>This constructor imports an existing pdf file into the document object. It automatically populates the Pages collection with the pages of the given document. </remarks>
    void LoadFromFile (LPCWSTR_S filename);

    /// <summary>
    /// Initializes a new instance of the class.
    /// </summary>
    /// <param name="filename">The path to source PDF document.</param>
    /// <param name="password">The password (user or owner) of the encrypted document.</param>
    void LoadFromFile (LPCWSTR_S filename,LPCWSTR_S password);
    void LoadFromFile (LPCWSTR_S fileName,FileFormat fileFormat);
    //void LoadFromXPS (std::vector<intrusive_ptr<Object>> xpsBytes);
    //void LoadFromXPS (LPCWSTR_S fileName);
    //void LoadFromXPS (intrusive_ptr<Stream> xpsStream);

    /// <summary>
    /// Load a svg file.
    /// </summary>
    /// <param name="fileName">A relative or absolute path for the svg file</param>
    void LoadFromSvg (LPCWSTR_S fileName);
    //void LoadFromSvg (System.IO.Stream stream);
    //void LoadFromHTML (LPCWSTR_S url,bool enableJavaScript,bool enableHyperlinks,bool autoDetectPageBreak);
    //void LoadFromHTML (LPCWSTR_S Url,bool enableJavaScript,bool enableHyperlinks,bool autoDetectPageBreak,intrusive_ptr<PdfPageSettings> setting);
    //void LoadFromHTML (LPCWSTR_S Url,bool enableJavaScript,bool enableHyperlinks,bool autoDetectPageBreak,intrusive_ptr<PdfPageSettings> setting,intrusive_ptr<PdfHtmlLayoutFormat> layoutFormat);
    //void LoadFromHTML (LPCWSTR_S url,bool enableJavaScript,bool enableHyperlinks,bool autoDetectPageBreak,intrusive_ptr<PdfPageSettings> setting,intrusive_ptr<PdfHtmlLayoutFormat> layoutFormat,bool isLoadComplete);
    //void LoadFromHTML (LPCWSTR_S htmlSourceCode,bool autoDetectPageBreak,intrusive_ptr<PdfPageSettings> setting,intrusive_ptr<PdfHtmlLayoutFormat> layoutFormat);
    //void LoadFromHTML (LPCWSTR_S htmlSourceCode,bool autoDetectPageBreak,intrusive_ptr<PdfPageSettings> setting,intrusive_ptr<PdfHtmlLayoutFormat> layoutFormat,bool isLoadComplete);
    //void LoadFromBytes (std::vector<System.Byte> bytes);
    //void LoadFromStream (System.IO.Stream stream);
    //void LoadFromBytes (std::vector<System.Byte> bytes,LPCWSTR_S password);
    //void LoadFromStream (System.IO.Stream stream,LPCWSTR_S password);

    /// <summary>
    /// Thie method creates a booklet
    /// </summary>
    /// <param name="fileName">The loaded document filename.</param>
    /// <param name="width">The page width</param>
    /// <param name="height">The page height</param>
    /// <param name="bothSides">if set to <c>true</c> if the result in document should be printed</param>
    void CreateBooklet (LPCWSTR_S fileName,float width, float height,bool bothSides);
    //void CreateBooklet (LPCWSTR_S fileName, float width, float height,bool bothSides,intrusive_ptr<DrawPageInBookletEventHandler> beginDrawPage,intrusive_ptr<DrawPageInBookletEventHandler> endDrawPage);

    /// <summary>
    /// Verify pdf document regarding signature.
    /// </summary>
    /// <param name="signName">Signature field name.</param>
    /// <returns>Signature is validated return true,otherwise false</returns>
    bool VerifySignature (LPCWSTR_S signName);
    //std::vector<System.Byte> GetSignatureContent (LPCWSTR_S signName);
    
    /// <summary>
    /// Whether the file is password protected.
    /// </summary>
    /// <param name="fileName">The file name</param>
    /// <returns>if password protected,return true,or false</returns>
    static bool IsPasswordProtected (LPCWSTR_S fileName);

    /// <summary>
    /// Indicates whether contains extended right.
    /// </summary>
    bool HasExtendedRight ();

    /// <summary>
    /// Removes the extended right.
    /// </summary>
    void RemoveExtendedRight ();

    /// <summary>
    /// Save the document to the specified stream.
    /// </summary>
    /// <param name="stream">
    /// The stream which default saved to the FileFormat.PDF format.
    /// </param>
    void SaveToStream (intrusive_ptr<Stream> stream);

    //std::vector<Stream> SaveToStream (FileFormat fileformat);
    //std::vector<System.IO.Stream> SaveToStream (int startIndex,int endIndex,FileFormat fileformat);

    /// <summary>
    /// Convert the document to an stream with the file format.
    /// </summary>
    /// <param name="stream">
    /// The stream with the file format.
    /// </param>
    /// <param name="fileformat">
    /// The file format.
    /// FileFormat.SVG is not supported, because SVG file has no paging,so can't be saved to a stream.
    /// </param>
    void SaveToStream (intrusive_ptr<Stream> stream,FileFormat fileformat);

    /// <summary>
    /// Saves PDF document to file.
    /// </summary>
    /// <param name="filename">A relative or absolute path for the file</param>
    void SaveToFile (LPCWSTR_S filename);

    /// <summary>
    /// Saves PDF document to file.
    /// </summary>
    /// <param name="filename">A relative or absolute path for the file</param>
    /// <param name="fileFormat">File format for the file</param>
    void SaveToFile (LPCWSTR_S filename,FileFormat fileFormat);

    /// <summary>
    /// Saves PDF document to PDF or other Format files.
    /// Current only supports save PDF document to SVG and PDF
    /// </summary>
    /// <param name="filename">A relative or absolute path for the file</param>
    /// <param name="startIndex">The start page index.The index starts at 0</param>
    /// <param name="endIndex">The end page index.</param>
    /// <param name="fileFormat">File format for the file</param>
    void SaveToFile (LPCWSTR_S filename,int startIndex,int endIndex,FileFormat fileFormat);
    
    /// <summary>
    /// Saves PDF document page as image
    /// </summary>
    /// <param name="filename">A relative or absolute path for the file</param>
    /// <param name="imgType">ImageFormat Type</param>
    /// <returns>Returns PDF document as Image.</returns>
    void SaveToImage (LPCWSTR_S filename, ImageFormatType imgType);

    /// <summary>
    /// Saves PDF document page as stream
    /// </summary>
    /// <param name="pageIndex">Page index.</param>
    /// <returns>Returns page as stream.</returns>
    intrusive_ptr<Stream> SaveAsImage (int pageIndex);
    //System.Drawing.Image SaveAsImage (int pageIndex,int dpiX,int dpiY);
    //System.Drawing.Image SaveAsImage (int pageIndex,PdfImageType type,int dpiX,int dpiY);
   
    /// <summary>
    /// Saves PDF document page as stream
    /// </summary>
    /// <param name="pageIndex">Page index</param>
    /// <param name="type">PdfImageType type </param>
    /// <returns>Returns page as stream</returns>
    intrusive_ptr<Stream> SaveAsImage (int pageIndex,PdfImageType type);
    //virtual System.Object Clone ();

    /// <summary>
    /// Appends the specified loaded document to this one.
    /// </summary>
    /// <param name="doc">The loaded document.</param>
    void AppendPage (intrusive_ptr<PdfDocument> doc);

    /// <summary>
    /// Appends a new page to this one.
    /// </summary>
    /// <returns>The new page.</returns>
    intrusive_ptr<PdfPageBase> AppendPage ();

    /// <summary>
    /// Imports a page.
    /// </summary>
    /// <param name="ldDoc">The loaded document.</param>
    /// <param name="page">The page.</param>
    /// <returns>The page in the result document.</returns>
    intrusive_ptr<PdfPageBase> InsertPage (intrusive_ptr<PdfDocument> ldDoc,intrusive_ptr<PdfPageBase> page);
    
    /// <summary>
    /// Imports a page.
    /// </summary>
    /// <param name="ldDoc">The loaded document.</param>
    /// <param name="pageIndex">Index of the page.</param>
    /// <returns>The page in the result document.</returns>
    intrusive_ptr<PdfPageBase> InsertPage (intrusive_ptr<PdfDocument> ldDoc,int pageIndex);

    /// <summary>
    /// Imports a page.
    /// </summary>
    /// <param name="ldDoc">The loaded document.</param>
    /// <param name="pageIndex">Index of the page.</param>
    /// <param name="resultPageIndex">The page index in the result document.</param>
    /// <returns>The page in the result document.</returns>
    intrusive_ptr<PdfPageBase> InsertPage (intrusive_ptr<PdfDocument> ldDoc,int pageIndex,int resultPageIndex);
    
    /// <summary>
    /// Imports a page range from a loaded document.
    /// </summary>
    /// <param name="ldDoc">The loaded document.</param>
    /// <param name="startIndex">The start page index.</param>
    /// <param name="endIndex">The end page index.</param>
    /// <returns>The last created page in the result document.</returns>
    intrusive_ptr<PdfPageBase> InsertPageRange (intrusive_ptr<PdfDocument> ldDoc,int startIndex,int endIndex);
   
    /// <summary>
    /// Merges the specified source documents and return destination document.
    /// ***It is recommended to use method "MergeFiles(string[] inputFiles, string outputFile)" or "MergeFiles(stream[] inputFiles, stream[] outputFile)",
    /// which automatically release srcFiles and mergeFils resources after merging.***
    /// </summary>
    /// <param name="dest">The destination document, where the other documents are merged into.
    /// If it's null a new document object will be created.</param>
    /// <param name="sourceDocuments">The source documents.</param>
    /// <returns>The document containing merged documents.</returns>
    static intrusive_ptr<PdfDocumentBase> Merge (intrusive_ptr<PdfDocumentBase> dest,std::vector<intrusive_ptr<Object>> sourceDocuments);

    /// <summary>
    /// Merges the PDF documents specified by the paths.
    /// ***It is recommended to use method "MergeFiles(string[] inputFiles, string outputFile)" or "MergeFiles(stream[] inputFiles, stream[] outputFile)",
    /// which automatically release srcFiles and mergeFils resources after merging.***
    /// </summary>
    /// <param name="paths">The array of string paths.</param>
    /// <returns>A new PDF document containing all merged documents.</returns>
    static intrusive_ptr<PdfDocumentBase> MergeFiles (std::vector<LPCWSTR_S> inputFiles);
    
    /// <summary>
    /// Merges the PDF documents specified by the Stream.
    /// ***It is recommended to use method "MergeFiles(string[] inputFiles, string outputFile)" or "MergeFiles(stream[] inputFiles, stream[] outputFile)",
    /// which automatically release srcFiles and mergeFils resources after merging.***
    /// </summary>
    /// <param name="streams"></param>
    /// <returns></returns>
    static intrusive_ptr<PdfDocumentBase> MergeFiles (std::vector< intrusive_ptr<Stream>> streams);
    //static intrusive_ptr<PdfDocumentBase> MergeFiles (LPCWSTR_S firstInputFile,LPCWSTR_S secInputFile);
    
    /// <summary>
    /// Merge the PDF documents.
    /// </summary>
    /// <param name="inputFiles">The input PDF documents.</param>
    /// <param name="outputFile">The output PDF document.</param>
    static void MergeFiles (std::vector<LPCWSTR_S> inputFiles,LPCWSTR_S outputFile);
   
    /// <summary>
    /// Merge the PDF documents.
    /// </summary>
    /// <param name="inputFiles">The input PDF documents.</param>
    /// <param name="outputFile">The output PDF document.</param>
    static void MergeFiles (std::vector< intrusive_ptr<Stream>> inputFiles, intrusive_ptr<Stream> outputFile);
    
    /// <summary>
    /// Splits a PDF file to many PDF files, each of them consists of one page from the source file.
    /// </summary>
    /// <param name="destFilePattern">Template for destination file names.</param>
    /// <remarks>
    /// Each destination file will have 'destFileName{0***}' name,
    /// where *** is an optional format string for the number of the
    /// page inside of the source document.
    /// </remarks>
    void Split (LPCWSTR_S destFilePattern);

    /// <summary>
    /// Splits a PDF file to many PDF files, each of them consists of
    /// one page from the source file.
    /// </summary>
    /// <param name="destFilePattern">Template for destination file
    /// names.</param>
    /// <param name="startNumber">The number that is use as a start
    /// point for the page numbering.</param>
    /// <remarks>
    /// Each destination file will have 'destFileName{0***}' name,
    /// where *** is an optional format string for the number of the
    /// page inside of the source document.
    /// </remarks>
    void Split (LPCWSTR_S destFilePattern,int startNumber);
    
    /// <summary>
    /// remove document's javaScript
    /// </summary>
    /// <returns>if True remove succesfully,else remove the failure or document doesn't have JavaScript</returns>
    bool RemoveDocumentJavaScript ();
    //void Preview (System.Windows.Forms.PrintPreviewControl printPreviewControl);
    //void Print (intrusive_ptr<PdfPrintSettings> printSettings);
    //intrusive_ptr<PdfPrintSettings> GetPrintSettings ();
    //void Print ();
private:
    intrusive_ptr<PdfAction> CreateAction(IntPtrWithTypeName intPtrWithTypeName, Object* pParent);
//public:
//        public:
//            virtual void add_ref() { ++ref_count; }
//            virtual int release_ref() { return --ref_count; }
};
}}