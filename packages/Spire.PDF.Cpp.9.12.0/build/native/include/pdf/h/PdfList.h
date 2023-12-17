#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfListBase.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents unordered list.
    </summary>
*/
class EXPORTS PdfList : public virtual PdfListBase
{
public:
    PdfList();

    PdfList(intrusive_ptr<PdfListItemCollection> items);

    PdfList(intrusive_ptr<PdfFontBase> font);

    PdfList(intrusive_ptr<PdfMarker> marker);

    PdfList(intrusive_ptr<PdfListItemCollection> items, intrusive_ptr<PdfMarker> marker);

    PdfList(LPCWSTR_S text);

    PdfList(LPCWSTR_S text, intrusive_ptr<PdfMarker> marker);
    /*
    <summary>
        Gets or sets the marker.
    </summary>
    */
    intrusive_ptr<PdfMarker> GetMarker ();
    /*

    */
    void SetMarker (intrusive_ptr<PdfMarker> value);
private:
};
}}