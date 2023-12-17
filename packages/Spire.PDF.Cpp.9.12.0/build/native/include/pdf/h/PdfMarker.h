#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfMarkerBase.h"
#include "PdfFontBase.h"
#include "PdfImage.h"
#include "PdfTemplate.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents bullet for the list.
    </summary>
*/
class EXPORTS PdfMarker : public virtual PdfMarkerBase
{
public:
    PdfMarker();

    PdfMarker(LPCWSTR_S text, intrusive_ptr<PdfFontBase> font);

    PdfMarker(PdfUnorderedMarkerStyle style);

    PdfMarker(intrusive_ptr<PdfImage> image);

    PdfMarker(intrusive_ptr<PdfTemplate> pdftemplate);
    /*
    <summary>
        Gets or sets template of the marker.
    </summary>
    */
    intrusive_ptr<PdfTemplate> GetTemplate ();
    /*

    */
    void SetTemplate (intrusive_ptr<PdfTemplate> value);
    /*
    <summary>
        Gets or sets image of the marker.
    </summary>
    */
    intrusive_ptr<PdfImage> GetImage ();
    /*

    */
    void SetImage (intrusive_ptr<PdfImage> value);
    /*
    <summary>
        Gets or sets marker text.
    </summary>
    */
    LPCWSTR_S GetText ();
    /*

    */
    void SetText (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the style.
    </summary>
    */
    PdfUnorderedMarkerStyle GetStyle ();
    /*

    */
    void SetStyle (PdfUnorderedMarkerStyle value);
private:
};
}}