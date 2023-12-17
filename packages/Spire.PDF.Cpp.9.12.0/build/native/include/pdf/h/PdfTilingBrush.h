#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/SizeF.h"
//#include "../../common/h/RectangleF.h"
#include "PdfCanvas.h"
#include "PdfBrush.h"
#include "PdfNewPage.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Implements a colored tiling brush.
    </summary>
*/
class EXPORTS PdfTilingBrush : public virtual PdfBrush
{
public:
    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="rectangle">The boundaries of the smallest brush cell.</param>
    PdfTilingBrush(intrusive_ptr<RectangleF> rectangle);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="rectangle">The boundaries of the smallest brush cell.</param>
    /// <param name="page">The Current Page Object.</param>
    PdfTilingBrush(intrusive_ptr<RectangleF> rectangle, intrusive_ptr<PdfNewPage> page);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="size">The size of the smallest brush cell.</param>
    PdfTilingBrush(intrusive_ptr<SizeF> size);

    /// <summary>
    /// Initializes a new instance of the  class.
    /// </summary>
    /// <param name="size">The size of the smallest brush cell.</param>
    /// <param name="page">The Current Page Object.</param>
    PdfTilingBrush(intrusive_ptr<SizeF> size, intrusive_ptr<PdfNewPage> page);
    /*
    <summary>
        Gets the boundary box of the smallest brush cell.
    </summary>
    */
    intrusive_ptr<RectangleF> GetRectangle ();
    /*
    <summary>
        Gets the size of the smallest brush cell.
    </summary>
    */
    intrusive_ptr<SizeF> GetSize ();
    /*
    <summary>
        Gets Graphics context of the brush.
    </summary>
    */
    intrusive_ptr<PdfCanvas> GetGraphics ();
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