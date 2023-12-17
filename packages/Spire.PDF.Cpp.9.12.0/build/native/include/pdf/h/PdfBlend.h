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
        Implements blend brush setting and functions.
    </summary>
*/
class EXPORTS PdfBlend : public virtual PdfBlendBase
{
public:
    /*
    <summary>
        Gets or sets the factors array.
    </summary>
    */
    std::vector<int> GetFactors ();
    /*

    */
    void SetFactors (std::vector<float> value);
private:
};
}}