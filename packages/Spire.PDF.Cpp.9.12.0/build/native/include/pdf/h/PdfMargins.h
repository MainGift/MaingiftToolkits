#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        A class representing page margins.
    </summary>
*/
class EXPORTS PdfMargins : public virtual Object
{
public:
    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    PdfMargins();

    /// <summary>
    /// Create and initialize margin.
    /// </summary>
    /// <param name="margin">The margin size.</param>
    PdfMargins(float margin);

    /// <summary>
    /// Create and initialize margin.
    /// </summary>
    /// <param name="leftRight">The left right.</param>
    /// <param name="topBottom">The top bottom.</param>
    PdfMargins(float leftRight, float topBottom);

    /// <summary>
    /// Create and initialize margin.
    /// </summary>
    /// <param name="left">The left.</param>
    /// <param name="top">The top.</param>
    /// <param name="right">The right.</param>
    /// <param name="bottom">The bottom.</param>
    PdfMargins(float left, float top, float right, float bottom);
    /*
    <summary>
        Gets or sets the left margin size.
    </summary>
    */
    float GetLeft ();
    /*

    */
    void SetLeft (float value);
    /*
    <summary>
        Gets or sets the top margin size.
    </summary>
    */
    float GetTop ();
    /*

    */
    void SetTop (float value);
    /*
    <summary>
        Gets or sets the right margin size.
    </summary>
    */
    float GetRight ();
    /*

    */
    void SetRight (float value);
    /*
    <summary>
        Gets or sets the bottom margin size.
    </summary>
    */
    float GetBottom ();
    /*

    */
    void SetBottom (float value);
    /*

    */
    void SetAll (float value);
    /*
    <summary>
        Clones the object.
    </summary>
    <returns>The cloned object.</returns>
    */
    //virtual System.Object Clone ();
private:
};
}}