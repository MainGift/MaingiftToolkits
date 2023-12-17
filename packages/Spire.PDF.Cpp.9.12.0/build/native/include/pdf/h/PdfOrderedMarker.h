#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfMarkerBase.h"
#include "PdfFontBase.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents marker for ordered list.
    </summary>
*/
class EXPORTS PdfOrderedMarker : public virtual PdfMarkerBase
{
public:
    PdfOrderedMarker();
    PdfOrderedMarker(PdfNumberStyle style, LPCWSTR_S delimiter, LPCWSTR_S suffix, intrusive_ptr<PdfFontBase> font);

    PdfOrderedMarker(PdfNumberStyle style, LPCWSTR_S suffix, intrusive_ptr<PdfFontBase> font);

    PdfOrderedMarker(PdfNumberStyle style, intrusive_ptr<PdfFontBase> font);

    /*
    <summary>
        Gets or sets the list numbering style.
    </summary>
    */
    PdfNumberStyle GetStyle ();
    /*

    */
    void SetStyle (PdfNumberStyle value);
    /*
    <summary>
        Gets ar sets start number for ordered list. Default value is 1.
    </summary>
    */
    int GetStartNumber ();
    /*

    */
    void SetStartNumber (int value);
    /*
    <summary>
        Gets or sets the delimiter.
    </summary>
    */
    LPCWSTR_S GetDelimiter ();
    /*

    */
    void SetDelimiter (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the suffix of the marker.
    </summary>
    */
    LPCWSTR_S GetSuffix ();
    /*

    */
    void SetSuffix (LPCWSTR_S value);
private:
};
}}