#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Class allowing to convert different unit metrics. Converting is 
            based on Graphics object DPI settings that is why for differ
            graphics settings must be created new instance. For example:
            printers often has 300 and greater dpi resolution, for compare
            default display screen dpi is 96.
    </summary>
*/
class EXPORTS PdfUnitConvertor : public virtual Object
{
public:
    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    PdfUnitConvertor();

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="dpi">The dpi.</param>
    PdfUnitConvertor(float dpi);

    /// <summary>
    /// Converts the value, stored in "from" units, to value in "to" units
    /// </summary>
    /// <param name="value">Value to convert</param>
    /// <param name="from">Indicates units to convert from</param>
    /// <param name="to">Indicates units to convert to</param>
    /// <returns>Value stored in "to" units</returns>
    float ConvertUnits (float value,PdfGraphicsUnit from,PdfGraphicsUnit to);

    /// <summary>
    /// Converts the value, stored in "from" units, to pixels
    /// </summary>
    /// <param name="value">Value to convert</param>
    /// <param name="from">Indicates units to convert from</param>
    /// <returns>Value stored in pixels</returns>
    float ConvertToPixels (float value,PdfGraphicsUnit from);

    // <summary>
    // Converts the rectangle location and size to Pixels from specified 
    // measure units
    // </summary>
    // <param name="rect">source rectangle</param>
    // <param name="from">source rectangle measure units</param>
    // <returns>Rectangle with Pixels</returns>
    intrusive_ptr<RectangleF> ConvertToPixels (intrusive_ptr<RectangleF> rect,PdfGraphicsUnit from);

    // <summary>
    // Converts point from specified measure units to pixels
    // </summary>
    // <param name="point">source point for convert</param>
    // <param name="from">measure units</param>
    // <returns>point in pixels coordinates</returns>
    intrusive_ptr<PointF> ConvertToPixels (intrusive_ptr<PointF> point,PdfGraphicsUnit from);

    // <summary>
    // Converts size from specified measure units to pixels
    // </summary>
    // <param name="size">source size</param>
    // <param name="from">measure units</param>
    // <returns>size in pixels</returns>
    intrusive_ptr<SizeF> ConvertToPixels (intrusive_ptr<SizeF> size,PdfGraphicsUnit from);

    // <summary>
    // Converts value, stored in pixels, to value in "to" units
    // </summary>
    // <param name="value">Value to convert</param>
    // <param name="to">Indicates units to convert to</param>
    // <returns>Value stored in "to" units</returns>
    float ConvertFromPixels (float value,PdfGraphicsUnit to);

    // <summary>
    // Converts rectangle in Pixels into rectangle with specified 
    // measure units
    // </summary>
    // <param name="rect">source rectangle in pixels units</param>
    // <param name="to">convert to units</param>
    // <returns>output Rectangle in specified units</returns>
    intrusive_ptr<RectangleF> ConvertFromPixels (intrusive_ptr<RectangleF> rect,PdfGraphicsUnit to);

    // <summary>
    // Converts rectangle from pixels to specified units
    // </summary>
    // <param name="point">point in pixels units</param>
    // <param name="to">convert to units</param>
    // <returns>output Point in specified units</returns>
    intrusive_ptr<PointF> ConvertFromPixels (intrusive_ptr<PointF> point,PdfGraphicsUnit to);

    // <summary>
    // Converts Size in pixels to size in specified measure units
    // </summary>
    // <param name="size">source size</param>
    // <param name="to">convert to units</param>
    // <returns>output size in specified measure units</returns>
    intrusive_ptr<SizeF> ConvertFromPixels (intrusive_ptr<SizeF> size,PdfGraphicsUnit to);
private:
};
}}