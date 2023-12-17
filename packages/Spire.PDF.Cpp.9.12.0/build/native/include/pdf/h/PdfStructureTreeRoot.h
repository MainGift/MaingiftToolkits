#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        PDF’s logical structure facilities provide a mechanism for incorporating
            structural information about a document’s content into a PDF file. Such
            information might include, for example, the organization of the document into
            chapters and sections or the identification of special elements such as figures,
            tables, and footnotes. The logical structure facilities are extensible, allowing
            applications that produce PDF files to choose what structural information to
            include and how to represent it, while enabling PDF consumers to navigate a file
            without knowing the producer’s structural conventions.
    </summary>
*/
class EXPORTS PdfStructureTreeRoot : public virtual Object
{
public:
    /*
    <summary>
        Append structure type element.
    </summary>
    <param name="structureType">The structure type.</param>
    <returns>The pdf structure type element.</returns>
    */
    intrusive_ptr<PdfStructureElement> AppendChildElement (LPCWSTR_S structureType);
    /*
    <summary>
        Get the children structure elements.
    </summary>
    <returns>The pdf structure type element list.</returns>
    */
    //System.Collections.Generic.List`1[[Spire.Pdf.Interchange.TaggedPdf.PdfStructureElement, Spire.Pdf, Version=8.10.5.0, Culture=neutral, PublicKeyToken=null]] GetChildElements ();
private:
};
}}