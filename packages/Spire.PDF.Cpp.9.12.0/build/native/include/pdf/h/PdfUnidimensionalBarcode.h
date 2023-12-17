#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfBarcode.h"
#include "PdfFontBase.h"
#include "TextLocation.h"
#include "PdfBarcodeTextAlignment.h"
#include "PdfPageBase.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the Base class for all the Single dimensional barcodes
    </summary>
*/
class EXPORTS PdfUnidimensionalBarcode : public virtual PdfBarcode
{
public:
    /*
    <summary>
        Gets or sets the Text font.
    </summary>
    */
    intrusive_ptr<PdfFontBase> GetFont ();
    /*

    */
    void SetFont (intrusive_ptr<PdfFontBase> value);
    /*
    <summary>
        Gets or sets the text display location. 
    </summary>
    */
    TextLocation GetTextDisplayLocation ();
    /*

    */
    void SetTextDisplayLocation (TextLocation value);
    /*
<summary></summary>
<remarks>The Default value is false.</remarks>
    */
    bool GetShowCheckDigit ();
    /*

    */
    void SetShowCheckDigit (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether to enable to check digit calculation in the generated barcode or not.
    </summary>
<remarks>The Default value is True.</remarks>
    */
    bool GetEnableCheckDigit ();
    /*

    */
    void SetEnableCheckDigit (bool value);
    /*
    <summary>
        Gets or sets the gap between the barcode and the displayed text.
    </summary>
    */
    float GetBarcodeToTextGapHeight ();
    /*

    */
    void SetBarcodeToTextGapHeight (float value);
    /*
    <summary>
        Gets or sets the alignment of the text displayed on the barcode.
    </summary>
<remarks>Default value is Center.</remarks>
    */
    PdfBarcodeTextAlignment GetTextAlignment ();
    /*

    */
    void SetTextAlignment (PdfBarcodeTextAlignment value);
    /*
    <summary>
        Gets or sets a value indicating whether [encode start stop symbols].
    </summary>
<value>
  <c>true</c> if [encode start stop symbols]; otherwise, <c>false</c>.
            </value>
    */
    bool GetEncodeStartStopSymbols ();
    /*

    */
    void SetEncodeStartStopSymbols (bool value);
    /*
    <summary>
        Draws the barcode on the  at the specified region.
    </summary>
    <param name="page">The pdf page.</param>
    <param name="rect">The barcode region.</param>
    */
    virtual void Draw (intrusive_ptr<PdfPageBase> page,intrusive_ptr<RectangleF> rect);
    /*
    <summary>
        Draws the barcode on the  at the specified location.
    </summary>
    <param name="page">The pdf page.</param>
    <param name="location">The barcode location.</param>
    */
    virtual void Draw (intrusive_ptr<PdfPageBase> page,intrusive_ptr<PointF> location);
    /*
    <summary>
        Exports the barcode as image.
                <returns>The barcode image.</returns></summary>
    */
    intrusive_ptr<Image> ToImage ();
private:
};
}}