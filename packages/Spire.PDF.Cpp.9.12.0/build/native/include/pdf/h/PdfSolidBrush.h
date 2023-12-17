#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/Color.h"
#include "PdfComplexColor.h"
#include "PdfBrush.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a brush that fills any object with a solid colour.
    </summary>
*/
class EXPORTS PdfSolidBrush : public virtual PdfBrush
{
public:

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="color">The color.</param>
    PdfSolidBrush(intrusive_ptr<PdfRGBColor> color);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="color">PdfComplexColor</param>
    PdfSolidBrush(intrusive_ptr<PdfComplexColor> color);

    //PdfSolidBrush(intrusive_ptr<Color> color);
    /*
    <summary>
        Gets or sets the color of the brush.
    </summary>
    */
    intrusive_ptr<PdfRGBColor> GetColor ();
    /*

    */
    void SetColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Creates a new copy of a brush.
    </summary>
    <returns>A new instance of the Brush class.</returns>
    */
    virtual intrusive_ptr<PdfBrush> Clone ();
private:
};
}}