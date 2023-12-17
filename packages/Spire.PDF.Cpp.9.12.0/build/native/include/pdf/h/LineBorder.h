#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the border style of the Line annotation.
    </summary>
*/
class EXPORTS LineBorder : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the width.
    </summary>
<value>The line border width.</value>
    */
    int GetBorderWidth ();
    /*

    */
    void SetBorderWidth (int value);
    /*
    <summary>
        Gets or sets the border style.
    </summary>
<value>The line border style.</value>
    */
    PdfBorderStyle GetBorderStyle ();
    /*

    */
    void SetBorderStyle (PdfBorderStyle value);
    /*
    <summary>
        Gets or sets the Line Dash
    </summary>
<value>The line border dash array.</value>
    */
    int GetDashArray ();
    /*

    */
    void SetDashArray (int value);
private:
};
}}