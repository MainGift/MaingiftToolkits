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
        Represents a calibrated gray color, based on a CalGray colorspace. 
    </summary>
*/
class EXPORTS PdfCalGrayColor : public virtual PdfComplexColor
{
public:
    /*
    <summary>
        Gets or sets the gray level for this color. 
    </summary>
<value>The gray level of this color.</value>
<remarks>The acceptable range for this value is [0.0 1.0]. 
            0.0 means the darkest color that can be achieved, and 1.0 means the lightest color. </remarks>
    */
    double GetGray ();
    /*

    */
    void SetGray (double value);
private:
};
}}