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
        Represents an indexed color, based on an indexed colorspace. 
    </summary>
*/
class EXPORTS PdfKnownColor : public virtual PdfComplexColor
{
public:
    /*
    <summary>
        Gets or sets the color index
    </summary>
<value>The index of the select color.</value>
<remarks>The acceptable range for this value is 0 - MaxColorIndex.</remarks>
    */
    int GetSelectColorIndex ();
    /*

    */
    void SetSelectColorIndex (int value);
private:
};
}}