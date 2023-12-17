#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Encapsulates a page template for all the pages in the document.
    </summary>
*/
class EXPORTS PdfDocumentTemplate : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets a left page template.
    </summary>
    */
    intrusive_ptr<PdfPageTemplateElement> GetLeft ();
    /*

    */
    void SetLeft (intrusive_ptr<PdfPageTemplateElement> value);
    /*
    <summary>
        Gets or sets a top page template.
    </summary>
    */
    intrusive_ptr<PdfPageTemplateElement> GetTop ();
    /*

    */
    void SetTop (intrusive_ptr<PdfPageTemplateElement> value);
    /*
    <summary>
        Gets or sets a right page template.
    </summary>
    */
    intrusive_ptr<PdfPageTemplateElement> GetRight ();
    /*

    */
    void SetRight (intrusive_ptr<PdfPageTemplateElement> value);
    /*
    <summary>
        Gets or sets a bottom page template.
    </summary>
    */
    intrusive_ptr<PdfPageTemplateElement> GetBottom ();
    /*

    */
    void SetBottom (intrusive_ptr<PdfPageTemplateElement> value);
    /*
    <summary>
        Gets or sets a left page template using on the even pages.
    </summary>
    */
    intrusive_ptr<PdfPageTemplateElement> GetEvenLeft ();
    /*

    */
    void SetEvenLeft (intrusive_ptr<PdfPageTemplateElement> value);
    /*
    <summary>
        Gets or sets a top page template using on the even pages.
    </summary>
    */
    intrusive_ptr<PdfPageTemplateElement> GetEvenTop ();
    /*

    */
    void SetEvenTop (intrusive_ptr<PdfPageTemplateElement> value);
    /*
    <summary>
        Gets or sets a right page template using on the even pages.
    </summary>
    */
    intrusive_ptr<PdfPageTemplateElement> GetEvenRight ();
    /*

    */
    void SetEvenRight (intrusive_ptr<PdfPageTemplateElement> value);
    /*
    <summary>
        Gets or sets a bottom page template using on the even pages.
    </summary>
    */
    intrusive_ptr<PdfPageTemplateElement> GetEvenBottom ();
    /*

    */
    void SetEvenBottom (intrusive_ptr<PdfPageTemplateElement> value);
    /*
    <summary>
        Gets or sets a left page template using on the odd pages.
    </summary>
    */
    intrusive_ptr<PdfPageTemplateElement> GetOddLeft ();
    /*

    */
    void SetOddLeft (intrusive_ptr<PdfPageTemplateElement> value);
    /*
    <summary>
        Gets or sets a top page template using on the odd pages.
    </summary>
    */
    intrusive_ptr<PdfPageTemplateElement> GetOddTop ();
    /*

    */
    void SetOddTop (intrusive_ptr<PdfPageTemplateElement> value);
    /*
    <summary>
        Gets or sets a right page template using on the odd pages.
    </summary>
    */
    intrusive_ptr<PdfPageTemplateElement> GetOddRight ();
    /*

    */
    void SetOddRight (intrusive_ptr<PdfPageTemplateElement> value);
    /*
    <summary>
        Gets or sets a bottom page template using on the odd pages.
    </summary>
    */
    intrusive_ptr<PdfPageTemplateElement> GetOddBottom ();
    /*

    */
    void SetOddBottom (intrusive_ptr<PdfPageTemplateElement> value);
    /*
    <summary>
        Gets a collection of stamp elements.
    </summary>
    */
    intrusive_ptr<PdfStampCollection> GetStamps ();
private:
};
}}