#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS PdfEdges : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the left.
    </summary>
<value>The left.</value>
    */
    int GetLeft ();
    /*

    */
    void SetLeft (int value);
    /*
    <summary>
        Gets or sets the right.
    </summary>
<value>The right.</value>
    */
    int GetRight ();
    /*

    */
    void SetRight (int value);
    /*
    <summary>
        Gets or sets the top.
    </summary>
<value>The top.</value>
    */
    int GetTop ();
    /*

    */
    void SetTop (int value);
    /*
    <summary>
        Gets or sets the bottom.
    </summary>
<value>The bottom.</value>
    */
    int GetBottom ();
    /*

    */
    void SetBottom (int value);
    /*

    */
    void SetAll (int value);
private:
};
}}