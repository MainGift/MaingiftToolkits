#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfMultipleValueField.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents automatic field which has the same value within the 
    </summary>
*/
class EXPORTS PdfMultipleNumberValueField : public virtual PdfMultipleValueField
{
public:
    /*
    <summary>
        Gets or sets the number style.
    </summary>
<value>The number style.</value>
    */
    PdfNumberStyle GetNumberStyle ();
    /*

    */
    void SetNumberStyle (PdfNumberStyle value);
private:
};
}}