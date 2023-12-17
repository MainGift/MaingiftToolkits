#pragma once
#include "pch.h"
#include "PdfBarcodeQuietZones.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a base class for all barcode types.
    </summary>
*/
class EXPORTS PdfBarcode : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the back color of the barcode.
    </summary>
    */
    intrusive_ptr<PdfRGBColor> GetBackColor ();
    /*

    */
    void SetBackColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets or sets the bar color of the barcode.
    </summary>
    */
    intrusive_ptr<PdfRGBColor> GetBarColor ();
    /*

    */
    void SetBarColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets or sets the text color of the barcode text.
    </summary>
    */
    intrusive_ptr<PdfRGBColor> GetTextColor ();
    /*

    */
    void SetTextColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets or sets the narrow bar width.
    </summary>
    */
    float GetNarrowBarWidth ();
    /*

    */
    void SetNarrowBarWidth (float value);
    /*
    <summary>
        Gets or Sets the barcode text.
    </summary>
    */
    LPCWSTR_S GetText ();
    /*

    */
    void SetText (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the location to render barcode in the PDF Document.
    </summary>
    */
    intrusive_ptr<PointF> GetLocation ();
    /*

    */
    void SetLocation (intrusive_ptr<PointF> value);
    /*
    <summary>
        Gets or sets the empty area which is to be allocated around the barcode.
    </summary>
    */
    intrusive_ptr<PdfBarcodeQuietZones> GetQuietZone ();
    /*

    */
    void SetQuietZone (intrusive_ptr<PdfBarcodeQuietZones> value);
    /*
    <summary>
        Gets or sets the bar height.
    </summary>
    */
    float GetBarHeight ();
    /*

    */
    void SetBarHeight (float value);
    /*
    <summary>
        Gets the size of the barcode.
    </summary>
    */
    intrusive_ptr<SizeF> GetSize ();
    /*
    <summary>
        Gets or sets the rectangular area occupied by the barcode.
    </summary>
    */
    intrusive_ptr<RectangleF> GetBounds ();
    /*

    */
    void SetBounds (intrusive_ptr<RectangleF> value);
private:
};
}}