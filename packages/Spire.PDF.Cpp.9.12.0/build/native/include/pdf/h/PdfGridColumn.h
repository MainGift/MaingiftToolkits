#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfGridColumn : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the width. The with is equal to the content 
            width plus margin plus half of the left and right borders.
    </summary>
<value>The width.</value>
    */
    float GetWidth ();
    /*

    */
    void SetWidth (float value);
    /*
    <summary>
        Gets or sets the format.
    </summary>
<value>The format.</value>
    */
    intrusive_ptr<PdfStringFormat> GetFormat ();
    /*

    */
    void SetFormat (intrusive_ptr<PdfStringFormat> value);
    /*
    <summary>
        Gets the grid.
    </summary>
<value>The grid.</value>
    */
    intrusive_ptr<PdfGrid> GetGrid ();
private:
};
}}