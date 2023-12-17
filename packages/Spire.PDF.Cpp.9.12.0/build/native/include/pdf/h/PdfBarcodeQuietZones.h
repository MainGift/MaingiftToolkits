#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the Class for specifying Quiet zones around the barcode.
    </summary>
*/
class EXPORTS PdfBarcodeQuietZones : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the quiet zones at the right side of the barcode.
    </summary>
    */
    float GetRight ();
    /*

    */
    void SetRight (float value);
    /*
    <summary>
         Gets or sets the quiet zones at Top of the barcode.
    </summary>
    */
    float GetTop ();
    /*

    */
    void SetTop (float value);
    /*
    <summary>
         Gets or sets the quiet zones at the left side of the barcode.
    </summary>
    */
    float GetLeft ();
    /*

    */
    void SetLeft (float value);
    /*
    <summary>
         Gets or sets the quiet zones at bottom of the barcode.
    </summary>
    */
    float GetBottom ();
    /*

    */
    void SetBottom (float value);
    /*
    <summary>
         Gets or sets the quiet zones around the bar code.
    </summary>
    */
    float GetAll ();
    /*

    */
    void SetAll (float value);
    /*
    <summary>
        Check whether all the margin values are equal.
    </summary>
    */
    bool GetIsAll ();
private:
};
}}