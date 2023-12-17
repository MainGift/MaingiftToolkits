#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/PointF.h"
#include "PdfRGBColor.h"
#include "PdfGradientBrush.h"
#include "PdfBlend.h"
#include "PdfColorBlend.h"
#include "PdfExtend.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represent radial gradient brush.
    </summary>
*/
class EXPORTS PdfRadialGradientBrush : public virtual PdfGradientBrush
{
public:
    PdfRadialGradientBrush();

    PdfRadialGradientBrush(intrusive_ptr<PointF> centreStart, float radiusStart, intrusive_ptr<PointF> centreEnd, float radiusEnd, intrusive_ptr<PdfRGBColor> colorStart, intrusive_ptr<PdfRGBColor> colorEnd);

    PdfRadialGradientBrush(intrusive_ptr<PointF> centreStart, float radiusStart, intrusive_ptr<PointF> centreEnd, float radiusEnd, std::vector<intrusive_ptr<PdfRGBColor>> colors, std::vector<float> positions);

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
        Gets or sets the rectangle.
    </summary>
<value>The rectangle.</value>
    */
    intrusive_ptr<RectangleF> GetRectangle ();
    /*

    */
    void SetRectangle (intrusive_ptr<RectangleF> value);
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