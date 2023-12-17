#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfConformanceLevel.h"
#include "PdfColorSpace.h"
//#include "../../common/h/Stream.h"
#include "PdfForm.h"
#include "PdfBookmarkCollection.h"
#include "PdfAttachmentCollection.h"
#include "ProgressEventHandler.h"
#include "PdfDocumentBase.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a logic to create Pdf document.
    </summary>
*/
class EXPORTS PdfNewDocument : public virtual PdfDocumentBase
{
public:
    PdfNewDocument();

    //PdfNewDocument(PdfConformanceLevel conformance);
    /*

    */
    void add_SaveProgress (intrusive_ptr<ProgressEventHandler> value);
    /*

    */
    void remove_SaveProgress (intrusive_ptr<ProgressEventHandler> value);
    /*
    <summary>
        Gets the root of the bookmark tree in the document.
    </summary>
<value>A  object specifying the document's bookmarks. </value>
<remarks>Creates an bookmark root instance
            if it's called for first time.</remarks>
    */
    virtual intrusive_ptr<PdfBookmarkCollection> GetBookmarks ();
    /*
    <summary>
        Gets the attachments of the document.
    </summary>
<value>The  object contains list of files which are attached in the PDF document.</value>
    */
    virtual intrusive_ptr<PdfAttachmentCollection> GetAttachments ();
    /*
    <summary>
        Gets the interactive form of the document.
    </summary>
<value>The  object contains the list of form elements of the document.</value>
    */
    virtual intrusive_ptr<PdfForm> GetForm ();
    /*
    <summary>
        Gets or sets the color space of the document.
    </summary>
<remarks>This property has impact on the new created pages only.
            If a page was created it remains its colour space obliviously
            to this property changes.</remarks>
<value>The  of the document.</value>
    */
    virtual PdfColorSpace GetColorSpace ();
    /*

    */
    virtual void SetColorSpace (PdfColorSpace value);
    /*
    <summary>
        Gets or Sets the Pdf Conformance level.
            Supported : PDF/A-1b - Level B compliance in Part 1
    </summary>
    */
    virtual PdfConformanceLevel GetConformance ();
    /*

    */
    //virtual void SetConformance (PdfConformanceLevel value);
    /*
    <summary>
        Saves the document to the specified stream.
    </summary>
    <param name="stream">The stream object where PDF document will be saved.</param>
    */
    virtual void Save (intrusive_ptr<Stream> stream);
    /*
    <summary>
        Closes the document.
    </summary>
    <param name="completely">if set to <c>true</c> the document should be disposed completely.</param>
<remarks>The document is disposed after calling the Close method. So, the document can not be saved if Close method was invoked.</remarks>
    */
    virtual void Close (bool completely);
    /*
    <summary>
        Creates a new object that is a copy of the current instance.
    </summary>
<value>A new object that is a copy of this instance.</value>
<remarks>The resulting clone must be of the same type as or a compatible type to the original instance.</remarks>
    */
    //virtual System.Object Clone ();
private:
};
}}