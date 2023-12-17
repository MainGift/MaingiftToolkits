#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfFileAnnotation.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents an attachment annotation.
    </summary>
*/
class EXPORTS PdfAttachmentAnnotation : public virtual PdfFileAnnotation
{
public:
    PdfAttachmentAnnotation();

    /// <summary>
    ///  Initializes a new instance of the  class.
    /// </summary>      
    /// <param name="rectangle">Bounds of the annotation.</param>
    /// <param name="fileName">A string value specifying the full path to the file to be embedded in the PDF file.</param>
    PdfAttachmentAnnotation(intrusive_ptr<RectangleF> rectangle, LPCWSTR_S fileName);

   // PdfAttachmentAnnotation(intrusive_ptr<RectangleF> rectangle, LPCWSTR_S fileName, std::vector<BYTE*> data);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>     
    /// <param name="rectangle">The rectangle.</param>
    /// <param name="fileName">A string value specifying the full path to the file to be embedded in the PDF file.</param>
    /// <param name="stream">The stream specifying the content of the annotation's embedded file. </param>
    /// <remarks>If both FileName and FileContent are specified, the FileContent takes precedence. </remarks>
    PdfAttachmentAnnotation(intrusive_ptr<RectangleF> rectangle, LPCWSTR_S fileName, intrusive_ptr<Stream> stream);
    /*
    <summary>
        Gets or Sets attachment's icon.
    </summary>
<value>A  enumeration member specifying the icon for the annotation when it is displayed in closed state.</value>
    */
    PdfAttachmentIcon GetIcon ();
    /*

    */
    void SetIcon (PdfAttachmentIcon value);
    /*
<value>A string value specifying the full path to the file to be embedded in the PDF file.</value>
    */
    virtual LPCWSTR_S GetFileName ();
    /*

    */
    virtual void SetFileName (LPCWSTR_S value);
private:
};
}}