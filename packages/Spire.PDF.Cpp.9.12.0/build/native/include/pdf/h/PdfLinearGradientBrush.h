#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfExtend.h"
//#include "../../common/h/RectangleF.h"
//#include "../../common/h/PointF.h"
#include "PdfBlend.h"
#include "PdfColorBlend.h"
#include "PdfBrush.h"
#include "PdfRGBColor.h"
#include "PdfLinearGradientBrush.h"
#include "PdfLinearGradientMode.h"
#include "PdfGradientBrush.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Implements linear gradient brush by using PDF axial shading pattern.
    </summary>
*/
class EXPORTS PdfLinearGradientBrush : public virtual PdfGradientBrush
{
public:
    PdfLinearGradientBrush(void);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="point1">The starting point of the gradient.</param>
    /// <param name="point2">The end point of the gradient.</param>
    /// <param name="color1">The starting color of the gradient.</param>
    /// <param name="color2">The end color of the gradient.</param>
    PdfLinearGradientBrush(intrusive_ptr<PointF> point1, intrusive_ptr<PointF> point2, intrusive_ptr<PdfRGBColor> color1, intrusive_ptr<PdfRGBColor> color2);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="rect">A RectangleF structure that specifies the bounds of the linear gradient. </param>
    /// <param name="color1">The starting color for the gradient.</param>
    /// <param name="color2">The ending color for the gradient.</param>
    /// <param name="mode">The mode.</param>
    PdfLinearGradientBrush(intrusive_ptr<RectangleF> rect, intrusive_ptr<PdfRGBColor> color1, intrusive_ptr<PdfRGBColor> color2, PdfLinearGradientMode mode);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="rect">A RectangleF structure that specifies the bounds of the linear gradient.</param>
    /// <param name="color1">The starting color for the gradient.</param>
    /// <param name="color2">The ending color for the gradient.</param>
    /// <param name="angle">The angle, measured in degrees clockwise from the x-axis,
    /// of the gradient's orientation line.</param>
    PdfLinearGradientBrush(intrusive_ptr<RectangleF> rect, intrusive_ptr<PdfRGBColor> color1, intrusive_ptr<PdfRGBColor> color2, float angle);

    /*
    <summary>
        Gets or sets a PdfBlend that specifies positions
            and factors that define a custom falloff for the gradient.
    </summary>
    */
    intrusive_ptr<PdfBlend> GetBlend ();
    /*

    */
    void SetBlend (intrusive_ptr<PdfBlend> value);
    /*
    <summary>
        Gets or sets a ColorBlend that defines a multicolor linear gradient.
    </summary>
    */
    intrusive_ptr<PdfColorBlend> GetInterpolationColors ();
    /*

    */
    void SetInterpolationColors (intrusive_ptr<PdfColorBlend> value);
    /*
    <summary>
        Gets or sets the starting and ending colors of the gradient.
    </summary>
    */
    std::vector<intrusive_ptr<PdfRGBColor>> GetLinearColors ();
    /*

    */
    void SetLinearColors (std::vector<intrusive_ptr<PdfRGBColor>> value);
    /*
    <summary>
        Gets a rectangular region that defines
            the boundaries of the gradient.
    </summary>
    */
    intrusive_ptr<RectangleF> GetRectangle ();
    /*
    <summary>
        Gets or sets the value indicating whether the gradient
            should extend starting and ending points.
    </summary>
    */
    PdfExtend GetExtend ();
    /*

    */
    void SetExtend (PdfExtend value);
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