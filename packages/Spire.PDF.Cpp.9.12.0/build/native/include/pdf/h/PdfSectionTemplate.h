#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfDocumentTemplate.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Encapsulates a page template for all the pages in the section.
    </summary>
*/
class EXPORTS PdfSectionTemplate : public virtual PdfDocumentTemplate
{
public:
    /*
    <summary>
        Gets or sets value indicating whether parent Left page template should be used or not.
    </summary>
    */
    bool GetApplyDocumentLeftTemplate ();
    /*

    */
    void SetApplyDocumentLeftTemplate (bool value);
    /*
    <summary>
        Gets or sets value indicating whether parent Top page template should be used or not.
    </summary>
    */
    bool GetApplyDocumentTopTemplate ();
    /*

    */
    void SetApplyDocumentTopTemplate (bool value);
    /*
    <summary>
        Gets or sets value indicating whether parent Right page template should be used or not.
    </summary>
    */
    bool GetApplyDocumentRightTemplate ();
    /*

    */
    void SetApplyDocumentRightTemplate (bool value);
    /*
    <summary>
        Gets or sets value indicating whether parent Bottom page template should be used or not.
    </summary>
    */
    bool GetApplyDocumentBottomTemplate ();
    /*

    */
    void SetApplyDocumentBottomTemplate (bool value);
    /*
    <summary>
        Gets or sets value indicating whether 
            the parent stamp elements should be used or not.
    </summary>
    */
    bool GetApplyDocumentStamps ();
    /*

    */
    void SetApplyDocumentStamps (bool value);
private:
};
}}