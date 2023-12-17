#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfTextWidget.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the class for text web link annotation.
    </summary>
*/
class EXPORTS PdfTextWebLink : public virtual PdfTextWidget
{
public:
    PdfTextWebLink();
    /*
    <summary>
        Gets or sets the Url address.
    </summary>
    */
    LPCWSTR_S GetUrl ();
    /*

    */
    void SetUrl (LPCWSTR_S value);
    /*
    <summary>
        Draws a Text Web Link on the Page
    </summary>
    <param name="page">The page where the annotation should be placed.</param>
    <param name="location">The location of the annotation.</param>
    <returns>Pdf Layout result</returns>
    */
    intrusive_ptr<PdfLayoutResult> DrawTextWebLink (intrusive_ptr<PdfNewPage> page,intrusive_ptr<PointF> location);
    /*
    <summary>
        Draw a Text Web Link on the Graphics
    </summary>
    <param name="graphics">The  object specifies where annotation should be placed..</param>
    <param name="location">The location of the annotation.</param>
    */
    void DrawTextWebLink (intrusive_ptr<PdfCanvas> graphics,intrusive_ptr<PointF> location);
private:
};
}}