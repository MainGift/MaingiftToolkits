#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfMask.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the color mask for bitmaps.
    </summary>
*/
class EXPORTS PdfColorMask : public virtual PdfMask
{
public:
    /*
    <summary>
        Gets or sets the start color.
    </summary>
<value>The start color.</value>
    */
    intrusive_ptr<PdfRGBColor> GetStartColor ();
    /*

    */
    void SetStartColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets or sets the end color.
    </summary>
<value>The end color.</value>
    */
    intrusive_ptr<PdfRGBColor> GetEndColor ();
    /*

    */
    void SetEndColor (intrusive_ptr<PdfRGBColor> value);
private:
};
}}