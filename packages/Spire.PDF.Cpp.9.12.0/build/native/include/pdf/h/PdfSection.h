#pragma once
#include "pch.h"
#include "PdfSectionPageCollection.h"
#include "PdfSectionTemplate.h"
#include "PageAddedEventHandler.h"
#include "PdfHtmlLayoutFormat.h"
#include "PdfLayoutHTMLResult.h"
#include "../h/PdfPageSettings.h"
#include "../h/PdfDocumentBase.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a section entity. A section it's a set of the pages with similar page settings.
    </summary>
*/
class EXPORTS PdfSection : public virtual Object
{
public:
    /*
    <summary>
        Gets the pages.
    </summary>
    */
    intrusive_ptr<PdfSectionPageCollection> GetPages ();
    /*
    <summary>
        Gets or sets page settings of the section.
    </summary>
    */
    intrusive_ptr<PdfPageSettings> GetPageSettings ();
    /*

    */
    void SetPageSettings (intrusive_ptr<PdfPageSettings> value);
    /*
    <summary>
        Gets or sets a template for the pages in the section.
    </summary>
    */
    intrusive_ptr<PdfSectionTemplate> GetTemplate ();
    /*

    */
    void SetTemplate (intrusive_ptr<PdfSectionTemplate> value);
    /*
    <summary>
        Gets the owner document.
    </summary>
<value>The document.</value>
    */
    intrusive_ptr<PdfDocumentBase> GetDocument ();
    /*

    */
    void add_PageAdded (intrusive_ptr<PageAddedEventHandler> value);
    /*

    */
    void remove_PageAdded (intrusive_ptr<PageAddedEventHandler> value);
    /*

    */
    //virtual System.Collections.IEnumerator GetEnumerator ();
    /*
    <summary>
        Draws HTML to PDF
    </summary>
    <param name="url">Url address</param>
    <param name="enableJavaScript">Enable javascrpit</param>
    <param name="enableHyperlinks">Enable hyperlink</param>
    <param name="layoutFormat">Layouts html view format</param>
    */
    intrusive_ptr<PdfLayoutHTMLResult> LoadFromHTML (LPCWSTR_S url,bool enableJavaScript,bool enableHyperlinks,intrusive_ptr<PdfHtmlLayoutFormat> layoutFormat);
private:
};
}}