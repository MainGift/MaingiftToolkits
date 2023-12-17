#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfBlendBase.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the arrays of colors and positions used for
            interpolating color blending in a multicolor gradient.
    </summary>
*/
class EXPORTS PdfColorBlend : public virtual PdfBlendBase
{
public:
    /*
    <summary>
        Gets or sets the colours array.
    </summary>
    */
    std::vector<intrusive_ptr<PdfRGBColor>> GetColors ();
    /*

    */
    void SetColors (std::vector<intrusive_ptr<PdfRGBColor>> value);
private:
};
}}