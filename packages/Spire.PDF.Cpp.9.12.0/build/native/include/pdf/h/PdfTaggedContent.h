#pragma once
#include "pch.h"
#include "PdfDocument.h"
#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the content of tagged pdf.
    </summary>
*/
class EXPORTS PdfTaggedContent : public virtual Object
{
public:
    PdfTaggedContent(intrusive_ptr<PdfDocument> document);
    /*
    <summary>
        Pdf logical structure tree root.
    </summary>
    */
    intrusive_ptr<PdfStructureTreeRoot> GetStructureTreeRoot ();
    /*
    <summary>
        Set the natural language for all text in the document.
            A Language-Tag as defined in RFC 3066, Tags for the Identification of Languages.
    </summary>
    <param name="language"></param>
    */
    void SetLanguage (LPCWSTR_S language);
    /*
    <summary>
        Set the document's title.
    </summary>
    <param name="title"></param>
    */
    void SetTitle (LPCWSTR_S title);
    /*
    <summary>
        Set pdf/UA identification.
    </summary>
    */
    void SetPdfUA1Identification ();
private:
};
}}