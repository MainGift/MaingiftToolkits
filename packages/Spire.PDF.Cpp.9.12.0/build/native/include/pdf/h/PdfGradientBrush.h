#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfBrush.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Implements gradient brush capabilities.
    </summary>
*/
class EXPORTS PdfGradientBrush : public virtual PdfBrush
{
public:
    /*
    <summary>
        Gets or sets the background color of the brush.
    </summary>
<remarks>This value is optional. If null is assigned to it,
            the associated entry is removed from the appropriate dictionary.</remarks>
    */
    intrusive_ptr<PdfRGBColor> GetBackground ();
    /*

    */
    void SetBackground (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets or sets a value indicating whether use anti aliasing algorithm.
    </summary>
    */
    bool GetAntiAlias ();
    /*

    */
    void SetAntiAlias (bool value);
    /*

    */
    virtual void Dispose ();
private:
};
}}