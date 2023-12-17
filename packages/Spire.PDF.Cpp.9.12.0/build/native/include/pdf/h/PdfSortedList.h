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
        Represents the ordered list.
    </summary>
*/
class EXPORTS PdfSortedList : public virtual PdfListBase
{
public:
    PdfSortedList();

    PdfSortedList(intrusive_ptr<PdfFontBase> font);

    PdfSortedList(PdfNumberStyle style);

    PdfSortedList(intrusive_ptr<PdfListItemCollection> items);

    PdfSortedList(intrusive_ptr<PdfOrderedMarker> marker);

    PdfSortedList(intrusive_ptr<PdfListItemCollection> items, intrusive_ptr<PdfOrderedMarker> marker);

    PdfSortedList(LPCWSTR_S text);

    PdfSortedList(LPCWSTR_S text, intrusive_ptr<PdfOrderedMarker> marker);
    /*
    <summary>
        Gets or sets marker of the list items.
    </summary>
    */
    intrusive_ptr<PdfOrderedMarker> GetMarker ();
    /*

    */
    void SetMarker (intrusive_ptr<PdfOrderedMarker> value);
    /*
    <summary>
        True if user want to use numbering hierarchy, otherwise false.
    </summary>
    */
    bool GetMarkerHierarchy ();
    /*

    */
    void SetMarkerHierarchy (bool value);
private:
};
}}