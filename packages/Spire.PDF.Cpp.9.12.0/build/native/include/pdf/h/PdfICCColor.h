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
        Represents an ICC color, based on an ICC colorspace.
    </summary>
*/
class EXPORTS PdfICCColor : public virtual PdfComplexColor
{
public:
    /*
    <summary>
        Gets or sets the color components. 
    </summary>
<value>An array of values that describe the color in the ICC colorspace. </value>
<remarks>The length of this array must match the value of ColorComponents property on the underlying ICC colorspace. </remarks>
    */
    std::vector<double> GetColorComponents ();
    /*

    */
    void SetColorComponents (std::vector<double> value);
private:
};
}}