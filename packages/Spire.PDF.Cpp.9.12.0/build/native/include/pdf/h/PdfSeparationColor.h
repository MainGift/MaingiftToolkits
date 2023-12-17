#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfColorSpaces.h"
#include "PdfComplexColor.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a separation color, based on a separation colorspace. 
    </summary>
*/
class EXPORTS PdfSeparationColor : public virtual PdfComplexColor
{
public:
    PdfSeparationColor();
    PdfSeparationColor(intrusive_ptr<PdfColorSpaces> colorspace, float tint);
    /*
    <summary>
        The acceptable range for this value is [0.0 1.0]. 0.0 means the lightest color that can be achieved, and 1.0 means the darkest color.
    </summary>
    */
    float GetTint ();
    /*

    */
    void SetTint (float value);
private:
};
}}