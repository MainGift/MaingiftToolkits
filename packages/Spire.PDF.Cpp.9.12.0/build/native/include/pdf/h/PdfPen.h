#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/Color.h"
#include "../h/PdfRGBColor.h"
#include "../h/PdfDashStyle.h"
#include "../h/PdfLineCap.h"
#include "../h/PdfLineJoin.h"
#include "../h/PdfBrush.h"
#include "../h/PdfComplexColor.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        A class defining settings for drawing operations.
    </summary>
*/
class EXPORTS PdfPen : public virtual Object
{
public:
    // <summary>
    // Initializes a new instance of the  class.
    // </summary>
    // <remarks>Doesn't change current colour.</remarks>
    PdfPen();

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="color">The color.</param>
    PdfPen(intrusive_ptr<PdfRGBColor> color);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="color">The color.</param>
    PdfPen(intrusive_ptr<Color> color);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="color">Color of the pen.</param>
    /// <param name="width">Width of the pen's line.</param>
    PdfPen(intrusive_ptr<PdfRGBColor> color, float width);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="brush">The brush.</param>
    PdfPen(intrusive_ptr<PdfBrush> brush);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="brush">The brush.</param>
    /// <param name="width">Width of the pen's line.</param>
    PdfPen(intrusive_ptr<PdfBrush> brush, float width);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="color">PdfComplexColor color</param>
    PdfPen(intrusive_ptr<PdfComplexColor> color);
    /*
    <summary>
        Gets or sets the brush, which specifies the pen behaviour.
    </summary>
<remarks>If the brush is set, the color values are ignored,
            except for PdfSolidBrush.</remarks>
    */
    intrusive_ptr<PdfBrush> GetBrush ();
    /*

    */
    void SetBrush (intrusive_ptr<PdfBrush> value);
    /*
    <summary>
        Gets or sets the color of the pen.
    </summary>
    */
    intrusive_ptr<PdfRGBColor> GetColor ();
    /*

    */
    void SetColor (intrusive_ptr<PdfRGBColor> value);
    /*
    <summary>
        Gets or sets the dash offset of the pen.
    </summary>
    */
    float GetDashOffset ();
    /*

    */
    void SetDashOffset (float value);
    /*
    <summary>
        Gets or sets the dash pattern of the pen.
    </summary>
    */
    std::vector<int> GetDashPattern ();
    /*

    */
    void SetDashPattern (std::vector<float> value);
    /*
    <summary>
        Gets or sets the dash style of the pen.
    </summary>
    */
    PdfDashStyle GetDashStyle ();
    /*

    */
    void SetDashStyle (PdfDashStyle value);
    /*
    <summary>
        Gets or sets the line cap of the pen.
    </summary>
    */
    PdfLineCap GetLineCap ();
    /*

    */
    void SetLineCap (PdfLineCap value);
    /*
    <summary>
        Gets or sets the line join style of the pen.
    </summary>
<value>The line join.</value>
    */
    PdfLineJoin GetLineJoin ();
    /*

    */
    void SetLineJoin (PdfLineJoin value);
    /*
    <summary>
        Gets or sets the width of the pen.
    </summary>
    */
    float GetWidth ();
    /*

    */
    void SetWidth (float value);
    /*
    <summary>
        Gets or sets the miter limit.
    </summary>
    */
    float GetMiterLimit ();
    /*

    */
    void SetMiterLimit (float value);
    /*
    <summary>
        Clones this instance.
    </summary>
    <returns>A new pen with the same properties.</returns>
    */
    intrusive_ptr<PdfPen> Clone ();
private:
    
};
}}