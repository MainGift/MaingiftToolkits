#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the base class for PdfBlend and PdfColorBlend classes.
            Implements basic routines needed by both classes.
    </summary>
*/
class EXPORTS PdfBlendBase : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the positions array.
    </summary>
    */
    std::vector<int> GetPositions ();
    /*

    */
    void SetPositions (std::vector<float> value);
private:
};
}}