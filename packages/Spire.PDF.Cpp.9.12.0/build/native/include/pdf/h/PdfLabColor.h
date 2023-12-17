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
        Represents a calibrated Lab color, based on a Lab colorspace. 
    </summary>
*/
class EXPORTS PdfLabColor : public virtual PdfComplexColor
{
public:
    /*
    <summary>
        Gets or sets the intrusive_ptr<a> component for this color. 
    </summary>
<value>The intrusive_ptr<a> component of this color.</value>
<remarks>The range for this value is defined by the Range property of the underlying Lab colorspace. </remarks>
    */
    double GetA ();
    /*

    */
    void SetA (double value);
    /*
    <summary>
        Gets or sets the intrusive_ptr<b> component for this color. 
    </summary>
<value>The intrusive_ptr<b> component of this color.</value>
<remarks>The range for this value is defined by the Range property of the underlying Lab colorspace. </remarks>
    */
    double GetB ();
    /*

    */
    void SetB (double value);
    /*
    <summary>
        Gets or sets the l component for this color. 
    </summary>
<value>The l component of this color. </value>
<remarks>The acceptable range for this value is [0.0 100.0]. 0.0 means the darkest color that can be achieved, and 100.0 means the lightest color. </remarks>
    */
    double GetL ();
    /*

    */
    void SetL (double value);
private:
};
}}