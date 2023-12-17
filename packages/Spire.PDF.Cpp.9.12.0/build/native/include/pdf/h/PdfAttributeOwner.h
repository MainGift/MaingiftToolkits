#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        The attribute owners.
    </summary>
*/
class EXPORTS PdfAttributeOwner : public virtual Object
{
public:
    /*
    <summary>
        The name of the application or plug-in extension owning the attribute data.
    </summary>
    */
    LPCWSTR_S GetName ();
    /*
    <summary>
        Attributes governing the layout of content.
    </summary>
    */
    static intrusive_ptr<PdfAttributeOwner> Layout ();
    /*
    <summary>
        Attributes governing the numbering of lists.
    </summary>
    */
    static intrusive_ptr<PdfAttributeOwner> List ();
    /*
    <summary>
        Attributes governing Form structure elements for non-interactive form fields.
    </summary>
    */
    static intrusive_ptr<PdfAttributeOwner> PrintField ();
    /*
    <summary>
        Attributes governing the organization of cells in tables.
    </summary>
    */
    static intrusive_ptr<PdfAttributeOwner> Table ();
    /*
    <summary>
        Additional attributes governing translation to XML, version 1.00
    </summary>
    */
    static intrusive_ptr<PdfAttributeOwner> Xml_100 ();
    /*
    <summary>
        Additional attributes governing translation to HTML, version 3.20
    </summary>
    */
    static intrusive_ptr<PdfAttributeOwner> Html_320 ();
    /*
    <summary>
        Additional attributes governing translation to HTML, version 4.01
    </summary>
    */
    static intrusive_ptr<PdfAttributeOwner> Html_401 ();
    /*
    <summary>
        Additional attributes governing translation to OEB, version 1.0
    </summary>
    */
    static intrusive_ptr<PdfAttributeOwner> Oeb_100 ();
    /*
    <summary>
        Additional attributes governing translation to Microsoft Rich Text Format, version 1.05
    </summary>
    */
    static intrusive_ptr<PdfAttributeOwner> Rtf_105 ();
    /*
    <summary>
        Additional attributes governing translation to a format using CSS, version 1.00
    </summary>
    */
    static intrusive_ptr<PdfAttributeOwner> Css_100 ();
    /*
    <summary>
        Additional attributes governing translation to a format using CSS, version 2.00
    </summary>
    */
    static intrusive_ptr<PdfAttributeOwner> Css_200 ();
private:
};
}}