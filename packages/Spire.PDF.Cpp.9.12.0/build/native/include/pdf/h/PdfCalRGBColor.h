#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfComplexColor.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a calibrated RGB color, based on a CalRGB colorspace. 
    </summary>
*/
class EXPORTS PdfCalRGBColor : public virtual PdfComplexColor
{
public:
    /*
    <summary>
        Gets or sets the Blue value.
    </summary>
<value>The blue level of this color.</value>
<remarks>The acceptable range for this value is [0.0 1.0]. 0.0 means the darkest color that can be achieved, and 1.0 means the lightest. </remarks>
    */
    double GetBlue ();
    /*

    */
    void SetBlue (double value);
    /*
    <summary>
        Gets or sets the green level for this color. 
    </summary>
<value>The green level of this color. </value>
<remarks>The acceptable range for this value is [0.0 1.0]. 0.0 means the darkest color that can be achieved, and 1.0 means the lightest color. </remarks>
    */
    double GetGreen ();
    /*

    */
    void SetGreen (double value);
    /*
    <summary>
        Gets or sets the red level for this color.
    </summary>
<value>The red level of this color.</value>
<remarks>The acceptable range for this value is [0.0 1.0]. 0.0 means the darkest color that can be achieved, and 1.0 means the lightest color. </remarks>
    */
    double GetRed ();
    /*

    */
    void SetRed (double value);
private:
};
}}