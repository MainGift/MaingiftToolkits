#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfPaddings : public virtual Object
{
public:
    PdfPaddings();

    PdfPaddings(float left, float right, float top, float bottom);
    /*
    <summary>
        Gets or sets the left.
    </summary>
<value>The left.</value>
    */
    float GetLeft ();
    /*

    */
    void SetLeft (float value);
    /*
    <summary>
        Gets or sets the right.
    </summary>
<value>The right.</value>
    */
    float GetRight ();
    /*

    */
    void SetRight (float value);
    /*
    <summary>
        Gets or sets the top.
    </summary>
<value>The top.</value>
    */
    float GetTop ();
    /*

    */
    void SetTop (float value);
    /*
    <summary>
        Gets or sets the bottom.
    </summary>
<value>The bottom.</value>
    */
    float GetBottom ();
    /*

    */
    void SetBottom (float value);
    /*

    */
    void SetAll (float value);
private:
};
}}