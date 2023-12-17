#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the result of html to pdf conversion.
    </summary>
*/
class EXPORTS HtmlToPdfResult : public virtual Object
{
public:
    /*
    <summary>
        Gets the rendered image.
    </summary>
<value>The rendered image.</value>
    */
    intrusive_ptr<Image> GetRenderedImage ();
    /*
    <summary>
        Draws the HtmlToPdfResults on to the document.
    </summary>
    <param name="page">The Pdf Page.</param>
    <param name="format">The Metafile layout format.</param>
    */
    intrusive_ptr<PdfLayoutResult> Render (intrusive_ptr<PdfPageBase> page,intrusive_ptr<PdfTextLayout> format);
private:
};
}}